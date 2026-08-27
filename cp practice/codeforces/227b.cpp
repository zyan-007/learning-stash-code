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
    
    int m;
    cin >> m;
    vector <int> b(m);

    for(int& i: b)
        cin >> i;

    int count1  = 0;
    int count2 = 0;

    for(int i = 0; i < int(b.size()); ++i){
        for(int j = 0; j < int(a.size()); ++j){
            count1++;
            if(b[i] == a[j])
                break;
        }
    }

    for(int i = 0; i < int(b.size()); ++i){
        for(int j = int(a.size())-1; j >= 0; --j){
            count2++;
            if(b[i] == a[j])
                break;
        }
    }

    cout << count1 << " " << count2;


    return 0;
}