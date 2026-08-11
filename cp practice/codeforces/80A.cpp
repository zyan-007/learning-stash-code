#include <bits/stdc++.h>
using namespace std;

int is_prime(int num){
    for (int i = 2; i <= num/2; ++i)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , m;
    cin >> n >> m;

    int flag = -1;
    n++;
    // cout << n << endl;
    while (n <= m){
        if(is_prime(n) && n == m)
            flag = 1;
        else if(is_prime(n)){
            flag = 0;
            break;
        }
        // cout << n  << endl;
        n += 1;
    }

    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";
    // cout << n << " " << m << endl;

    return 0;
}