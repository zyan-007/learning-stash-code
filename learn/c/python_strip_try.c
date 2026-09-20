#include <stdio.h>
#include <string.h>


int main(){
    char t[50];
    fgets(t, 50, stdin);
    t[strcspn(t, "\n")] = '\0';

    char* c = strtok(t, ", ");

    while(c != NULL){
        printf("%s\n", c);
        c = strtok(NULL, ", ");
    }

    return 0;
}