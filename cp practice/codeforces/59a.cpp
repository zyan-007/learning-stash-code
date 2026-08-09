#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int countLower = 0;
    int countUpper = 0;

    for(int i = 0; i < s.length(); ++i){
        if (s[i] >= 'a' && s[i] <= 'z')
            countLower++;
        else
            countUpper++;
    }

    for(int i = 0; i < s.length(); ++i){
        if((countLower >= countUpper) && (s[i] >= 'A' && s[i] <= 'Z'))
            s[i] += 32;
        else if((countUpper > countLower) && (s[i] >= 'a' && s[i] <= 'z'))
            s[i] -= 32;
    }

    cout << s;

    return 0;
}