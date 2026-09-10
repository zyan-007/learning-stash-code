#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    string s;

    cin >> s;
    // cout << s.size();

    int total_count = 0;
    
    for(int i = 0; i < s.size(); i+=k){
        int t = k;
        int flag = 0;
        int j = i;
        while(t--){
            if(s[j] == '0'){
                flag = 1;
                break;
            }
            j++;
        }
        // cout << i << total_count << endl;
        if (flag == 0)
            total_count++;
    }

    cout << total_count << endl;

    

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}