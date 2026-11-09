#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>

int soma(int n){
    int total = 0;
    for(int i = 0; i < n; i++){
    total += i;

    }
    

}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
int numero;
printf("digite um numero");
scanf("%d", &numero); 

printf("\nSoma de 1 até ...  %d\n", soma(numero));

    return 0;
}



