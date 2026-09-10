#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int a, b;
    int count = 0;
    for(a = 0; a <= sqrt(n); ++a){
        b = n - (a*a);

        if (a == (m - (b*b)))       
            ++count;
        // cout << a << " " << b << "-" << endl;
    }

    cout << count << endl;
    return 0;
}