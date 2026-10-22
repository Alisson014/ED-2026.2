/**2) Faça um programa receba uma matriz de tamanho N x N e calcule
a matriz oposta. */

#include <stdio.h>

#define N 2
#define M 2

// Função que calcula a oposta utilizando ponteiros
void calcOposta(int *vPtr, int len){
    for (int i=0; i<len; i++){
        *(vPtr+i) *= -1;
    }
}

// Função para printar a matriz com ponteiros;
// É necessário que o ponteiro passado seja refentes à linha 0;
// ex: printMatriz(matriz[0], N);
void printMatriz(int *mPtr, int n){
    for (int i=0; i<n; i++){
        for (int j=i*n; j<(i+1)*(n); j++){
            printf("%d ", *(mPtr+j));
        }
        printf("\n");
    }
}

int main(void){

    int matriz[N][N] = {
        {2, -5},
        {0, 3}
    };

    puts("Matriz antes: ");
    printMatriz(matriz[0], N);

    calcOposta(matriz[0], N*N);

    // for (int i=0; i<N; i++){
    //     for (int j=0; j<N; j++){
    //         matriz[i][j] *= -1;
    //     }
    // }

    puts("Matriz oposta: ");
    printMatriz(matriz[0], N);

    return 0;
}