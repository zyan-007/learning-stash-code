#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a;
    cin >> a;

    int flag = 0;
    int save = 0;

    while(a){
        int digit = a % 10;
        if (digit == 4 && save == 0 && (a != 4 && a != 44)){
            save = 4;
            a /= 10;
            continue;
        }
        else if(digit == 4 && save == 4 && (a != 44 && a != 4)){
            save = 44;
            a /= 10;
            continue;
        }

        if(digit == 1){
            if(save == 4 || save == 44 || save == 0)
                save = 0;
        }
        else{
            flag = 1;
            break;
        }

        a /= 10;
    }

    if (flag == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}