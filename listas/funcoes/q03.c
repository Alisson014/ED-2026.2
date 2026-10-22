/**3) Escreva uma função que receba uma string (vetor de char) como
parâmetro e retorne a quantidade de vogais (a, e, i, o, u, em
maiusculas e minúsculas) que ela contém. */

#include <stdio.h>
#include <string.h>

int qtd_vogais(char str[]){
    int qtd = 0;
    for (int i=0; i < strlen(str)-1; i++){
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
            qtd++;
        }
    }

    return qtd;
}

int main(void){

    char string[50];

    printf("Digite uma string[50]: ");
    fgets(string, 50, stdin);
    fflush(stdin);

    printf("Quantidade de vogais da string: %d\n", qtd_vogais(string));

    return 0;
}