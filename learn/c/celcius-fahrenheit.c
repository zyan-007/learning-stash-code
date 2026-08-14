#include <stdio.h>

int main(){
    float celcius, fahrenheit;  
    float lower, upper, step;

    lower = 0;
    celcius = lower;
    upper = 300;
    step = 20;

    printf("Celcius\tFahrenheit\n");
    while(celcius <= upper){
        fahrenheit = ((9.0/5.0) * celcius) + 32;
        printf("%3.2f\t%3.2f\n", celcius, fahrenheit);
        celcius += step;
    }

    return 0;
}