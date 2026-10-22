/**9) Crie uma função recursiva que receba um número inteiro positivo
e retorne a soma de seus dígitos. Por exemplo, se o número for
123, a função deve retornar 6 (1 + 2 + 3). */

#include <stdio.h>

int sumDigit(int n){
    if (n < 10) return n;

    return n%10 + sumDigit(n/10);
}

int main(void){
    int num = 12345;

    printf("Soma dos digitos de %d: %d\n", num, sumDigit(num));
    return 0;
}