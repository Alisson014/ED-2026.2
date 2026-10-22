#include <stdio.h>

int main(void) {
    int A, B, soma, subtr, mult, divis;

    printf("Digite o primeiro valor: ");
    scanf("%d", &A);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &B);
    
    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;  // Divisão entre variáveis inteiras resulta em uma divisão inteira;

    printf("\nResultados: \n");
    printf(">>> Soma: %d\n", soma);
    printf(">>> Subtracao: %d\n", subtr);
    printf(">>> Multiplicacao: %d\n", mult);
    printf(">>> Divisao: %d\n", divis);

    return 0;
}