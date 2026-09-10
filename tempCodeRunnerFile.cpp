#include <iostream>
#include <queue>
using namespace std;

int main(){
    // queue creation
    queue<int> a;


    a.push(10);
    a.push(20);
    a.push(30);

    for(int& i: a)
        cout << i << " ";

    cout << endl;
    return 0;
}