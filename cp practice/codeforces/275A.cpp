#include <iostream>
using namespace std;


int main(){
    int a[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int user[3][3];

    for (int i = 0; i < 3; ++i)
        for(int j = 0; j < 3; ++j)
            cin >> user[i][j];

    // cout << endl;

    for(int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            if(user[i][j] == 0)
                continue;
            else if(user[i][j] % 2 != 0){
                a[i][j] = (a[i][j] == 0) ? 1 : 0;
                switch(i){
                    case 0:
                        a[i+1][j] = (a[i+1][j] == 0) ? 1 : 0;
                        if (j == 0)
                            a[i][j+1] = (a[i][j+1] == 0) ? 1 : 0;
                        else if (j == 1){
                            a[i][j+1] = (a[i][j+1] == 0) ? 1 : 0;
                            a[i][j-1] = (a[i][j-1] == 0) ? 1 : 0;
                        }
                        else if (j == 2)
                            a[i][j-1] = (a[i][j-1] == 0) ? 1 : 0;  
                        break;
                    
                    case 1:
                        a[i+1][j] = (a[i+1][j] == 0) ? 1 : 0;
                        a[i-1][j] = (a[i-1][j] == 0) ? 1 : 0;
                        if (j == 0)
                            a[i][j+1] = (a[i][j+1] == 0) ? 1 : 0;
                        else if(j == 1){
                            a[i][j+1] = (a[i][j+1] == 0) ? 1 : 0;
                            a[i][j-1] = (a[i][j-1] == 0) ? 1 : 0;
                        }
                        else if(j == 2)
                            a[i][j-1] = (a[i][j-1] == 0) ? 1 : 0;
                        break;
                    case 2:
                        a[i-1][j] = (a[i-1][j] == 0) ? 1 : 0;
                        if (j == 0)
                            a[i][j+1] = (a[i][j+1] == 0) ? 1 : 0;
                        else if(j == 1){
                            a[i][j+1] = (a[i][j+1] == 0) ? 1 : 0;
                            a[i][j-1] = (a[i][j-1] == 0) ? 1 : 0;
                        }
                        else if(j == 2)
                            a[i][j-1] = (a[i][j-1] == 0) ? 1 : 0;
                        break;
                }
                }
            }
        }

    // cout << endl;

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j)
            cout << a[i][j];
        cout << endl;
    }

    return 0;
}