// #include <stdio.h>

// int fun1();

// int main(){
//     fun1();
//     return 0;
// }

// int fun1(){
//     printf("Hello");
// }

#include <stdio.h>

void swap(int *a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 5, b = 10;
    printf("a: %d, b: %d\n", a ,b);
    swap(&a, &b);
    printf("a: %d, b: %d\n", a, b);
}