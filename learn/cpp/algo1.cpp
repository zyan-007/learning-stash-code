#include <bits/stdc++.h>
using namespace std;

void printDouble(int a){
    cout << a*2 << endl;

    // cout << n << endl;
}

int even_or_not(int a){
    return a%2 == 0;
}

int main(){


    // vector<int>a = {1, 2, 3, 4, 5};

    // for_each(a.begin(), a.end(), printDouble);

    // cout << *find(a.begin(), a.end(), 233) << endl;

    // cout << *find_if(a.begin(), a.end(), even_or_not) << endl;

    // cout << count(a.begin(), a.end(), -4) << endl;

    // cout << count_if(a.begin(), a.end(), even_or_not) << endl;

    // sort(a.begin(), a.end(), greater<int>());

    // for(int &i: a)
    //     cout << i << " ";
    // cout << endl;


    // sort(a.begin(), a.end());

    // for(int &i: a)
    //     cout << i << " ";

    // cout << endl;


    // reverse(a.begin(), a.end());

    // for(int &i: a)
    //     cout << i << " ";
    // cout << endl;

    vector<int> a = {10, 20, 30, 40, 50, 60};

    cout << "before: ";
    for(int &i: a)
        cout << i << " ";
    cout << endl;

    rotate(a.begin(), a.begin()+3, a.end());

    cout << "Rotate left: ";
    for(int &i: a)  
        cout << i << " ";
    cout << endl;

    sort(a.begin(), a.end());
    rotate(a.begin(), a.end()-3, a.end());

    cout << "Rotate right: ";
    for(int &i: a)
        cout << i << " ";
    cout << endl;

    return 0;
}