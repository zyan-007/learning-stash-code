#include <stdio.h>
#include <string.h>

int main(){
    // char a[100];
    // fgets(a, 100, stdin);
    // a[strcspn(a, "\n")] = '\0';
    
    // printf("%s\n", a);
    // printf("%zu\n", strlen(a));
    // printf("%c", a[4]);


    // char a[100];
    // FILE *fp;

    // fp = fopen("test1.txt", "r");
    // if (fp != NULL){
    //     while(fgets(a, 100, fp) != NULL){
    //         printf("%s", a);
    //     }
    // }
    // else
    //     printf("File not found\n");

    char c;
    // scanf("%s", &c);
    // c = getc(stdin);
    c = getchar();
    printf("%c && %zu", c, sizeof(c)/sizeof(char));
    return 0;
}