#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> f(m);

    for(int& i: f)
        cin >> i;

    sort(f.begin(), f.end());

    vector<int> grade(n);

    for(int i = 0; i < n; ++i)
        grade[i] = f[i];

    cout << max(grade.begin(), grade.end());
    return 0;
}