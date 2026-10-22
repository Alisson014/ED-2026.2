/**6) Faça um programa receba uma matriz de tamanho N x M e
calcule a matriz transposta. */

#include <stdio.h>

#define N 3
#define M 4

void printMatriz(int *mPtr, int n, int m){
    for (int i=0; i<n; i++){
        for (int j=i*m; j<(i+1)*(m); j++){
            printf("%d ", *(mPtr+j));
        }
        printf("\n");
    }
}

int main(void){
    int matriz[N][M] = {
        {5, 7, 8, 2},
        {1, 4, 5, 3},
        {0, 8, 6, 9}
    };

    int transposta[M][N];

    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("Matriz original: \n");
    printMatriz(matriz[0], N, M);
    
    printf("\nMatriz transposta: \n");
    printMatriz(transposta[0], M, N);

    return 0;
}