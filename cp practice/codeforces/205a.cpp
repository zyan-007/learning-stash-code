#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> cities(n);

    for(long long& i: cities)
        cin >> i;
    
    int index = -1;
    long long mini = LLONG_MAX;

    for(int i = 0; i < cities.size(); ++i){
        if (cities[i] < mini){
            mini = cities[i];
            index = i;
        }
        else if (cities[i] == mini){
            index = -1;
        }
    }

    if(index != -1)
        cout << index+1;
    else
        cout << "Still Rozdil";

    return 0;
}