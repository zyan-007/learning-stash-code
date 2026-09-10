#include <iostream>
#include <queue>
using namespace std;

int main(){
    deque <int> dq(5, 9);

    dq.push_back(10);
    dq.push_back(11);
    dq.push_front(100);
    dq.pop_front();
    dq.pop_back();



    cout << dq.front() << " " << dq.back() << "-" <<  dq.size() << endl;
    dq.insert(dq.begin()+3, 6);

    // dq.erase(dq.begin()+2, dq.begin()+3);
    deque <int>::iterator it = dq.begin();
    while(it < dq.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;


    // for(int i: dq)
    //     cout << i << " ";
    // cout << endl;

    return 0;
}