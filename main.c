#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>

void contagem(int n){
    if(n == 0){
        return 0;
    }
    return n + somar(n - 1);
}
    
    


int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


    int resultado = somar(5);
    printf("Resultado %d\n", resultado);




    return 0;
}



