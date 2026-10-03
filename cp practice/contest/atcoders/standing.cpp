#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d;
    cin >> n >> d;

    vector<int> x(n);
    for(int i = 0; i < n; ++i)
        cin >> x[i];

    vector<int> a;

    int count = 0;
    for(int i = 0; i < n; ++i){
        int flag = 0;
        for(int j = 0; j < n; ++j){
            if(i != j){
                if (abs(x[i]-x[j]) < d){
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 0){
            ++count;
            a.push_back(i+1);
        }
    }

    cout << count << endl;
    for(int&i: a)
        cout << i << " ";
    cout << endl;

    
    return 0;
}