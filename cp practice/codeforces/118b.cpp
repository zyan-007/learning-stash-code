#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int z = -1;
    for(int i = 0; i < (2*n)+1; ++i){
        if(i <= n){
            z += 2;
            
            for(int k = 0; k < (n-i); ++k)
                cout << "  ";

            int t = -1;
            for(int j = 0; j < z; ++j){
                if(j <= (z/2))
                    t++;
                else
                    t--;
                
                if(j != (z-1))
                    cout << t << " ";
                else
                    cout << t;
            }

        }
        else{
            z -= 2;
            for(int k = 0; k < (i-n); ++k)
                cout << "  ";
            

            int t = -1;
            for(int j = 0; j < z; ++j){
                if (j <= (z/2))
                    t++;
                else
                    t--;

                if(j != (z-1))
                    cout << t << " ";
                else
                    cout << t;
            }
        }
        cout << endl;
    }

    return 0;
}