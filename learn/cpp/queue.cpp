// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){
//     // queue creation
//     queue<int> a;


//     a.push(10);
//     a.push(20);
//     a.push(30);
//     cout << a.size() << endl;

//     cout << a.front() << " " << a.back() << endl;
//     a.pop();
//     a.push(13);
//     cout << a.front() << " " << a.back() << endl;


//     queue <int> g;
//     g.push(1);
//     g.push(2);
//     g.push(3);
//     a.swap(g);

//     if(!a.empty()){
//         cout << endl;
//         queue <int>t = a;
//         while(!a.empty()){
//             cout << a.front() << endl;
//             a.pop();
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 5;


    vector <int> a ={1, 2, 3, 4, 5};

    for(int&i: a)
        cout << i << " ";
    cout << endl;


    a.erase(a.begin());


    for(int&i: a)
        cout << i << " ";
    cout << endl;

    cout <<accumulate(a.begin(), a.end(), 0) << endl;

    return 0;
}