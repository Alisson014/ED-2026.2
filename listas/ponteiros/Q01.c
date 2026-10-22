/**1) Declare uma string (vetor de caracteres) e a inicialize com um texto.
Usando dois ponteiros (char *), um apontando para o início da string e
outro para o final, inverta a string ”in-place”, ou seja, sem criar um novo
vetor para armazenar o resultado. Exemplo: Se a string for
”programacao”, após a execução, ela deverá se tornar ”oacamargorp”. */


#include <stdio.h>
#include <string.h>

#define LEN 50

// void reverse(char *string_ptr){
//     char letter_aux;
//     int len = strlen(string_ptr);
//     for (int i=0; i<len/2; i++){
//         letter_aux = string_ptr[len-(i+1)];
//         string_ptr[len-(i+1)] = string_ptr[i];
//         string_ptr[i] = letter_aux;
//     }
// }

void reverse(char *str, int len){
    char *lptr1 = str, *lptr2 = &str[len-1], aux;
    for (int i=0; i<len/2; i++){
        aux = lptr1[i];
        lptr1[i] = *(lptr2-i);
        *(lptr2-i) = aux;
    }
}

int main(void) {
    char word[LEN];

    printf("Digite a string (%d): ", LEN);
    fgets(word, LEN, stdin);
    fflush(stdin);

    reverse(word, strlen(word)-1); // O -1 desconsidera o \n

    printf("Palavra invertida: %s\n", word);

    scanf("%s", word);
    puts(word);


    return 0;
}