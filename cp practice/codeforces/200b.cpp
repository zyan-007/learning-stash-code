#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> p(n);

    float sum = 0;
    for(int i = 0; i < n; ++i){
        cin >> p[i];
        sum += p[i];
    }

    sum /= (float)n*100;

    cout << sum*100;

    

    return 0;
}