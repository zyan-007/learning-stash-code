#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x , y; // row and column question creates confusion
    cin >> x >> y;

    int max_x_y = max(x, y);
    int n = 1 + 2*(((max_x_y-1)/2)*(1+(max_x_y-1)));

    cout << n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}