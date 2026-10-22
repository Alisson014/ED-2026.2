#include <stdio.h>

int main(void){
    char s[10]; //salva 9 caracteres úteis

    printf("Digite algo (scanf convencional): ");
    scanf("%s", s);
    fflush(stdin);

    printf("Resultado: %s\n",s);
    
    printf("Digite algo (scanf aprimorado): ");
    scanf(" %9[^\n]", s);
    fflush(stdin);
    
    printf("Resultado: %s\n",s);
    return 0;
}