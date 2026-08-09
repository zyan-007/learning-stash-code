#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter number: ";
    cin >> a;
    if (a < 0)
        return 0;
    else if(a == 0 || a == 1){
        cout << "Not prime" << endl;
        return 0;
    }
    int flag = 0;
    for(int i = 2; i < a/2; ++i){
        if (a % i == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
    return 0;
}