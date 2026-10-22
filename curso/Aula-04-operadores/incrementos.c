#include <stdio.h>

int main (void) {

    int dado = 10;

    printf("Valor inicial: %d\n", dado);
    
    dado++;
    printf("Valor depois do incremento: %d\n", dado);
    
    dado--;
    printf("Valor depois do decremento: %d\n", dado);
    
    dado += 3;
    printf("Valor depois do incremento em 3: %d\n", dado);
    
    dado -= 2;
    printf("Valor depois do decremento em 2: %d\n", dado);
    
    dado *= 10;
    printf("Valor depois de multiplicar por 10: %d\n", dado);
    
    dado /= 2;
    printf("Valor depois de dividir por 2: %d\n", dado);
    
    return 0;
}