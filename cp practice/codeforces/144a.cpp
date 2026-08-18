#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; ++i)
        cin >> a[i];

    int min = INT_MAX;
    int minIndex = -1;
    int max = INT_MIN;
    int maxIndex = -1;


    // finding max left to right
    for(int i = 0; i < n; ++i){
        if(a[i] > max){
            max = a[i];
            maxIndex = i;
        }
    }


    int count = 0;
    while(maxIndex > 0){
        a[maxIndex] ^= a[maxIndex-1];
        a[maxIndex-1] ^= a[maxIndex];
        a[maxIndex] ^= a[maxIndex-1];
        maxIndex--;
        ++count;
    }
    
    // finding min right to left
    for(int i = n-1; i >= 0; --i){
        if(a[i] < min){
            min = a[i];
            minIndex = i;
        }
    }

    while(minIndex < n-1){
        a[minIndex] ^= a[minIndex+1];
        a[minIndex+1] ^= a[minIndex];
        a[minIndex] ^= a[minIndex+1];
        minIndex++;
        ++count;
    }

    // for(int i = 0; i < n; ++i){
    //     cout << a[i] << " ";
    // }
    cout << count;

    // cout << max << " " << maxIndex << "\t" << min << " " << minIndex << endl;


    return 0;
}