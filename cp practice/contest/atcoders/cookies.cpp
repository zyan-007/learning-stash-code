#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];

    int position_1 = 0;
    int total_distance = 0;
    // cout << endl;
    while(a.size() != 0){
        int dist = INT_MAX;
        int index = 0;

        for(int j = 0; j < a.size(); ++j){
            if(abs(position_1-a[j]) < dist){
                // cout << "***" << dist << " " << abs(position_1-a[j]) << "***" << endl;
                dist = abs(position_1-a[j]);
                index = j;
            }
        }

        total_distance += dist;
        // cout << dist << endl;
        position_1 = a[index];
        // cout << position_1 <<  " " << a[index] << endl;
        a.erase(a.begin() + index);
    }

    cout << total_distance;
    return 0;
}