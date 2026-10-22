/**7) Faça um programa que verifique se duas matrizes podem ser
multiplicadas e, caso seja possível, multiplique as duas matrizes */

#include <stdio.h>

#define NA 2
#define MA 2
#define NB 2
#define MB 3

void printMatriz(int *mPtr, int n, int m){
    for (int i=0; i<n; i++){
        for (int j=i*m; j<(i+1)*(m); j++){
            printf("%d ", *(mPtr+j));
        }
        printf("\n");
    }
}

int main(void){
    int matrizA[NA][MA] = {
        {2, 3},
        {4, 6},
    };
    
    int matrizB[NB][MB] = {
        {1, 3, 0},
        {2, 1, 1},
    };

    printf("Matriz A: \n");
    printMatriz(matrizA[0], NA, MA);
    
    printf("Matriz B: \n");
    printMatriz(matrizB[0], NB, MB);

    if (MA == NB){
        int matrizAB[NA][MB];

        for (int i=0; i<NA; i++){
            for (int j=0; j<MB; j++){
                int aij = 0;

                for (int k=0; k<MA; k++){
                    aij += matrizA[i][k] * matrizB[k][j];
                }
                matrizAB[i][j] = aij;
            }
        }

        printf("O produto das matrizes eh: \n");
        printMatriz(matrizAB[0], NA, MB);

    } else {
        printf("As matrizes não podem ser multiplicadas");
    }

    return 0;
}