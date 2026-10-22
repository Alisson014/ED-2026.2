/**1) Imagine que você precisa armazenar informações de vários alunos: nome,
matrícula e duas notas. Você também precisa calcular a média das notas de
cada aluno e imprimir se ele passou ou não. Utilize struct para resolver essa
questão.
 */

#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[100];
    char matricula[10];
    float nota1;
    float nota2;
};


#define N 3

int main(void){
    struct Aluno alunos[N];
    float media;
    char situacao[4];

    for (int i=0; i<N; i++){
        printf("Aluno: %d\n", i+1);
        printf("| Digite nome: ");
        scanf("%s", &alunos[i].nome);
        // fgets(alunos[i].nome, 10, stdin);
        // scanf("%101[^\n]", &alunos[i].nome);
        fflush(stdin);
        printf("| Digite a matricula: ");
        scanf("%s", &alunos[i].matricula);
        // fgets(alunos[i].matricula, 10, stdin);
        // scanf(" %11[^\n]", &alunos[i].matricula);
        fflush(stdin);
        printf("| Digite a nota 1: ");
        scanf("%f", &alunos[i].nota1);
        fflush(stdin);
        printf("| Digite a nota 2: ");
        scanf("%f", &alunos[i].nota2);
        fflush(stdin);
        printf("\n");
    }

    for (int i=0; i<N; i++){
        media = (alunos[i].nota1 + alunos[i].nota2)/2;
        if (media >=7){
            strcpy(situacao, "APR");
        } else strcpy(situacao, "REP");

        printf("%d| %s(%s) media=%.2f (%s)\n", i+1, alunos[i].nome, alunos[i].matricula, media, situacao);
    }

    return 0;
}
