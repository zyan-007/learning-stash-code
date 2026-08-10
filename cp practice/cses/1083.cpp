#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    const int MAXN = 2e5 + 5;
    cin >> n;

    int a[MAXN];

    for(int i = 0; i < n-1; ++i){
        cin >> a[i];
    }


    int sum = 0;
    for(int i = 1; i <= n; ++i)
        sum += i;

    // cout << sum << endl;
    for(int i = 0; i < n-1; ++i)
        sum -= a[i];

    cout << sum;
    return 0;
}