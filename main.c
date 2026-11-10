#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>

int quadrado(int n){
    return n * n;
}

int cubo(int n){
    return n*n*n;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
int cuboValor;
int quadradoValor;

    printf("Digite um valor para ver seu quadrado: \n");
        scanf("%d", &quadradoValor);

            printf("Digite um valor para ver seu cubo: \n");
        scanf("%d", &cuboValor);

    printf("\nQuadrado de %d é: %d\n", quadradoValor, quadrado(quadradoValor));

    printf("Cubo de %d é: %d", cuboValor, cubo(cuboValor));


    

    
    return 0;
}



