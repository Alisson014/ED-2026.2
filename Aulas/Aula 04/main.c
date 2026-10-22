
#include <stdio.h>

int main(){
    int y = 10;
    int *x = &y;

    printf("Valor de y: %d\n", y);
    printf("Valor de y a partir de *x: %d\n", *x);

    // %p espera um tipo genérico de ponteiro, por isso o casting (void *) é necessário.
    printf("Endereco de y: %p\n", (void *)&y);
    printf("Valor(endereço) armazenado em x: %p\n", (void *)x);
    printf("Endereco de x: %p\n", (void *)&x);

}