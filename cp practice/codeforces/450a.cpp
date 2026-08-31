#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector <int> a(n);
    vector <int> b(n);

    for(int i = 0; i < n; ++i){
        cin >> a[i];
        b[i] = i+1;
    }

    while(a.size() != 1){
        if(a[0] <= m){
            a.erase(a.begin());
            b.erase(b.begin());
        }
        else{
            a[0] -= m;
            a.push_back(a[0]);
            b.push_back(b[0]);
            a.erase(a.begin());
            b.erase(b.begin());
        }
    }

    cout << b[0];

    return 0;
}