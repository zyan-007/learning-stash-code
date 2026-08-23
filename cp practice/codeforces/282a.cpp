#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;

    int x = 0;
    for(int i = 0; i < n; ++i){
        cin >> s;

        if(s == "X++" || s == "++X")
            x++;
        else
            x--;
    }

    cout << x;

    return 0;
}