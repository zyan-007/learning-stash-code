#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);

    for(int &i: a)
        cin >> i;

    int min_s = INT_MAX;
    int first = -1;
    int second = -1;

    for(int i = 0; i < n-1; ++i){
        if(abs(a[i] - a[i+1]) < min_s){
            first = i;
            second = i+1;
            min_s = abs(a[i] - a[i+1]);
        }
    }

    if(abs(a[a.size()-1] - a[0]) < min_s)  {
        first = a.size()-1;
        second = 0;
    }

    first++;
    second++;

    cout << first << " " << second;

    return 0;
}