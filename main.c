#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>

void contagem(int n){
    if(n == 0){
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}



int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


    contagem(5);
    




    return 0;
}



