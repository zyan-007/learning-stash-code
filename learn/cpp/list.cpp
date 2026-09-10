# include <list>
#include <iostream>
using namespace std;


int main(){
    list<int> a;

    a.push_back(5);
    a.push_back(10);
    a.push_front(15);
    cout << a.front() << endl;
    cout << a.back() << endl;

    a.push_back(1);
    a.push_back(5);
    a.push_back(56);

    // cout << a.empty() << endl;

    // a.remove(5);
    // (*a.begin()).swap(*a.end());
    a.insert(next(a.begin(), 1), -6);
    a.erase(a.begin(), next(a.begin(), 3));


        list<int> :: iterator it = a.begin();

    while(it != a.end()){
        cout << *it << " ";
        it++;
    }
    
    // cout << a.size() << endl;
    // a.clear();
    // cout << a.size() << endl;

    return 0;
}