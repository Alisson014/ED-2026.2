#include <stdio.h>

int main(void) {

    int d;

    printf("Insira um valor de 1 a 7: \n");
    if (scanf("%d", &d) != 1){
        printf("Digite um numero");
        return 1;
    };

    switch (d)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terca\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    
    default:
        printf("Dia invalido");
        break;
    }

    return 0;
}