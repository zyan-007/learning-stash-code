# include <iostream>
# include <vector>


int main(){
    std :: vector <int> a;

    // int n;
    // do{
    //     std :: cin >> n;
    //     a.push_back(n);
    // }while(n != -1);

    // std :: cout << "\nElements: ";
    // for(int i = 0; i < a.size(); ++i){
    //     std :: cout << a[i] << " ";
    // }
    // std :: cout << std :: endl;
    // std :: cout << "Size: " << a.size() << std :: endl;

    // a.pop_back();
    // // std :: cout << "Front: " << a.front() << std :: endl;
    // // std :: cout << "Back: " << a.back()  << std :: endl;

    // if(!(a.empty())){
    //     std :: cout << "Not empty" << std :: endl;
    // }
    // else{
    //     std :: cout << "Empty" << std :: endl;
    // }


    a.push_back(1);
    a.push_back(2);
    std :: cout << a.capacity();
    a.push_back(3);
    std :: cout << a.capacity();
    a.push_back(4);
    a.push_back(5);
    std :: cout << a.capacity();
    a.pop_back();
    std :: cout << a.capacity();
    a.pop_back();
    std :: cout << a.capacity();
    return 0;
}