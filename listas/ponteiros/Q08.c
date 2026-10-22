#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LEN 3

int main(void){
    float *vetor, erro, rms, soma=0;
    int index = 0, tamanho=1;
    vetor = (float *)malloc(LEN * sizeof(float));

    printf("Digite um valor: ");
    scanf("%f", &erro);
    while (erro != 0.0f){
        vetor[index] = erro;
        index++;

        printf("Digite um valor: ");
        scanf("%f", &erro);

        if (index == tamanho*LEN -1){
            tamanho++;
            vetor = realloc(vetor, tamanho*LEN*sizeof(float));
        }
    }
    printf("%d\n", index);
    for (int i=0; i<index; i++){
        soma += vetor[i]*vetor[i];
    }
    rms = sqrtf(soma/(index));

    printf("RMS: %.2f", rms);

    free(vetor);
    return 0;
}