#include <stdio.h>
#include <string.h>

#define IN 1
#define OUT 0

int main(){
    char line[1000];

    fgets(line, 1000, stdin);
    line[strcspn(line, "\n")] = '\0';

    int flag = IN;

    printf("\n");
    for(int i = 0; i < strlen(line); ++i){
        if(line[i] == ' '){
            if(flag){
                printf("\n");
                flag = OUT;
            }
        }
        else{
            printf("%c", line[i]);
            flag = IN;
        }
    }

    return 0;
}