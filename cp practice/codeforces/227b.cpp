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

    int count1 = 0;
    int count2 = 0;


    for(int i = 0; i < b.size(); ++i){     
        int found = 0;   
        for(int j = 0; j < a.size(); ++j){
            found++;
            if(b[i] == a[j])
                break;
        }
        count1 += found;
        count2 += (b.size()-found)+1;

    }

    cout << count1 << " " << count2;

    return 0;
}