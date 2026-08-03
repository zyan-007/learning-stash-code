#include <iostream>
using namespace std;


int main(){
    int n;
    int x[100], y[100], z[100];

    cin >> n;
    int totalX = 0, totalY = 0, totalZ=0;

    for (int i = 0; i < n; ++i){
        cin >> x[i] >> y[i] >> z[i];

        totalX += x[i];
        totalY += y[i];
        totalZ += z[i];
    }
    // cout << totalX << " " << totalY << " " << totalZ << endl;
    if (totalX == 0 && totalY == 0 && totalZ == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}