#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    vector<int> a(d);
    for(int i = 0; i < d; ++i)
        a[i] = i+1;

    int k_in = k, l_in = l, m_in = m, n_in = n; 
    int count = 0;
    for(int i = 1; i <= d; ++i){
        if(i == (k_in)){
            a[i-1] = -1;
            k_in += k;
        }
        if (i == (l_in)){
            a[i-1] = -1;
            l_in += l;
        }
        if (i == (m_in)){
            a[i-1] = -1;
            m_in += m;
        }
        if(i == (n_in)){
            a[i-1] = -1;
            n_in += n;
        }
    }

    for(int i = 0; i < d; ++i){
        if(a[i] == -1)
            ++count;
    }

    cout << count;

    return 0;
}