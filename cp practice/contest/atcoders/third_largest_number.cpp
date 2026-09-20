#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    vector <long long> a(n);
    deque <long long> b;
    for(long long& i: a)
        cin >> i;


    for(long long i = 0; i < 3; ++i)
        b.push_back(a[i]);
    sort(b.begin(), b.end(), greater<int>());

    // for(long long &i: b)
    //     cout << i << " ";
    // cout << endl;

    cout << b[2] << endl;
    for(long long i = 4; i <= n; ++i){
        if (a[i-1] >= b[0])
            b.push_front(a[i-1]);
        else if(a[i-1] >= b[1])
            b.insert(b.begin()+1, a[i-1]);
        else if(a[i-1] >= b[2])
            b.insert(b.begin()+2, a[i-1]);
        else    
            b.push_back(a[i-1]);

        cout << b[2] << endl;
            
    }




    return 0;
}