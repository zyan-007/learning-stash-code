#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int, greater<int>> a;  

    a.insert(10);
    a.insert(100);
    a.insert(500);
    a.insert(10);
    set<int>::iterator it = a.begin();

    while(it != a.end()){
        cout << *it << endl;
        it++;
    }

    cout << endl;

    // a.erase(next(a.begin(), 1), a.end());

    // if(a.find(500) != a.end()){
    //     cout << "found" <<  *a.find(500)<< endl;
    // }
    // else    
    //     cout << "not found" << endl;


    cout << a.count(510) << endl;

    for(int i: a)
        cout << i << " ";

    cout << endl;
    cout << a.size() << endl;

    return 0;
}