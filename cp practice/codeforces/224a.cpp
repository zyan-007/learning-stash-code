#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long area1, area2, area3;
    cin >> area1 >> area2 >> area3;

    long long total = (area1 * area2 * area3);

    long long c = sqrt(total/(float)(pow(area1, 2)));
    long long a = sqrt(total/(float)(pow(area2, 2)));
    long long b = sqrt(total/(float)(pow(area3, 2)));

    cout << 4*(a+b+c);

    return 0;
}