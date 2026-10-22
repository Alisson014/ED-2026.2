/**5) Faça um programa que calcule o determinante de uma matriz 3x3 */

#include <stdio.h>

#define N 3

void printMatriz(int *mPtr, int n, int m){
    for (int i=0; i<n; i++){
        for (int j=i*m; j<(i+1)*(m); j++){
            printf("%d ", *(mPtr+j));
        }
        printf("\n");
    }
}


// Por Laplace
int sinal_do_1(int soma_dos_expoentes){
    if (soma_dos_expoentes % 2 == 0){
        return 1;
    }
    return -1;
}

void busca_2x2(int *m3x3Ptr, int *m2x2Ptr, int i, int j, int n){
    int index_2x2 = 0;
    for (int p=0; p<n*n; p++){
        if( (p<n*i || p>n*(i+1)-1) && p%n != j%n ){
            m2x2Ptr[index_2x2] = m3x3Ptr[p];
            index_2x2++;
        }
    }
}

int determinante_2x2(int *m2x2Ptr){
    return (m2x2Ptr[0] * m2x2Ptr[3]) - (m2x2Ptr[1] * m2x2Ptr[2]);
}

int main(void){
    int matriz[N][N] = {
        {1, 2, 3},
        {0, 1, 4},
        {2, 3, 0}
    };
    int determinante = 0;
    int matriz_2x2[2][2];

    printf("Matriz: \n");
    printMatriz(matriz[0], N, N);

    for (int i=0; i<N; i++){
        busca_2x2(matriz[0], matriz_2x2[0], 0, i, N);
        determinante += matriz[0][i] * sinal_do_1(i+0) * determinante_2x2(matriz_2x2[0]);
    }

    printf("\nDeterminante: %d\n", determinante);

    return 0;
}