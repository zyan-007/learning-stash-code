#include <stdio.h>

int main(){
    float celcius, fahrenheit;
    
    

    printf("Fahrenheit\tCelcius\n");
    for(fahrenheit = 300; fahrenheit >= 0; fahrenheit-=20){
        celcius = (5.0/9.0) * (fahrenheit - 32);
        printf("%8.2f\t%8.2f\n", fahrenheit, celcius); 
    }
    return 0;
}