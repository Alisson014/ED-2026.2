#include <stdio.h>

#define tamanho 5

int main(void) {

    // utilizando lista de inicialização
    // isso não funciona fora da inicialização
    int vetor[tamanho] = {10, 20, 30, 40, 50};
    float media = 0;

    for (int i = 0; i < tamanho; i++ ){
        media += vetor[i];
    }

    media /= 5;

    printf("Resultado: %.2f\n", media);

    return 0;
}