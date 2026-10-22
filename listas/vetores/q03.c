/**3) Faça um programa que receba dois vetores com N números, no qual
cada número do vetor deve conter apenas um dígito entre 0 e 9 (valide
essa operação). Depois some os dois números e gere um terceiro vetor
com a soma. Exemplo: vet1 = [8, 2, 3] e vet2 =[3, 4, 9] geraria o vet3 =
[1, 1, 7, 2]. */

#include <stdio.h>
#include <locale.h>
#include <windows.h> // acentuação de caracteres no windows

#define N 4


int input(char mens[], int i){
    int var;
    printf(mens,i+1);
    scanf("%d", &var);
    fflush(stdin);
    while (!(var>=0 && var<=9)){
        puts("Digite apenas números entre 0 e 9\n");    
        printf(mens,i+1);
        scanf("%d", &var);
        fflush(stdin);
    }

    return var;
}

void print_v(int v[], int len){
    for (int i=0; i<len; i++){
        printf("%d ",v[i]);
    }
}

int main() {
    /** acentuação para windows */
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");

    int v1[N];
    int v2[N];
    int soma[N];

    printf("Preenchendo o primeiro vetor: \n");
    for (int i=0; i<N; i++){
        v1[i] = input("Digite o %d número: ", i);
    }
    
    printf("\nPreenchendo o segundo vetor: \n");
    for (int i=0; i<N; i++){
        v2[i] = input("Digite o %d número: ", i);
    }

    for (int i=0; i<N; i++){
        soma[i] = v1[i] + v2[i];
    }

    printf("\nVetor soma: \n");
    print_v(soma, N);

}