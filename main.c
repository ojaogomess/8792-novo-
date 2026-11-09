#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>

int potencia(int base, int expoente){
    int resultado = 1;
    for(int i = 0; i < expoente; i++){
        resultado *= base;
    }
    return resultado;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf("2 Elevado a 5 = %d\n", potencia(2,5));
 
    return 0;
}



