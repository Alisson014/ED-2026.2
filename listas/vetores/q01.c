/**
 * 1) Faça um programa que receba um vetor com N números. Supondo que
o vetor digitado foi [1, 2, 3, 4], imprima-o da seguinte maneira: (1) (2)
(3) (4)
 */

#include <stdio.h>
#include <locale.h>
#include <windows.h> // acentuação de caracteres no windows

#define N 5

int main(){
    /** acentuação para windows */
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");

    int nums[N];

    for(int i = 0; i < N; i++){
        printf("Digite o %dº elemento: ", i+1);
        scanf("%d", &nums[i]);
        fflush(stdin);
    }
    
    for (int i=0; i < N; i++){
        printf("(%d) ", nums[i]);
    }
    printf("\n");
}