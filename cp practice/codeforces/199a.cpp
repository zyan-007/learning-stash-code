#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n == 0)
        cout << "0 0 0";
    else if(n == 1)
        cout << "1 0 0";
    else if(n == 2)
        cout << "1 1 0";
    else if(n == 3)
        cout << "1 1 1";
    else{
        int f0 = 0;
        int f1 = 1;

        vector <int> a;

        int temp;
        while(f1 != n){
            temp = f1;
            f1 += f0;
            f0 = temp;
        }
        a.push_back(f0);
        // cout << f0 << " ";
        f1 -= f0;
        f0 -= f1;
        a.push_back(f0);
        // cout << f0 << " ";
        // cout << f1-f0;
        a.push_back(f1-f0);

        for(int i = 2; i >= 0; --i)
            cout << a[i] << " ";
    }

    return 0;
}