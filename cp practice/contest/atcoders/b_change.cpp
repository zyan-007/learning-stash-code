#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    deque<long long> a(n);
    for(long long &i: a)
        cin >> i;
    
    vector <int long> coin(3);

    while(!a.empty()){
        
        long long change = a.front();

        if (change % 1000 != 0){
            change = (((change / 1000) + 1) * 1000) - a.front();

            coin[0] += change % 10;
            change /= 10;
            coin[1] += change % 10;
            change /= 10;
            coin[2] += change % 10;
            // cout << change << endl;
            // break;
        }
        

        a.pop_front();
    }

    cout << coin[0] << " " << coin[1] << " " << coin[2] << endl;

    return 0;
}