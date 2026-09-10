#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector <int> a(n);

    for(int &i: a){
        cin >> i;
        if(i > 0)
            i = 0;
        else
            i *= -1;
    }

    sort(a.begin(), a.end(), greater<int>());
    
    int maxim = accumulate(a.begin(), a.begin()+m, 0);
    cout << maxim << endl;

    return 0;
}