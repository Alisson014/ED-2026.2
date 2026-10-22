/**3) Escreva um programa que calcule o produto escalar de dois vetores
arrays de números de ponto flutuante. O programa deve solicitar que o
usuário digite os elementos do primeiro vetor e em seguida os
elementos do segundo vetor. Por fim, deve calcular e exibir o produto
escalar entre os dois vetores, utilizando operações com ponteiros.
Considere os vetores de tamanho fixo, determinados dentro do código. */

#include <stdio.h>

#define LEN 3

void get_vetor(float *vetor_ptr, int len){
    for (int i=0; i<len; i++){
        printf("Digite o %d termo: ",i+1);
        scanf("%f", (vetor_ptr+i));
    }
}

int main(void){

    float vetor1[LEN], vetor2[LEN], prod_escalar;

    printf("Preencha o primeiro vetor: \n");
    get_vetor(vetor1, LEN);
    
    printf("Preencha o segundo vetor: \n");
    get_vetor(vetor2, LEN);

    for (int i=0; i<LEN; i++){
        prod_escalar += vetor1[i]*vetor2[i];
    }

    printf("Produto escalar: %.2f\n", prod_escalar);

    return 0;
}