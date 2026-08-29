#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector <int> fingers(n);

    for(auto& i: fingers)
        cin >> i;

    int total = accumulate(fingers.begin(), fingers.end(), 0);
    int total_people = n+1;

    int count = 0;

    for(int i = 1; i <= 5; ++i)
        count += ((total+i) % total_people != 1) ? 1 : 0;

    cout << count;

    return 0;
}