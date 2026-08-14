#include <stdio.h>


int main(){
    float fahrenheit, celcius;

    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;

    printf("fahrenheit\tCelcius\n");
    while(fahrenheit <= upper){
        celcius = (5.0/9.0)*(fahrenheit-32);
        printf("%3.2f\t%6.2f\n", fahrenheit, celcius);
        fahrenheit += step;
    }
    return 0;
}