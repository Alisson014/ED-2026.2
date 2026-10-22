/**4) Faça um programa que calcule o determinante de uma matriz 2x2. */
// Cálculo: (prod. d_principal) - (prod. d_secundária)

#include <stdio.h>

#define N 2

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
        {2, -4},
        {3, 7}
    };
    int d_principal=1; // onde i == j;
    /** Ná matemática, onde (i+j) == n+1
     * aqui, onde (i+j) == n-1;
     */
    int d_secundaria=1; 
    int determinante = 0;

    for (int i=0; i<N; i++){
        d_principal *= matriz[i][i];
        d_secundaria *= matriz[i][N-(i+1)];
    }

    determinante = d_principal - d_secundaria;

    printf("Matriz considerada: \n");
    printMatriz(matriz[0], N);

    printf("Determinante: %d\n", determinante);

    return 0;
}
