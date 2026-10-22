/**
 * 1) Escreva uma função chamada verificarParidade que receba um número inteiro como parâmetro. 
 * A função deve retornar 1 se o número for par e 0 se for ímpar. Na main, leia um número do
 * usuário, chame a função e imprima ”E par”ou ”E ímpar”com base no retorno.
 */

#include <stdio.h>

int verificarParidade(int n) {
    if (n % 2 == 0) {
        return 1;
    } 

    return 0;
}


int main(void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if ( verificarParidade(numero) ) {
        printf("E par\n");
    } else {
        printf("E impar\n");
    }

    return 0;
}