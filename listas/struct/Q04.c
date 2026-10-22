/**4) Crie um programa que utilize estruturas e alocação dinâmica para gerenciar
um conjunto de notas de alunos e calcular estatísticas básicas.
a) Crie uma struct chamada Estatistica que contenha: media: Um campo
float para armazenar a média das notas; desvio_padrao: Um campo
float para armazenar o desvio padrão das notas.
b) O programa deve solicitar ao usuário a quantidade N de notas (do tipo
float) a serem processadas.Use malloc() para alocar dinamicamente
um vetor de float exatamente com o tamanho N para armazenar as
notas.
c) Crie uma função chamada calcular_estatisticas com o seguinte
protótipo:
void calcular_estatisticas(float *notas, int N, Estatistica *resultado);
Dentro da função, calcule a média e o desvio padrão e armazene os
resultados nos campos da struct apontada por resultado.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct estatistica {
    float media;
    float desvio_padrao;
} Estatistica;

void calcular_estatisticas(float *notas, int N, Estatistica *resultado){
    float soma=0;

    for (int i=0; i<N; i++){
        soma += notas[i];
    }
    resultado->media = soma/N;

    soma = 0;

    for (int i=0; i<N; i++){
        soma += (notas[i] - resultado->media) * (notas[i] - resultado->media); 
    }

    resultado->desvio_padrao = sqrtf(soma/N);
}

int main(void){
    int n;
    float *notas;
    Estatistica resultado;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &n);

    notas = (float *) malloc(n * sizeof(float));

    printf("Digite as notas: \n");
    for (int i=0; i<n; i++){
        printf("Nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    calcular_estatisticas(notas, n, &resultado);

    printf("Estatisticas: \n");
    printf("| Media: %.2f\n", resultado.media);
    printf("| desvio padrao: %.2f\n", resultado.desvio_padrao);

    return 0;
}