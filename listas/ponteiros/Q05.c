/**5) Escreva um programa que receba dois vetores de inteiros, vetorA e
vetorB, ambos já ordenados em ordem crescente. O programa deve
criar um terceiro vetor, vetorC, que contenha todos os elementos de A e
B, também em ordem crescente. Utilize alocação dinâmica para criar o
vetorC */

#include <stdio.h>

#define LEN 5

void concat(int *vetorA_ptr, int *vetorB_ptr, int *vetorC_ptr, int len){
    int indexA=0, indexB=0;

    for (int i=0; i<len+len; i++){
        if (vetorA_ptr[indexA] < vetorB_ptr[indexB] && indexA < len){
            vetorC_ptr[i] = vetorA_ptr[indexA++];
        } else {
            vetorC_ptr[i] = vetorB_ptr[indexB++];
        }
    }
}

void print_vetor(int *vetor_ptr, int len){
    for (int i=0; i<len; i++){
        printf("%d ",vetor_ptr[i]);
    }
    printf("\n");
}

int main(void){

    int vetorA[LEN] = {1, 2, 2, 5, 6}, vetorB[LEN] = {1, 3, 4, 7, 10}, vetorC[LEN+LEN];

    concat(vetorA, vetorB, vetorC, LEN);

    printf("Vetor A: ");
    print_vetor(vetorA, LEN);
    
    printf("Vetor B: ");
    print_vetor(vetorB, LEN);
    
    puts("----------------\n");

    printf("Vetor C: ");
    print_vetor(vetorC, LEN+LEN);
    
    return 0;
}