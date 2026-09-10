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


    sort(a.begin(), a.end(), greater<int>());

    vector<int>::iterator it = a.end();

    // cout << *(a.end()-1) << endl;
    if(a.back() != 0)
        cout << -1 << endl;
    else{
        int count = 0;
        while(a.back() == 0){
            a.pop_back();
            ++count;
        }

        int sum;
        while(!(a.empty())){
            sum = accumulate(a.begin(), a.end(), 0);
            if(sum % 9 == 0)
                break;
            a.pop_back();
        }

        if(a.empty()){
            cout << 0 << endl;
        }
        else{
            for(int& i: a)
                cout << i;
            for(int i = 0; i < count; ++i){
                cout << 0;
            }
        }
    }

    return 0;
}