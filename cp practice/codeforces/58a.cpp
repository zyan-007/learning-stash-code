#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<char> t = {'h', 'e', 'l', 'l', 'o'};
    int i = 0;
    for(char &c: s){
        if(c == t[i]){
            i++;
            if(i == 5)
                break;
        }
    }

    if(i == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}