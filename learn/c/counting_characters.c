#include <stdio.h>

int main(){
    int count = 0;

    while(getchar() != EOF){
        ++count;
    }

    printf("Length is %d", count-1);
    return 0;
}