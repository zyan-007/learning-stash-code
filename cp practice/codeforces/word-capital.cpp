#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    cin >> a;

    a[0] -= (a[0] >= 'a' && a[0] <= 'z') ? 32 : 0;
    cout << a;

    return 0;
}