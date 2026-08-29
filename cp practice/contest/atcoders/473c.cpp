#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector <int> a(n);
    vector <int> students(n, 0);

    for(int& i: a){
        cin >> i;
    }


    for(int&i: a)
        students[i-1]++;

    int count = 0;
    int max = *max_element(students.begin(), students.end());
    for(int& i: students){
        i++;
        count += (i >= max) ? 1 : 0;
        i--;
    }

    cout << count;
    

    return 0;
}