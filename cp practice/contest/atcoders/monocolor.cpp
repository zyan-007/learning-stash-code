#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int c[100];
    for (int i = 0; i < n; ++i)
        cin >> c[i];

    int maxOccurance = 1;
    int count;
    for(int i = 0; i < n; ++i){
        count = 0;
        for(int j = 0; j < n; ++j)
            if(c[j] == c[i])
                ++count;
        if (count > maxOccurance)
            maxOccurance = count;
    }
    
    cout << n-maxOccurance;
    return 0;
}