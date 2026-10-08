#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    vector<int> a(n);

    for(int &i: a)
        cin >> i;

    for(int i = 0; i < n; ++i){
        if(a[i] == 1) break;
        else if(a[i] == -1){
            a[i] = 1;
            break;
        }
    }
    for(int i = n-1; i >= 0; --i){
        if(a[i] == 1) break;
        else if(a[i] == -1){
            a[i] = 1;
            break;
        }
    }
    for(int i = 0; i < n; ++i){
        if(a[i] == -1)
            a[i] = 0;
    }

    for(int&i: a)
        cout << i << " ";
    cout << endl;

    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}