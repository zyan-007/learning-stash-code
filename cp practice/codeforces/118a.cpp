#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    for(char &i: s){
        char d = tolower(i);

        if(!(d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u' || d == 'y')){
            cout << "." << d;
        }

    }
    cout << endl;

    return 0;
}