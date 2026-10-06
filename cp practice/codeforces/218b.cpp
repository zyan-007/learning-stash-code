#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    priority_queue<int> major;
    priority_queue<int, vector<int>, greater<int>> minor;

    for(int i = 0; i < m; ++i){
        int t;
        cin >> t;
        major.push(t);
        minor.push(t);
    }

    int max_collection = 0;
    int min_collection = 0;

    while(n--){
        max_collection += major.top();
        min_collection += minor.top();

        // cout << major.top() << " - " << minor.top() << endl;
        int temp = major.top();
        temp -= 1;
        major.pop();
        if (!(temp <= 0))
            major.push(temp);

        temp = minor.top();
        temp -= 1;
        minor.pop();
        if (!(temp <= 0))
            minor.push(temp);
    }

    cout << max_collection << " " << min_collection << endl;

    return 0;
}