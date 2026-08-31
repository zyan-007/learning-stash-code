#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long int x , y; // row and column question creates confusion
    cin >> x >> y;

    long long int max_xy = max(x, y);
    long long int value_max = 1+(2*(((max_xy-1) * (1 + (max_xy-1)))/2));
    // cout <<  max_xy << " " << value_max << endl;

    // cout << value_max << " ";
    if(max_xy % 2 != 0){
        value_max += (max_xy-x);
        value_max -= (max_xy-y);
    }
    else{
        value_max -= (max_xy-x);
        value_max += (max_xy-y);
    }

    cout << value_max << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}