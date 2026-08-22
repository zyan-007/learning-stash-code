#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    vector <char> s1;
    cin >> s;

    int totalCount = 0;
    for(int i = 0; i < s.length(); ++i){
        if(!(count(s1.begin(), s1.end(), s[i]) == 1))
            s1.push_back(s[i]);
    }

    // for(char i: s1)
    //     cout << i << " ";
    // cout << endl;
    // cout << s1.size() << endl;

    if(!(s1.size()&1))
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}