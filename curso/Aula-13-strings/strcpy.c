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


    char origem[N] = {"Olá, mundo!"};
    char destino[N];

    printf("Antes do strcpy: \n");
    puts(origem);
    puts(destino);
    
    strcpy(destino, origem);
    
    printf("Depois do strcpy: \n");
    puts(origem);
    puts(destino);
}