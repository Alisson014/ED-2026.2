
#include <stdio.h>

int main(void) {

    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    // if (4 <= nota < 7) Não funciona em C;
    if (nota >= 4 && nota < 7) {
        printf("Tem direito ao segundo exame\n");
    }

    return 0;
}