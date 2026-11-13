#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>


int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int total = 0;
    for(int i = 100; i <= 999; i++){
        int centena = i / 100;
        int unidade = i % 10;
        
        if(unidade == centena){
            printf("%d\n", i);
            total++;
        }
    }
    printf("Palindromos de 3 dígitos: %d\n", total);
    
            


    return 0;
}



