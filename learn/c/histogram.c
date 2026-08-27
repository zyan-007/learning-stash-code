#include <stdio.h>
#include <string.h>

int main(){
    
    char sentence[1000];

    fgets(sentence, 1000, stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    // removing leading and trailing whitespaces
    int char_count = 0;
    int trailing_whitespace = 0;
    int leading_whitespace = 0;
    while(sentence[char_count] == ' '){
        leading_whitespace++;
        char_count++;
    }
    if(leading_whitespace == strlen(sentence)){
        printf("!! Invalid sentence !!");
        return 0;
    }
    // printf("%d %d %c\n", leading_whitespace, char_count, sentence[char_count]);
    int length = strlen(sentence);
    if (leading_whitespace != 0){
        for(int i = 0; i < length-char_count; ++i){
            sentence[i] ^= sentence[i+char_count];
            sentence[i+char_count] ^= sentence[i];
            sentence[i] ^= sentence[i+char_count];
        }
    }
    char_count = strlen(sentence)-1;
    while(sentence[char_count] == ' '){
        trailing_whitespace++;
        char_count--;
    }
    sentence[strlen(sentence)-trailing_whitespace] = '\0';
    // printf("%s", sentence);

    // removing spaces more than one
    // write here

    char word[500][500];
    int word_count = 0;


    for(int i = 0; i < strlen(sentence); ++i){
        if(sentence[i] == ' ' && sentence[i+1] != ' '){
            char_count = 0;
            word_count++;
        }
    }

    return 0;
}