/**7) Escreva uma função para calcular o fatorial de um número de
forma recursiva. A função fatorialRecursivo deve receber um
inteiro n e retornar n!. */

#include <stdio.h>


long int fatorialRecursivo(int n){
    if (n == 0) return 1;
    return n * fatorialRecursivo(n-1);
}


int main(void){
    int num = 7;

    printf("Fatorial de %d: %ld", num, fatorialRecursivo(num));

    return 0;   
}