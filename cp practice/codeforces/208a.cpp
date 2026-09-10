#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); ++i){
        if((i+2) < s.size() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i += 2;
        }
        else{
            cout << s[i];
            if((i+3) < s.size() && s[i+1] == 'W' && s[i+2] == 'U' && s[i+3] == 'B'){
                cout << " ";
                i += 3;
            }
        }
    }

    return 0;
}