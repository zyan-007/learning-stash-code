#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector <int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];


    if (n == 1){
        cout << 0;
    }
    else{
        int total_count = 0;
        int count_up = 0;
        int count_down = 0;
        for(int i = 1; i < n; ++i){
            count_up = 0;
            count_down = 0;
            int j = 0;
            for(; j < i; ++j){
                if(a[i] > a[j])
                    count_up++;
                else if(a[i] < a[j])
                    count_down++;
            }
            if(count_up == j || count_down == j)
                ++total_count;
        }

        cout << total_count;
    }

    return 0;
}