#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;

    if(abs(a-b) < abs(a+c-b)){
        a += c;
        c = 0;
    }

    if(abs(a-b) > abs(b+c-a)){
        b += c;
        c = 0;
    }

    cout << abs(a-b) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}