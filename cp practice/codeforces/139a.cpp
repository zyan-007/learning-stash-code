#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(7);

    for(auto &i: a)
        cin >> i;
    
    int i;
    for(i = 0; i < 7; ++i){
        n -= a[i];

        if(n < 1)
            break;
        
        if(n >= 1 && i == 6)
            i = -1;

        // cout << i << endl;
    }

    cout << i+1;

    return 0;
}