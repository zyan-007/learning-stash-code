#include <stdio.h>
#include <string.h>


int main(){
    char userInput[1000];
    fgets(userInput, 1000, stdin);
    // userInput[strlen(userInput)-1] = '\0';
    userInput[strcspn(userInput, "\n")] = '\0';
    // printf("size: %d, last letter: %c", strlen(userInput), userInput[strlen(userInput)-1]);
    int stop;
    if (strlen(userInput) == 0){
        printf("!! Nothing to reverse !!\n");
        return 0;
    }
    else if(strlen(userInput) == 1){
        printf("Reversed string: %s\n" ,userInput);
        return 0;
    }        
    else if (strlen(userInput) % 2 == 0)
        stop = strlen(userInput)/2;
    else 
        stop = strlen(userInput)/2+1;

    // reversing the sting
    for(int i = 0; i < stop; ++i){
        // stoping extra condition for odd length
        if(i == stop-1 && strlen(userInput) % 2 != 0)
            break;
        userInput[i] ^= userInput[strlen(userInput)-i-1];
        userInput[strlen(userInput)-i-1] ^= userInput[i];
        userInput[i] ^= userInput[strlen(userInput)-i-1];
    }
    // printf("size: %d", stop);


    // printf("After reverse: a = %c, b=%c\n", a, b);
    printf("Reverse String: %s\n", userInput);
    return 0;
}