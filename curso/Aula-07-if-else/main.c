
#include <stdio.h>

int main(void) {

    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota >= 7) {
        printf("APR\n");
    } else if (nota >= 4 && nota < 7) {
        printf("Tem direito ao segundo exame\n");
    } else {
        printf("REPR\n");
    }

    return 0;
}