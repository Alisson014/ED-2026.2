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


    char s1[N] = {"Lógica de"};
    char s2[N] = {" programação!"};

    printf("Antes do strcat: \n");
    puts(s1);
    puts(s2);
    
    // strcat(quem recebe, quem é incorporado);
    strcat(s1, s2);
    
    printf("Depois do strcpy: \n");
    puts(s1);
}