/** 2) Escreva uma função que receba como parâmetros um vetor (array) de inteiros 
 * e o seu tamanho. A função deve encontrar e retornar o maior elemento presente 
 * no vetor. Na main, crie um vetor, preencha-o com valores e use 
 * a função para imprimir o maior valor.  
 */

#include <stdio.h>

int max(int vetor[], int length){
    int max = vetor[0];
    for(int i = 0; i < length; i++ ){
        if (vetor[i] > max){
            max = vetor[i];
        }
    }

    return max;
}


int main(void){
    int vetor[8] = {1,4,2,4,3,2,4,10};
    printf("Maior valor: %d\n", max(vetor, 8));
    return 0;
}