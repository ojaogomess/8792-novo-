#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>


int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int soma = 0;
   
    for(int i = 10; i <= 99; i++){
        int dezena = i / 10;
        int unidade = i % 10;
        if(dezena == unidade){
            printf("%d\n", i);
            
        }  
            
    }
 



    return 0;
}



