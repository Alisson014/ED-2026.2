#include <stdio.h>

int main(void){
    int idade = 0;

    printf("Valor inicial da idade: %d.\n", idade);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
     
    /** 
     * Ler mais de uma coisa ao mesmo tempo:
     * scanf("%d %d", &idade, &ano);
     */
    printf("Idade informada: %d.\n", idade);

    
    return 0;
}