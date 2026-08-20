#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector <int> v;

    for(int i = 0; i < s.length(); ++i){
        if(s[i] != '+')
            v.push_back(s[i] - '0');
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size()-1; ++i){
        cout << v[i] << "+";
    }
    cout << v[v.size()-1];
    return 0;
}