#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector <int> exit(n);
    vector <int> enter(n);

    for(int i = 0; i < n; ++i){
        cin >> exit[i];
        cin >> enter[i];
    }

    int max = 0;
    int count = 0;

    for(int i = 0; i < n; ++i){
            count -= exit[i];
            count += enter[i];

            if(count > max)
                max = count;
    }

    cout << max;

    return 0;
}