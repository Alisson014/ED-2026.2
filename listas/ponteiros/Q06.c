/**6) Dado um vetor de inteiros ordenado, escreva um programa que remova
os elementos duplicados. A modificação deve ser feita no próprio vetor

(”in-place”). Ao final, o programa deve imprimir o vetor modificado e o
seu novo tamanho efetivo (o número de elementos únicos). */

#include <stdio.h>

#define LEN 8

int setfy(int *vetor_ptr, int len){
    int current_index = 0;
    
    for (int i=1; i<len; i++){
        if (vetor_ptr[i] != vetor_ptr[current_index]){
            current_index++;
            vetor_ptr[current_index] = vetor_ptr[i];
        }
    }

    return current_index+1;
}

void print_vetor(int *vetor_ptr, int len){
    for (int i=0; i<len; i++){
        printf("%d ",vetor_ptr[i]);
    }
    printf("\n");
}

int main(void){

    int vetor[LEN] = {1, 2, 2, 2, 4, 5, 5, 5};

    int real_length = setfy(vetor, LEN);

    print_vetor(vetor, real_length);
    printf("Tamanho efetivo: %d\n", real_length);

    return 0;
}