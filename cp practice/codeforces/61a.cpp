#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    cin >> a;
    string b;
    cin >> b;

    // cout << endl << a << " " << b << endl;
    string k = "";

    for(int i = 0; i < a.length(); ++i){
        if(a[i] != b[i])
            k += "1";
        else
            k += "0";
    }

    cout << k;

    return 0;
}