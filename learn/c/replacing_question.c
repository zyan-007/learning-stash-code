#include <stdio.h>

int main(){
    char userOutput[1000];

    int c;
    int index = 0;
    while((c = getchar()) != EOF){
        if((index+2) >= 999){
            fprintf(stderr, "~~~ space limits reached ~~~");
            break;
        }
        if(c == '\t'){
            userOutput[index] = '\\';
            index++;
            userOutput[index] = 't';
        }
        else if(c == '\b'){
            userOutput[index] = '\\';
            index++;
            userOutput[index] = 'b';
        }
        else if(c == '\\'){
            userOutput[index] = '\\';
            index++;
            userOutput[index] = '\\';
        }
        else{
            userOutput[index] = c;
        }

        ++index;


    }

    userOutput[index] = '\0';

    printf("%s", userOutput);
    return 0;
}