#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>


void contagem(int n){
    for(int i = n; i >= 1; i--){
        printf("%d\n", i);
    }
    printf("BUM!");
}


int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

contagem();

    return 0;
}



