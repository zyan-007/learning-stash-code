#include <stdio.h>


int main(){
    int num;
    int guess = 69;

    while(scanf("%d", &num)){
        if(num > 100 || num < 0)
            continue;
        else{
            if (num == guess){
                printf("You win, the number was %d\n", guess);
                break;
            }
            else if (num > guess)
                printf("answer is less than your guess\n");
            else
                printf("answer is greater than your guess\n");
        }
    }

    return 0;
}