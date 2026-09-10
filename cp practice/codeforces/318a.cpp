#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, k;
    cin >> n >> k;

    if(n % 2 == 0)
        cout << ((k <= (n/2)) ? (1+(2*(k-1)) ): (2 + (2*(k-((n/2)+1)))));
    else    
        cout << ((k <= (n/2)+1) ? (1+(2*(k-1))) : (2 + (2*(k-((n/2)+2)))));

    return 0;
}