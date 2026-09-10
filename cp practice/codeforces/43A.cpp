#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<string> a(n);

    for(string &i: a)
        cin >> i;

    sort(a.begin(), a.end());
    vector<string> copy = a;
    copy.erase(unique(copy.begin(),copy.end()), copy.end());

    string winning_team;
    int winning_score = -1;

    for(string &i: copy){
        int occurance = count(a.begin(), a.end(), i);
        if(occurance > winning_score){
            winning_team = i;
            winning_score = occurance;
        }
    }

    cout << winning_team << endl;

    return 0;
}