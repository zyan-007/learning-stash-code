#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector <int> a(n);
    
    for(int& i: a)
        cin >> i;

    for(int i = 0; i < a.size()-1; ++i){
        int k = i+1;
        while(k < a.size()){
            if(a[i] == a[k]){
                a[i] = 0;
                a[k] = 0;
                break;
            }
            k++;
        }
    }

    cout << accumulate(a.begin(), a.end(), 0);


    return 0;
}