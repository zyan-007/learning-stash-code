#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    string s;
    cin >> s;

    vector<long long> v(n);
    for(long long i = 0; i < n; ++i){
        v[i] = s[i] - '0';
    }

    vector<long long> v1 = v;
    sort(v.begin(), v.end());

    long long count = 0;
    for(long long i = 0; i < n; ++i){
        if(v[i] != v1[i])
            count++;
    }

    cout << count << endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}