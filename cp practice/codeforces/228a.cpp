#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector <int> v(4);

    for(int i = 0; i < 4; ++i)
        cin >> v[i];

    
    int count = 0;
    for(int i = 0; i < 3; ++i){
        for(int j = i+1; j < 4; ++j){
            if(v[i] == v[j] && v[i] != -1){
                v[j] = -1;
                ++count;
            }
        }
        v[i] = -1;
    }

    cout << count;

    return 0;
}