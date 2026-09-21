#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(3);
    int min = INT_MIN;
    for(int &i: a){
        cin >> i;
        if((n-i) > min)
            min = (n-i);
    }

    cout << min << endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}