#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;


    char capture = s[0];
    int count = 1;
    int max = count;
    for(int i = 1; i < s.length(); ++i){
        if(s[i] == capture)
            count++;
        else{            
            count = 1;
            capture = s[i];
        }
        
        if (count > max)
            max = count;
        // cout << s[i] << " " << count << " " << capture << " " << max << endl;

    }
    cout << max;

    return 0;
}