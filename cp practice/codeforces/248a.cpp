#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector <int> left(n);
    vector <int> right(n);

    for(int i = 0; i < n; ++i){
        cin >> left[i];
        cin >> right[i];
    }

    int ans = 0;
    // adding left side 
    ans += n - max(count(left.begin(), left.end(), 0), count(left.begin(), left.end(), 1));
    ans += n - max(count(right.begin(), right.end(), 0), count(right.begin(), right.end(), 1));

    cout << ans << endl;

    return 0;
}