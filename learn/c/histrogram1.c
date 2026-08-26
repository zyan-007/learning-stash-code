#include <stdio.h>
#include <string.h>

int main(){
    char userInput[1000];
    char word[1000][1000];


    fgets(userInput, 1000, stdin);
    int total_count = 0;

    for(int i = 0, j = 0, t = 0; i < strlen(userInput); ++i){
        if(userInput[i] == ' ' || userInput[i] == '\n'){
            word[j][t] = '\0';
            j++;
            t = 0;
            total_count++;
        }
        
        if((userInput[i] >= 'a' && userInput[i] <='z') || (userInput[i] >= 'A' && userInput[i] <= 'Z') || (userInput[i] >= '0' && userInput[i] <= '9')){
            word[j][t] = userInput[i];
            t++;
        }
    }

    // printing array
    for(int i = 0; i < total_count; ++i){
        printf("%d. %s\n", (i+1), word[i]);
    }    

    return 0;
}