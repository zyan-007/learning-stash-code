#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<long long> a(n);

    for(long long& i: a)
        cin >> i;
    

    for(long long& i: a){
        if(i % 2 != 0)
            i = 1;
        else{
            i %= 4;
        }
    }

    sort(a.begin(), a.end());
    // for(long long&i: a) 
    //     cout << i << " ";
    // cout << endl;

    int max = 1;
    int current = a[0];
    int count = 1;
    for(int i = 1; i < n; ++i){
        if(current == a[i])
            ++count;
        else    
            count = 1;

        if(count > max)
            max = count;

        current = a[i];
        // cout << count << endl;
    }

    cout << max << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}