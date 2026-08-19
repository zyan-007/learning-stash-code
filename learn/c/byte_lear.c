#include <stdio.h>

int main(){
    int c;
    while((c = getchar()) != 10){
        printf("%c", c);
    }
    return 0;
}