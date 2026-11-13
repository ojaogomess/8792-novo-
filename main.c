#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>


int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int soma;
    int total = 0;
    for(int i = 10; i <= 99; i++){
        int dezena = i / 10;
        int unidade = i % 10;
        if(unidade == dezena * 2){
            printf("%d\n", i);
            total++;
            soma += i;
            
        }

    }
    printf("soma: %d\nNúmeros com unidade maior que a dezena: %d\n", soma, total);

    
            


    return 0;
}



