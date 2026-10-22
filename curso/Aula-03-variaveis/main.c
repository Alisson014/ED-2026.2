
#include <stdio.h>

#define texto "Exemplo de constante."

int main(void) {
    printf("%s\n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = ""; //Uma string é um vetor de caracteres.

    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    printf("Digite a altura: ");
    scanf("%f", &altura);
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("# Dados informados:\n");
    printf("| Idade: \t%d.\n", idade);
    printf("| Altura: \t%f.\n", altura);
    printf("| Nome: \t%s.\n", nome);

    return 0;
}