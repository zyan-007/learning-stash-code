#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> d;

    for(char&i: s){
        if(i == '0')
            d.push_back(0);
        else
            d.push_back(1);
    }

    string t = s;   

    sort(t.begin(), t.end());

    if(s == t)
        cout << 0 << endl;
    else{
        if(s[0] == '1'){
            cout << count(s.begin(), s.end(), '0') << endl;
        }
        else{
            int cost = 0;
            int final_cost;
            for(int i = 1; i < n; ++i){
                if(d[i] != 1)
                    cost++; 
            }
            final_cost = cost;

            if (n > 2){
                for(int i = 1; i < n; ++i){
                    if(d[i] == 0)
                        cost--;
                    else
                        cost++;

                    if(cost < final_cost)
                        final_cost = cost;
                }
            }

            cout << final_cost << endl;

        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}