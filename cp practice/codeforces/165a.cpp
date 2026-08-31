#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> x(n);
    vector<int> y(n);

    for(int i = 0; i < n; ++i){
        cin >> x[i];
        cin >> y[i];
    }

    int left, right, up, down;
    int superCenterCount = 0;

    for(int i = 0; i < n; ++i){
        left = right = up = down = 0;

        for(int j = 0; j < n; ++j){
            if(x[i] == x[j] && i != j){
                if(y[i] > y[j] && down == 0)
                    down++;
                else if(y[i] < y[j] && up == 0)
                    up++;
            }
            else if(y[i] == y[j] && i != j){
                if(x[i] > x[j] && left == 0)
                    left++;
                else if(x[i] < x[j] && right == 0)
                    right++;
            }
        }

        if(left == 1 && right == 1 && up == 1 && down == 1)
            superCenterCount++;
    }

    cout << superCenterCount;

    return 0;
}