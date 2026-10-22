/**2) Escreva um programa que verifique se uma palavra ou frase fornecida
pelo usuário é um palíndromo. Um palíndromo é uma sequência que se
lê da mesma forma da esquerda para a direita e da direita para a
esquerda. O programa deve usar um ponteiro começando no início da
string e outro começando no final. Os dois ponteiros devem se mover
em direção ao centro, comparando os caracteres em cada passo. A
verificação deve parar assim que encontrarem uma diferença ou se
cruzarem. Input: Uma string (palavra ou frase). Para simplificar,
considere apenas letras minúsculas e sem espaços. Output: Uma
mensagem dizendo ”E pal ́ındromo”ou ”Não é palíndromo”. Exemplo: (
Input: arara Output: É palíndromo), (Input: banana Output: Não é
palíndromo). */

#include <stdio.h>
#include <string.h>

#define LEN 50


int is_palindrome(char *string_ptr){
    // O menos 1 é necessário para descondiderar o \n
    int len = strlen(string_ptr)-1;
    // printf("%d\n", len);
    for (int i=0; i<len/2; i++){
        if (!(string_ptr[i] == string_ptr[len-(i+1)])){
            return 0;
        }
        // printf("%c, %c\n", string_ptr[i], string_ptr[len-(i+1)]);
    }

    return 1;
}


int main(void){
    char word[LEN];

    printf("Digite uma palavra(%d): ",LEN);
    fgets(word, LEN, stdin);
    fflush(stdin);

    if (is_palindrome(word)){
        printf("Eh palindromo\n");
    } else {
        printf("Nao eh palindromo\n");
    }

    return 0;
}