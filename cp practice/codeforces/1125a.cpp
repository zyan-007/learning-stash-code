#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x0, y0, R;
    cin >> x0 >> y0 >> R;
    R *= R;

    int x, x_limit, y, y_limit, flag;
    x = x0 - R;
    x_limit = x0 + R;
    y_limit = y0 + R;
    flag = 0;
    while(x <= x_limit){
        y = y0 - R;
        flag = 0;
        while(y <= y_limit){
            if ((pow(x0-x, 2.0) + pow(y0-y, 2.0)) == R){
                // cout << x << " " << y << " " << (pow(x0-x, 2.0) + pow(y0-y, 2.0)) << endl;
                flag = 1;
                break;
            }

            y++;
        }
        if (flag == 1) break;
        x++;
    }

    cout << x << " " << y << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}