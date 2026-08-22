#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string p;
    cin >> p;

    int flag = 0;
    for(int i = 0; i < p.length(); ++i){
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
            flag = 1;
            break;
        }
        // cout << p[i];
    }

    if(flag == 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}