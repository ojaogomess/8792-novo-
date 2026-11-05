#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>

float lerPositivo(char mensagem[]){
    float valor;
    do{
        printf("%s", mensagem);
        scanf("%f", &valor);
        if(valor <= 0);
        printf("Valor inválido! Digite um número maior que 0\n");
    }while(valor <= 0);
    return valor;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);






    return 0;
}



