#include <stdio.h>
#include <string.h>

int main(){
    char a[1000];
    fgets(a, 1000, stdin);
    a[strcspn(a, "\n")] = '\0';

    // printf("%c", a[(strlen(a)-2-1)]);

    for(int i = 0; i < strlen(a)/2; ++i){
        a[i] ^= a[(strlen(a)-1-i)];
        a[(strlen(a)-1-i)] ^= a[i];
        a[i] ^= a[(strlen(a)-1-i)];
    }

    printf("Reverse string: %s", a);

    return 0;
}