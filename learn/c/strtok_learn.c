#include <stdio.h>
#include <string.h>


int main(){
    char a[1000];
    fgets(a, 1000, stdin);
    a[strcspn(a, "\n")] = '\0';

    char* b = strtok(a, ", ");
    while(b != NULL){
        printf("%s\n", b);

        b = strtok(NULL, ", ");
    }

    return 0;
}