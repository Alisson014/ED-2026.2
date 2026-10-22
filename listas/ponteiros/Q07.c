/**7) Escreva um programa que calcule a transposta de uma matriz. As
matrizes, tanto a original quanto a transposta, devem ser criadas
utilizando alocação dinâmica de memória e representadas por variáveis
do tipo ”ponteiro para ponteiro de inteiro”(int **). O programa deve
seguir estes passos:
a) Solicitar ao usuário as dimensões da matriz original (número de
linhas L e colunas C).
b) Permitir que o usuário preencha os valores da matriz original.
c) Imprimir a matriz original e a matriz transposta para verificação */

#include <stdio.h>
#include <stdlib.h>

void print_matriz(float **mat_ptr, int lin, int col){
    for (int i=0; i<lin; i++){
        for (int j=0; j<col; j++){
            printf("%.2f ", mat_ptr[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    int linhas, colunas;
    float **matriz_original, **transposta;
    
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    matriz_original = (float **)malloc(linhas * sizeof(float *));
    for (int i=0; i<linhas; i++){
        matriz_original[i] = (float *)malloc(colunas * sizeof(float));
    }

    transposta = (float **)malloc(colunas * sizeof(float *));
    for (int i=0; i<colunas; i++){
        transposta[i] = (float *)malloc(linhas * sizeof(float));
    }

    for (int i=0; i<linhas; i++){
        printf("Valores da linha %d:\n", i);
        for (int j=0; j<colunas; j++){
            printf(" | Digite o elemento %d: ", j);
            scanf("%f", &matriz_original[i][j]);
            transposta[j][i] = matriz_original[i][j];
        }
    }

    printf("Matriz original:\n");
    print_matriz(matriz_original, linhas, colunas);
    printf("\nMatriz transposta:\n");
    print_matriz(transposta, colunas, linhas);

    // Liberando memória alocada
    for (int i=0; i<linhas; i++){
        free(matriz_original[i]);
    }
    free(matriz_original);
    
    for (int i=0; i<colunas; i++){
        free(transposta[i]);
    }
    free(transposta);

    return 0;
}