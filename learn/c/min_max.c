# include <stdio.h>


int main(){
    int min, max, val;
    int first = 1;

    while(scanf("%d", &val) != EOF){
        if (first || val > max)
            max = val;
        if (first || val < min)
            min = val;
        first = 0;
    }

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}