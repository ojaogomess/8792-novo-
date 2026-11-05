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

    float idade = lerPositivo("Digite a idade: \n");
    float peso = lerPositivo("Digite o peso(kg): \n");
    float altura = lerPositivo("Digite a altura (m): \n");
    printf("\nIdade: %.0f anos\n", idade);
    printf("IMC: %f\n", peso / (altura * altura));





    return 0;
}



