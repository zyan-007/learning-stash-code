#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector <string> v(n);

    for(int i = 0; i < n; ++i)
        cin >> v[i];

    for(int i = 0; i < n; ++i){
        if(v[i].length() <= 10) 
            cout << v[i] << endl;
        else{
            cout << v[i][0];
            cout << v[i].length()-2;
            cout << v[i][v[i].length()-1] << endl;
        }
    }

    return 0;
}