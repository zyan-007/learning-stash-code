#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long q;
    cin >> q;

    string s, t;
    cin >> s;
    cin >> t;

    // vector<vector<long long>> query(q, vector<long long>(2));

    // for(auto& i: query)
    //     cin >> i[0] >> i[1];
    
    // vector<long long> p;
    long long t_size = t.size();

    int l, r;
    for(int i = 0; i < q; ++i){
        cin >> l >> r;
        size_t pos = s.find(t, (l-1));
        if (pos == string::npos)
            cout << "No" << endl;
        else{
            pos++;
            // cout << pos << "**" << endl;
            if(pos >= (l) && (pos+(t_size-1)) <= (r)){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }


    
    return 0;
}