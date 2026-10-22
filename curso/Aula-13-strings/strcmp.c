#include <stdio.h>
#include <string.h>
#include <locale.h>

#include <windows.h> // acentuação de caracteres no windows

#define N 20

int main() {
    /** acentuação para windows */
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");


    char hardText[N] = "/exit\n";
    char senha[N];
    int ok;

    printf("Digite a senha: ");
    fgets(senha, N, stdin);
    fflush(stdin);

    ok = strcmp(hardText, senha);

    if (ok == 0){
        printf("Acesso permitido\n");
    } else {
        printf("Acesso negado\n");
    }

    printf("%d", ok);
    
}