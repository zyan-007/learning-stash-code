#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if(s[s.size()-1] == 'e')
        cout << s << "r" << endl;
    else
        cout << s << "er" << endl;

    return 0;
}