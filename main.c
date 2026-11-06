#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>

void tabuada(int numero, int contador){
    if(contador > 10){
        return;
    }
    printf("%d x %d = %d\n", numero, contador, numero * contador);


    tabuada(numero, contador + 1);
}

    
int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


    
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    tabuada(numero, 1);

    return 0;
}



