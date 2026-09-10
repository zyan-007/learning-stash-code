#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    deque <int> a(12);

    for(int& i: a)
        cin >> i;

    sort(a.begin(), a.end(), greater<int>());

    int growth = 0;
    int total = 0;

    while(!(growth >= k)){
        if(a.empty()){
            total = -1;
            break;
        }
        // cout << a.front() << " ";
        growth += a.front();
        a.pop_front();
        total++;
        // cout << "- " << growth << " " << total << "-" << endl; 
    }

    cout << total << endl;
    return 0;
}