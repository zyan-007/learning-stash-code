#include <iostream>
#include <vector>

int main(){
    // std :: vector <int> a;
   
    // std :: cout << a.capacity() << std :: endl;
    // a.reserve(10);
    // std :: cout << a.capacity() << " " << a.size() << std :: endl;
    // a.clear();
    // std :: cout << a.capacity() << std :: endl;

    // std :: cout << a.max_size() << std :: endl;

    // a.push_back(10);
    // a.push_back(5);
    // a.push_back(6);
    // a.push_back(11);

    // a.erase(a.begin()+1, a.end()-1);

    // for(int i = 0; i < a.size(); ++i)
    //     std :: cout << a.at(i) << " ";

    std :: vector <int> a = {1, 2, 3, 4, 5};
    std :: vector <int> b = {6, 7, 8, 9, 10};

    std :: cout << "before swap" << std :: endl;

    std :: cout << "a: ";
    for(int i : a){
        std :: cout << i << " ";
    }

    std :: cout << std :: endl;
    std :: cout << "b: ";
    for(int j : b){
        std :: cout << j << " ";
    }

    std :: cout << std :: endl;

    a.swap(b);

        std :: cout << "a: ";
    for(int i : a){
        std :: cout << i << " ";
    }

    std :: cout << std :: endl;
    std :: cout << "b: ";
    for(int j : b){
        std :: cout << j << " ";
    }

    std :: cout << std :: endl;



    std :: vector <int> :: iterator it = a.begin();
    std :: cout << "iterator print: ";
    while(it != a.end()){
        std :: cout << *it << " ";
        it++;
    }
    std :: cout << std :: endl;
    return 0;
}