#include <stdio.h>

int main(void){

    char s[10];
    printf("Leitura pelo gets: ");
    gets(s);
    fflush(stdin);

    puts("Resultado com puts: ");
    puts(s);

    printf("leitura pelo fgets: ");
    fgets(s, 10, stdin);
    fflush(stdin);

    printf("Resultado: %s\n", s);

    return 0;
}