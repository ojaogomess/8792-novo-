#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>




int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

char texto[100];
int tamanho = 0;

    printf("Digite uma frase: \n");
    fgets(texto, 100, stdin);
    texto[strcsp(texto, "\n")] = '0';

        while(texto[tamanho] != '\0'){
            tamanho++;
        }
        printf("Quantidade de caracteres: %d\n", tamanho);

    

    return 0;
}



