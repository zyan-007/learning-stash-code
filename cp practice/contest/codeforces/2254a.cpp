#include <iostream>
using namespace std;

int smallest(int x, int y, int z){
    if (x < y && x < z)
        return x;
    else if (y < x && y < z)
        return y;
    else
        return z;
}
int largest(int x, int y, int z){
    if (x > y && x > z)
        return x;
    else if (y > x && y > z)
        return y;
    else
        return z;
}

int main(){
    int n;
    cin >> n;

    int a, b, c;
    int count;
    for(int i = 0; i < n; ++i){
        cin >> a >> b >> c;
        // cout << "hey" << a<< " " << b << " " << c << endl;

        count = 0;
        while(1){
            if(a == b || b == c || a == c)
                break;

            if(largest(a, b, c) == a){
                if (smallest(a, b, c) == b)
                    b += 1;
                else if (smallest(a, b, c) == c)
                    c += 1;
                a -= 1;
            }
            else if(largest(a, b, c) == b){
                if(smallest(a, b, c) == a){
                    a += 1;
                }
                else if (smallest(a, b, c) == c){
                    c += 1;
                }
                b -= 1;
            }
            else{
                if (smallest(a, b, c) == a)
                    a += 1;
                else if (smallest(a, b, c) == b)
                    b += 1;
                c -= 1;
            }
            // cout << a << " " << b << " " << c << " " << endl;
            count += 1;
        }
        cout << count << endl;
        
    }
    return 0;
}