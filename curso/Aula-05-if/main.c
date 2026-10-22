#include <stdio.h>

int main(void) {

    float media;

    printf("Insira media: ");
    scanf("%f", &media);

    if (media >= 7) {
        printf("APR!");
    }
    
    return 0;
}