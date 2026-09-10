#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int> a;

    a.push(10);
    a.push(20);
    a.push(30);
    cout << a.size() << endl;

    cout << a.top() << endl;
    a.pop();
    cout << a.top() << endl;

    stack <int> b;
    b.push(1);

    a.swap(b);

    while(!b.empty()){
        cout << b.top() << " ";
        b.pop();
    }

    cout << endl;
    return 0;
}