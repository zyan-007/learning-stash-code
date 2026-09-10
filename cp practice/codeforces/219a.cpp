#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    string s;
    cin >> s;

    string p = s;

    sort(s.begin(), s.end());

    vector <char> a;

    for(char &i: s)
        a.push_back(i);

    a.erase(unique(a.begin(), a.end()), a.end());

    vector <int> b;


    for(char &i: a)
        b.push_back(count(s.begin(), s.end(), i));

    // checking if it'll be possible or not

    int flag = 0;
    for(int i = 0; i < b.size(); ++i){
        if (b[i] % k != 0){
            flag = 1;
            break;
        }
    }

    if(k == 1)
        cout << p;
    else if (flag == 1)
        cout << -1;
    else{
        int t = k;
        while(t--){
            for(int i = 0; i < a.size(); ++i){
                int st = b[i]/k;

                while(st--){
                    cout << a[i];
                }
            }
        }
    }

    return 0;
}