#include <stdio.h>
#include <string.h>

int main(){

    int selectOption;
    int count[3] = {0, 0, 0}; // spaces, tabs, line count

    while(1){
        printf("Select input type: \n1. File Input\n2. User Input\n3. Exit\n");

        count[0] = 0;
        count[1] = 0;
        count[2] = 0;
        printf(">> ");
        scanf(" %d", &selectOption);

        if(selectOption == 1){
            while(getchar() != '\n');

            FILE *file;
            char fileName[100];
    
            while(1){
                fgets(fileName, 100, stdin);
                fileName[strcspn(fileName, "\n")] = '\0';

                file = fopen(fileName, "r");

                if(file != NULL){
                    int c;
                    int total_char = 0;
                    int prev = -1;
                    while((c = getc(file)) != EOF){
                        if(c == ' ')
                            count[0]++;
                        else if(c == '\t')
                            count[1]++;
                        else if(c == '\n')
                            count[2]++;

                        ++total_char;
                    }
                    // if(total_char > 0)
                    //     count[2]++; // to count the starting line as it misses one
                    

                    printf("Spaces: %d, tabs: %d, new lines: %d\n", count[0], count[1], count[2]);
                    break;
                }
                else{
                    printf("!! File not found !!\n");
                }
                fclose(file);

            }

        }
        else if(selectOption == 2){
            while(getchar() != '\n');
            int c;
            while((c = getchar()) != EOF){
                if(c == ' ')
                    count[0]++;
                else if(c == '\t')
                    count[1]++;
                else if(c == '\n')
                    count[2]++;
            }

            printf("Spaces: %d, tabs: %d, new lines: %d", count[0], count[1], count[2]);

        }
        else if(selectOption == 3)
            break;
        else{
            printf("!! Wrong option selected !!\n");
        }
        printf("\n");
    }
    return 0;
}