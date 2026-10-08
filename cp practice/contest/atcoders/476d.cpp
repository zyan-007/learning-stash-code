#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, k;
    cin >> n >> m >> k;

    long long x, y;
    cin >> x >> y;

    priority_queue <long long, vector<long long>, greater<long long>> a;
    priority_queue <long long, vector<long long>, greater<long long>> b;


    long long temp;
    for(long long i = 0; i < n; ++i){
        cin >> temp;
        a.push(temp);
    }


    for(long long i = 0; i < m; ++i){
        cin >> temp;
        b.push(temp);
    }
    long long count = 0;

    while(!(b.empty())){
        if ((y*k) >= b.top()){
            int i;
            for(i = 1; i <= y; ++i)
                if ((i*k) >= (b.top())) break;
            
            x += ((i*k) - (b.top()));
            y -= i;
            ++count;
        }
        else    break;
        b.pop();
    }

    x += y*k;

    while(!(a.empty())){
        cout << x << " / " << a.top() << endl;
        if(x >= a.top()){
            x -= a.top();
            count++;
        }
        else    break;
        a.pop();
    }

    // cout << b.top() << "-" << a.top() << endl;
    // cout << x << " " << y << "->"<< y*k << "**" << x+(y*k) << endl;
    cout << count << endl;
    

    return 0;
}