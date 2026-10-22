
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

void rotacionaPtr( int *mOrigPtr, int *mRotacPtr, int len){
    for (int i=0; i<len; i++){
        *(mRotacPtr+i) = *(mOrigPtr+(len-(i+1)));
    }
}

int main(void){
    int matriz[N][M] = {
        {5, 7, 8, 2},
        {1, 4, 5, 3},
        {0, 8, 6, 9}
    };

    int matrizRotacionada[N][M];

    // for (int i=0; i<N; i++){
    //     for (int j=0; j<M; j++){
    //         matrizRotacionada[i][j] = matriz[N-(i+1)][M-(j+1)];
    //     }
    // }

    rotacionaPtr(matriz[0], matrizRotacionada[0], N*M);

    printf("Matriz original: \n");
    printMatriz(matriz[0], N, M);
    
    printf("\nMatriz rotacionada: \n");
    printMatriz(matrizRotacionada[0], N, M);

    return 0;
}