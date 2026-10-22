/**
 * 4) Crie uma função chamada trocarValores que receba o endereço
de memória de duas variáveis inteiras (ou seja, dois ponteiros
para inteiro). A função deve trocar o conteúdo dessas duas
variáveis. Na main, declare duas variáveis, imprima seus valores,
chame a função passando seus endereços (&) e imprima os
valores novamente para confirmar que foram trocados.
 */

#include <stdio.h>

void trocarValores(int *ptr1, int *ptr2){
    int aux = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = aux;
}

int main(void) {
    int var1 = 14, var2 = 11;

    printf("Valores antes: var1 (%d) - var2 (%d)\n", var1, var2);
    
    trocarValores(&var1, &var2);
    
    printf("Valores depois: var1 (%d) - var2 (%d)", var1, var2);
    return 0;
}