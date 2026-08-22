#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string  a, b, c;

    cin >> a >> b >> c;

    string concat = a+b;

    sort(concat.begin(), concat.end());
    sort(c.begin(), c.end());

    if(concat == c)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}