#include <stdio.h>
#include <string.h>
#include <locale.h>

#include <windows.h> // acentuação de caracteres no windows

#define N 50

int main() {
    /** acentuação para windows */
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");


    char s[N] = {"Olá, mundo!"};
    int len;

    printf("Digite um texto: ");
    fgets(s, N, stdin);

    len = strlen(s);
    printf("Tamanho do texto: %d", len);
    
    printf("\nImpressão por posição: ");
    for (int i = 0; i < len; i++){
        printf("%c ", s[i]);
    }
    printf("%s", s); // funciona normalmente
}