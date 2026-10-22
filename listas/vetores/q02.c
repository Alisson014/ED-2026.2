
/**2) Faça um programa que receba um vetor com N números. Depois,
realize as seguintes operações na sequência:
a) Imprima o vetor preenchido
b) Digite um número x, se este número existir diga “o número
<número> existe”
c) Digite um número y, se este número não existir no vetor,
substitua x por y
d) Imprima novamente o vetor */

#include <stdio.h>
#include <locale.h>
#include <windows.h> // acentuação de caracteres no windows

#define N 4

int include(int v[], int len, int n){
    for (int i=0; i<len; i++){
        if (v[i] == n){
            return 1;
        }
    }

    return 0;
}

void print_v(int v[], int len){
    for (int i=0; i<len; i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}

int main(){
    /** acentuação para windows */
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");

    int nums[N];
    int x;
    int y;

    // preenchendo o vetor
    for (int i=0; i<N; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &nums[i]);
        fflush(stdin);
    }

    // (a) imprimir o vetor preenchido
    printf("\nVetor preenchido: ");
    print_v(nums, N);
    printf("\n");

    // (b) verificando se x existe em nums
    printf("Digite x: ");
    scanf("%d", &x);
    fflush(stdin);

    if (include(nums, N, x) == 1){
        printf("O número %d existe", x);
    }
    printf("\n");

    // (c) verificando se y existe e substituindo x por y se x não existir
    printf("Digite y: ");
    scanf("%d", &y);
    fflush(stdin);
    if (include(nums, N, y) == 0){
        for (int i=0; i<N; i++){
            if (nums[i] == x){
                nums[i] = y;
                break;
            }
        }
    }

    // (d) imprimir o vetor novamente
    printf("Vetor final: ");
    print_v(nums, N);

    return 0;
}