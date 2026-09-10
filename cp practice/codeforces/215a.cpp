#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n;

    vector <int> a(n);

    for(int &i: a)
        cin >> i;

    cin >> m;

    vector <int> b(m);

    for(int &i: b)
        cin >> i;

    int max_gear_ratio = -1;
    int total_count = 0;


    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(b[j] % a[i] == 0){
                if((b[j] / a[i]) == max_gear_ratio)
                    total_count++;
                else if((b[j] / a[i]) > max_gear_ratio){
                    total_count = 1;
                    max_gear_ratio = (b[j] / a[i]);
                }
            }
        }
    }

    cout << total_count << endl;

    return 0;
}