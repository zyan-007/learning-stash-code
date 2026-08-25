#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    // vector <int> a;

    // cout << a.capacity() << endl;
    // cout << a.size() << endl;
    // a.push_back(5);
    // a.push_back(3);
    // a.push_back(10);
    // a.push_back(11);


    // cout << "Max element: " << *max_element(a.begin(), a.end()) << endl;
    // cout << "Printing the whole vector" << endl;
    // for(int i: a)
    //     cout << i << " ";

    // cout << endl;
    // cout << a.capacity() << endl;
    // cout << a.size() << endl;

    // a.erase(a.begin()+1, a.end()-1);

    // cout << "Printing the whole vector" << endl;
    // for(int i: a)
    //     cout << i << " ";

    // cout << endl;
    // cout << stoi("00000d123");

    // vector <vector <int>> a(5, vector<int>(3, 0));
    // cout << a.size() << endl;
    // cout << a[0].size() << endl;
    // cout << endl; 

    // vector<vector<vector<int>>> b(5, vector<vector<int>>(3, vector<int>(6, 0)));
    // cout << b.size() << endl;
    // cout << b[0].size() << endl;
    // cout << b[0][0].size() << endl;


    // vector <int> a = {1, 2, 3, 5, 6};

    // //before
    // for(const auto& i: a)
    //     cout << i << " ";
    // cout << endl;


    // for(auto& i: a)
    //     i *= 2;


    // //after
    // for(const auto& i: a)
    //     cout << i << " ";
    // cout << endl;

    vector<vector<vector<int>>> a(3, vector<vector<int>>(3));
    a[0][0] = vector <int> (5, 1);
    a[0][1] = vector<int>(2, 0);
    a[0][2] = vector<int>(4, -1);

    a[1][0] = vector <int> (5, 2);
    a[1][1] = vector<int>(2, 3);
    a[1][2] = vector<int>(4, -5);

    a[2][0] = vector <int> (5, 6);
    a[2][1] = vector<int>(2, 10);
    a[2][2] = vector<int>(4, -9);

    for(const auto& x: a){
        for(const auto& y: x){
            for(const auto& i: y){
                cout << i << " ";
            }
            cout << endl;
        }
        cout << "----" << endl;
    }


    return 0;
}