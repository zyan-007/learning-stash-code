#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1;
    string s2;

    cin >> s1 >> s2;

    int count = 0;
    for(int i = 0; i < s1.length(); ++i){
        if(tolower(s1[i]) < tolower(s2[i])){
            count = -1;
            break;
        }
        else if(tolower(s1[i]) > tolower(s2[i])){
            count = 1;
            break;
        }
    }

    if(count == 0)
        cout << 0;
    else
        cout << count;


    return 0;
}