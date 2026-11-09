#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include<math.h>

float areaRetangulo(float base, float altura){
    return base * altura;
}


int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf(" %.2f\n", areaRetangulo(5, 3));

    return 0;
}



