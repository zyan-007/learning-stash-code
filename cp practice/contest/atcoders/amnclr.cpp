#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if (s.size() == 2)
        cout << s[0] << "o" << s[1] << endl;
    else{
        cout << s[0];
        int si = s.size();
        for(int i = 1; i < si; ++i)
            cout << "o" << s[i];

    }

    return 0;
}