#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int count = 1;
    int flag = 0;

    for(int i = 0; i < s.size()-1; ++i){
        if(s[i] == s[i+1])
            ++count;
        else
            count = 1;

        if (count == 7){
            flag = 1;
            break;
        }
        // cout << i  << " -> " << s[i]  << "-< " << count<< endl;
    }

    if (flag == 1)
        cout << "YES" << endl;
    else{
        count += 1;
        if(count == 7)
            cout << "NO" << endl;
        else
            cout << "NO" << endl;
    }


    return 0;
}