#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;

    int s = (n - a) - 1;

    if(s > b)
        cout << (n - (a + (s - b))) << endl;
    else
        cout << (s+1) << endl;
    return 0;
}