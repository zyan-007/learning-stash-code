#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<long long> a(n);
    for(int i = 0; i < n; ++i)
        a[i] = i+1;
    
    deque<long long> t(m);
    for(long long& i: t)
        cin >> i;

    long long time = 0;
    long long current = 1;

    while(!t.empty()){
        if(current <= t.front()){
            time += t.front()-current;
        }
        else{
            time += n-current + t.front();
        }
        current = t.front();
        t.pop_front();
    }

    cout << time << endl;

    return 0;
}