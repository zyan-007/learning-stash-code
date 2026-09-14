#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // string k;
    // cin >> k;

    // reverse(k.begin(), k.end());

    // cout << k;


    // list<int> t(5);

    // for(int&i: t)
    //     cin >> i;

    // t.remove(4);

    // cout << "print" << endl;
    // t.insert(next(t.begin(), 2), -1);
    // for(auto&i: t)
    //     cout << i << " ";


    priority_queue <int> pq;
    pq.push(5);
    pq.push(10);
    pq.push(11);

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}