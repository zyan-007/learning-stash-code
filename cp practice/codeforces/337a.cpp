#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> f(m);

    for(int &i: f)
        cin >> i;

    sort(f.begin(), f.end());

    int min = INT_MAX;

    for(int i = 0; i < m-n+1; ++i){
        // cout << f[i] << "-" << f[i+n-1] << " ";
        if(abs(f[i]-f[i+n-1]) < min)
            min = abs(f[i]-f[i+n-1]);
    }

    cout << min << endl;

    return 0;
}