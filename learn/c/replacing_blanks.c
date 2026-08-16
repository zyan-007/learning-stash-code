#include <stdio.h>
#include <string.h>

int main(){
    char userOutput[1000];

    int c;
    int prev = -1;
    int index = 0;
    while((c = getchar()) != EOF){
        if(!((c == prev) && (prev == ' '))){
            userOutput[index] = c;
            index++;
        }
        prev = c;
        if(index == 999){
            fprintf(stderr, "~~~ limit reached ~~~~\n");
            break;
        }
    }
    userOutput[index] = '\0';

    printf("%s", userOutput);
    return 0;
}