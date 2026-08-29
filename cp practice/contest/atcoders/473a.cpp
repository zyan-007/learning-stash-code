#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector <int> a(n);
    for(auto &i: a)
        cin >> i;

    cout << accumulate(a.begin()+(n/2), a.end(), 0);

    return 0;
}