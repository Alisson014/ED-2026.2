/**1) Imagine que você precisa armazenar informações de vários alunos: nome,
matrícula e duas notas. Você também precisa calcular a média das notas de
cada aluno e imprimir se ele passou ou não. Utilize struct para resolver essa
questão.
 */

#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    char nome[100];
    char matricula[10];
    float nota1;
    float nota2;
    float media;
    char passou;
};


void passou(struct Aluno *aluno){
    aluno->media = (aluno->nota1 + aluno->nota2)/2;
    if (aluno->media >= 7) {
        aluno->passou = 'A';
    } else {
        aluno->passou = 'R';
    }
}


int main(void){
    int qtd_alunos;
    struct Aluno *alunos;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtd_alunos);
    fflush(stdin);

    alunos = (struct Aluno *)malloc(qtd_alunos * sizeof(struct Aluno));

    for (int i=0; i<qtd_alunos; i++){
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

        passou((alunos+i));
    }

    for (int i=0; i<qtd_alunos; i++){
        printf("Aluno %d:\n", i+1);
        printf("| Nome: %s\n", alunos[i].nome);
        printf("| Media: %.2f\n", alunos[i].media);
        if (alunos[i].passou == 'A'){
            puts("| Aprovado(a)");
        } else{
            puts("| Repovado(a)");
        }
    }

    free(alunos);
    return 0;
}
