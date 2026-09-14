#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<string, string> a(10);

    a["first"] = "mercury";
    a.insert(make_pair("second", "venus"));

    pair<string, string> p;
    p.first = "third";
    p.second = "earth";
    a.insert(p);
    

    for(auto & i: a){
        cout << i.first << ": " << i.second << endl;
    }

    cout << endl;

    for(auto& [key, value]: a){
        cout << key << ": " << value << endl;
    }


    cout << endl;

    cout << a.at("third") << endl;
    cout << a["second"] << endl;

    a.at("second") = "Jupyter";
    a["first"] = "pulto";
    cout << endl;

    // a.erase(next(a.begin(),1), a.end());
    // unordered_map<string, string>::iterator it = a.begin();


    // while(it != a.end()){
    //     cout << (*it).first << " - " <<  (*it).second << endl;
    //     it++;
    // }

    // a.clear();

    // cout << (*(a.find("thidrd"))).first << " " << (*(a.find("thidrd"))).second << endl;

    // // if(a.empty())
    //     // cout << "yes empty" << endl;
    // cout << a.size() << endl;


    cout << a.count("thji") << endl;
    cout << a.count("third") << endl;

    return 0;
}