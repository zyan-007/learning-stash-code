#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;

    vector <int> a(n);

    for(int& i: a)
        cin >> i;

    vector <int> b;

    for(int i = 0; i < n; ++i){
        if(find(a.begin(), a.end(), a[i])-a.begin() == i)
            b.push_back(a[i]);
    }

    sort(b.begin(), b.end());

    for (int& i: b)
        cout << i << "-> " << count(a.begin(), a.end(), i) << endl; 

    

    return 0;
}