#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; ++i)
        cin >> a[i];

    long long int count = 0;
    for(int i = 1; i < n; ++i){
        while(!(a[i-1] <= a[i])){
            a[i]++;
            count++;
            // cout << i << " " << a[i] << endl;
        }
        // cout << "new" << endl;
    }

    cout << count;


    return 0;
}