#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>

int somaDigitos(int n){
    int soma = 0;
    while(n != 0){
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int n;

    printf("Digite digitos: \n");
        scanf("%d", &n);

    printf("Soma dos dígitos é: %d\n", somaDigitos(n));
    
    return 0;
}



