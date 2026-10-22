/**5) Faça um programa que receba dois vetores com N números. Verifique
se esse vetor tem um número palíndromo (um número que escrito na
ordem inversa é igual). */

#include <stdio.h>
#include <string.h>

#define N 14


int e_palindromo(char str[], int len){
    for (int i=0; i< len/2; i++){
        if (str[i] != str[len-(i+1)]){
            return 0;
        }
    }

    return 1;
}


int main(void){

    char numero[N];
    printf("Digite um numero (maximo %d digitos): ", N);
    fgets(numero, N, stdin);
    fflush(stdin);

    // O -1 é necessário para desconsiderar o caractere nulo \0
    if (e_palindromo(numero, strlen(numero)-1)){
        puts("E palindromo");
    } else {
        puts("Nao e palindromo");
    }

    return 0;
}