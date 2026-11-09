#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>

float celsiusParaFahrenheit(){
    float celsius;
    printf("Digite a temperatura em Celsius: \n");
    scanf("%f", &celsius);
    return celsius * 9 / 5 + 32;
}


int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
 
    float Fahrenheit;

    Fahrenheit = celsiusParaFahrenheit();
    printf("Temperatura em Fahrenheit: %.1f\n", Fahrenheit);

    return 0;
}



