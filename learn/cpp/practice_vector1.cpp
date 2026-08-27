#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;


int main(){
    // int n, m;
    // cin >> n >> m;

    // vector <vector <int>> a(n, vector<int>(m));

    // for(auto& v: a)
    //     for (auto& t: v)
    //         cin >> t;

    // vector<int> row_sum(n, 0);
    // vector<int> col_sum(m, 0);

    // for(int i = 0; i < n; ++i) // row sum
    //     row_sum[i] = accumulate(a[i].begin(), a[i].end(), 0);

    // for(int i = 0; i < n; ++i){ // column sum
    //     for(int j = 0; j < m; ++j){
    //         col_sum[j] += a[i][j];
    //     }
    // }

    // cout << "Row sum: ";
    // for(auto t: row_sum)
    //     cout << t << " ";
    // cout << endl;

    // cout << "Column sum: ";
    // for(auto t: col_sum)
    //     cout << t << " ";
    // cout << endl;


    // int n, m;
    // cin >> n >> m;

    // vector <vector<int>> a(n, vector<int>(m));

    // for(int i = 0; i < n; ++i)
    //     for(int j = 0; j < m; ++j)
    //         cin >> a[i][j];

    // vector <vector<int>> transpose(m, vector<int>(n));

    // for(int i = 0; i < m; ++i){
    //     for(int j = 0; j < n; ++j){
    //         transpose[i][j] = a[j][i];
    //     }
    // }

    // for(const auto& v: transpose){
    //     for(const auto i: v)
    //         cout << i << " ";
    //     cout << endl;
    // }
    
    int n, m;
    cin >> n >> m;

    vector <vector<int>> a(n, vector<int>(m));

    int max_sum = INT_MIN;
    int index = -1;

    for(auto& v: a)
        for(auto& i: v)
            cin >> i;

    // for(int i = 0; i < n; ++i){
    //     int sum = 0;
    //     for(int j = 0; j < m; ++j){
    //         sum += a[i][j];
    //     }

    //     if(sum > max_sum){
    //         max_sum = sum;
    //         index = i;
    //     }
    // }

    // cout << "Max sum: " << max_sum << ", Max index: " << index << endl;
    
    vector<int> row_sum(n);

    for(int i = 0; i < n; ++i){
        row_sum[i] = accumulate(a[i].begin(), a[i].end(), 0);
    }
    int max_i = *max_element(row_sum.begin(), row_sum.end());

    cout << "max sum: " << max_i << ", index: " << find(row_sum.begin(), row_sum.end(), max_i)-row_sum.begin();
    
    
    return 0;
}