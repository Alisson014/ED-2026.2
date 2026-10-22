/**8) Escreva uma função recursiva que receba um número inteiro n e
retorne o n- ́ésimo termo da sequência de Fibonacci. A sequência
começa com F (0) = 0 e F (1) = 1, e cada termo subsequente é a
soma dos dois anteriores (F (n) = F (n − 1) + F (n − 2)). */

#include <stdio.h>

int fibonacci(int n){
    if (n == 1) return 0;
    if (n == 2) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(void) {
    int n = 9;
    printf("%d termo de fibonacci: %d", n, fibonacci(n));

    return 0;
}