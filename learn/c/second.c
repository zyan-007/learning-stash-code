#include <stdio.h>


int main(){
    int a = 7;

    if (a < 6)
        if (a == 4)
            printf("This is 4");
        else
            if (a == 3)
                printf("This is 3");
            else if (a == 2)
                printf("This is 2");
    else
        printf("This is still less than 6");
    return 0;
}