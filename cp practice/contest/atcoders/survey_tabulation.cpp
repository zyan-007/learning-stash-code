#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    string a[100];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        for(char &c: a[i])
            c = tolower(c);
    }


    unordered_map <string, int> mp;

    for(int i = 0; i < n; ++i){
        if(mp.find(a[i]) != mp.end())
            mp[a[i]] += 1;
        else
            mp[a[i]] = 1;
    }

    int max = 0;
    for(int i = 0; i < n; ++i){
        if(mp[a[i]] > max)
            max = mp[a[i]];
    }

    cout << max;


    return 0;
}