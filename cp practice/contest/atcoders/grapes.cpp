#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n, 0);

    int i = 0;
    while(m){
        a[i] += 1;
        i++;
        if(i == n)
            i = 0;
        m--;
    }

    for(int&i: a)
        cout << i << endl;

    return 0;
}