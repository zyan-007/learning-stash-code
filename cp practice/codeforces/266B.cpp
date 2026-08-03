#include <iostream>
using namespace std;


int main(){
    int n, t;
    cin >> n >> t;

    char kids[50];
    for(int i = 0; i < n; ++i){
        cin >> kids[i];
    }

    for(int i = 0; i < t; ++i){
        for (int j = 0; j < n-1; ++j){
            if(kids[j] == 'B' && kids[j+1] == 'G'){
                kids[j] = 'G';
                kids[j+1] = 'B';
                j += 1;
            }
        }
    }

    // printing
    for (int i = 0; i < n; ++i) 
        cout << kids[i];
        
    return 0;
}