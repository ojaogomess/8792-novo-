#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>

float areaRetangulo(float base, float altura){
    return base * altura;
}


int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    float altura, base;

        printf("Digite um valor pra base: \n");
        scanf("%f", &base);
        printf("Agora um valor para a altura: \n");
        scanf("%f", &altura);


    printf(" %.2f\n", areaRetangulo(base, altura));

    return 0;
}



