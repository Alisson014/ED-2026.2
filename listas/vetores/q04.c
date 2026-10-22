/**4) Faça um programa que receba dois vetores com N números, no qual
cada vetor tem seus valores em ordem crescente (não precisa validar)
e depois gere um terceiro vetor ordenado com os números dos dois
vetores. Exemplo: vet1 = [1, 2, 3] e vet2 = [2, 4, 5] resultaria em [1, 2, 2,
3, 4, 5]. */

#include <stdio.h>

#define N 3

int main(void){

    int v1[N], v2[N], v3[N*2];
    int indv1, indv2;

    printf("Preenchendo o vetor 1: \n");
    for(int i=0; i<N; i++){
        printf("Digite o %d numero: ",i+1);
        scanf("%d", &v1[i]);
    }
    printf("\n");
    
    printf("Preenchendo o vetor 2: \n");
    for(int i=0; i<N; i++){
        printf("Digite o %d numero: ",i+1);
        scanf("%d", &v2[i]);
    }
    printf("\n");

    
    indv1 = 0;
    indv2 = 0;
    for (int i=0; i<N+N; i++){
        if (v1[indv1] < v2[indv2] && indv1 < N){
            v3[i] = v1[indv1];
            indv1++;
        } else {
            v3[i] = v2[indv2];
            indv2++;
        }
    }

    printf("Imprimindo o terceiro vetor: \n");
    for (int i=0; i<N*2; i++){
        printf("%d ",v3[i]);
    }

    return 0;
}