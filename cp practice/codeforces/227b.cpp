#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector <int> a(n);

    for(int& i: a)
        cin >> i;
    
    int m;
    cin >> m;
    vector <int> b(m);

    for(int& i: b)
        cin >> i;

    vector <int> pos(n+1);

    for(int i = 0; i < n; ++i){
        pos[a[i]] = i+1;
    }


    long long int count1 = 0;
    long long int count2 = 0;
    for(int i = 0; i < m; ++i){
        count1 += pos[b[i]];
        count2 += (n - pos[b[i]] + 1);
    }

    cout << count1 << " " << count2 << endl;

    return 0;
}