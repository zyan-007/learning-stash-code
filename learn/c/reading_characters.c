#include <stdio.h>

int main(){
    char a;

    while((a = getc(stdin)) != EOF){
        putc(a, stdout);
    }
    return 0;
}