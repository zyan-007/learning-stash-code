#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> q;

    q.push(5);
    q.push(23);
    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }

    return 0;
}