/**3) Faça um programa que receba dois vetores com N números, no qual cada número do vetor deve conter
 *  apenas um dígito entre 0 e 9 (valide essa operação). Depois some os dois números e gere um terceiro 
 * vetor com a soma. Exemplo: vet1 = [8, 2, 3] e vet2 =[3, 4, 9] geraria o vet3 = [1, 1, 7, 2].  */


#include <stdio.h>

#define N 3

int input(char mens[], int i){
    int value;
    printf(mens, i+1);
    scanf("%d", &value);
    fflush(stdin);

    while (value < 0 || value > 9) {   
        printf("Somente numeros entre 0 e 9\n");
        printf(mens, i+1);
        scanf("%d", &value);
        fflush(stdin);
    }

    return value;
}

int _10_elevado_a(int e){
    int res = 1;
    for (int i=0; i<e; i++){
        res *= 10;
    }

    return res;
}

void get_num(int *vetor, int len, int *num){
    for (int i=0; i<len; i++){
        *num += vetor[i] * _10_elevado_a(len-(i+1));
    }
}

int get_len(int num){
    int len=0;
    while (num > _10_elevado_a(len)){
        len++;
    }
    return len;
}

int main(void){
    int vetor1[N], vetor2[N], vetor_soma[N+1];
    int num1=0, num2=0, soma, len_soma;

    printf("Preencha o vetor 1:\n");
    for (int i=0; i<N; i++){
        vetor1[i] = input("| elemento %d: ", i);
    }
    
    printf("Preencha o vetor 2:\n");
    for (int i=0; i<N; i++){
        vetor2[i] = input("| elemento %d: ", i);
    }

    get_num(vetor1, N, &num1);
    get_num(vetor2, N, &num2);

    soma = num1 + num2;

    len_soma = get_len(soma);

    for (int i=0; i<len_soma; i++){
        vetor_soma[i] = soma / _10_elevado_a(len_soma-(i+1));
        soma %= _10_elevado_a(len_soma-(i+1));
    }

    printf("Vetor soma: \n");
    for (int i=0; i<len_soma; i++){
        printf("%d ", vetor_soma[i]);
    }

    return 0;
}