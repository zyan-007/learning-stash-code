#include <bits/stdc++.h>
using namespace std;

#define add(a, b) a+b
#define sub(a, b) a-b
#define mul(a, b) a*b
#define div(a, b) a/b


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float a, b;
    cin >> a >> b;

    if((add(a, b) == 9) || (sub(a, b) == 9) || (mul(a, b) == 9) || (div(a, b) == 9.0))
        cout << "Nine";
    else
        cout << "Nein";

    return 0;
}