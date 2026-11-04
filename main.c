#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>

void mostraVetor(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}
void inverterVetor(int v[], int n){ //aqui vamos inteirar v como vetor com valor a ser definido, em seguida declaramos n. Tudo dentro da função invertervetor
    for(int i = 0; i < n / 2; i++){ //para: (declaramos i começando em 0, e enquanto o i for menor que n dividido por 2, acrescenta i a cada volta)
        int temp = v[i]; //declara temp com valor igual a vetor v com valor de i 
        v[i] = v[n - 1 - i]; //vetor v com valor i é igual a vetor v com valor n - 1 - i
        v[n - 1 - i] = temp; //o novo vetor v passa a ser temp
    }
}




int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numeros[5] = {1,2,3,4,5};
        printf("Antes: ");
        mostraVetor(numeros, 5);
        inverterVetor(numeros, 5);
        printf("Depois: ");
        mostraVetor(numeros, 5);



    

    return 0;
}



