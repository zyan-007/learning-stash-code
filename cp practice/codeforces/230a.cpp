#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, n;
    cin >> s >> n;

    map<int, int> d;

    int minus = 0;
    for(int i = 0; i < n; ++i){
        int key, value;
        cin >> key >> value;
        if(d.count(key) == 1){
            d[key] += value;
            minus++;
        }
        else
            d[key] = value;
    }


    // for(auto&[key, value]: d)
    //     cout << key << "-" << value << endl;
    // cout << endl;

    int count = 0;
    for(auto&i: d){
        if(s > i.first){
            count++;
            s += i.second;
        }
        else
            break;
    }

    if(count == (n-minus))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}