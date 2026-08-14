#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int a[n];
    if (n == 1)
        cout << "1";
    else if(n <= 3)
        cout << "NO SOLUTION";
    else if (n == 4)
        cout << "2 4 1 3";
    else{
        for(int i = 0, j = 1; j <= n; ++j, i += 2){
            // cout << i << endl;
            a[i] = j;
            if((n % 2 != 0) && i == (n-1))
                i = -1;
            else if((n % 2 == 0) && i == (n-2))
                i = -1;
        }

        for(int i = 0; i < n; ++i){
            cout << a[i] << " ";
        }
    }
    return 0;
}