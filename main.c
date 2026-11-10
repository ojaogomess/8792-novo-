#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>

int maiorDeTres(int a, int b, int c){
    int maior = a;

    if(b > maior){
        maior = b;
    }

    if(c > maior){
        maior = c;
    }
    return maior;
}
int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int valor1, valor2, valor3;

printf("Digite tres números: ");
scanf("%d\n%d\n%d", &valor1, &valor2, &valor3);

printf("Maior: %d", maiorDeTres(valor1, valor2, valor3));

    return 0;
}



