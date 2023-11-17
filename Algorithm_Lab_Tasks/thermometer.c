#include <stdio.h>


float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}


float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float celsius, fahrenheit;

    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsiusToFahrenheit(celsius);
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = fahrenheitToCelsius(fahrenheit);
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}