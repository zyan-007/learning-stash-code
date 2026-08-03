#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int a[5][5];

    int find_i, find_j;
    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 5; ++j){
            cin >> a[i][j];

            if (a[i][j] == 1){
                find_i = i;
                find_j = j;
            }
        }
    }


    int count_movement = abs(3-(find_i+1)) + abs(3-(find_j+1));
    cout << count_movement << endl;
    
    return 0;
}