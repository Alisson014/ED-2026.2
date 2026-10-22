/**9) Dizemos que uma matriz quadrada de números inteiros é um
quadrado mágico se a soma dos elementos de cada linha, a soma
dos elementos de cada coluna e a soma dos elementos das
diagonais principal e secundária são todas iguais. Faça um
programa receba uma matriz de tamanho N x N, informe se a
matriz é mágica ou não.
 */

#include <stdio.h>

#define N 3

int somaLinha(int *linhaPtr, int len){
    int soma = 0;
    for (int i=0; i<len; i++) soma += *(linhaPtr+i);
    return soma;
}

int somaColuna(int *colPtr, int len){
    int soma = 0;
    for (int i=0; i<len*len; i+=len) soma += colPtr[i];
    return soma;
}

int somaDiagP(int *diagPtr, int len){
    int soma = 0;
    for (int i=0; i<len*len; i+=len+1) soma += *(diagPtr+i);
    return soma;
}

int somaDiagS(int *diagPtr, int len){
    int soma = 0;
    for (int i=len-1; i<len*len-(len-1); i+=len-1) soma += *(diagPtr+i);
    return soma;
}

int equals(int items[], int len){

    for(int i=1; i<len; i++){
        if (items[0] != items[i]){
            return 0;
        }
    }

    return 1;
}

int isMagic(int *matPtr, int len){
    int soma_dp = somaDiagP(matPtr, len);

    if (soma_dp != somaDiagS(matPtr, len)) return 0;

    for (int i=0; i<len; i++){
        int somas[3] = {soma_dp, somaLinha(matPtr+i*len, len), somaColuna(matPtr+i, len)};

        if( !equals(somas, 3)){
            return 0;
        }
    }

    return 1;
}


int main(void){
    int matriz[N][N] = {
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };

    if (isMagic(matriz[0], N)){
        printf("Eh quadrado magico");
    } else {
        printf("Nao eh quadrado magico");

    }

    return 0;
}