/**6) Dadas as datas de aniversário de um casal, diz-se que o casal é
perfeito se o número mágico dos dois é igual. O número mágico é
obtido por somar-se repetidamente os dígitos da data de aniversário
dos indivíduos no formato ddmmaaaa até que esse número permaneça
com um único digito. Faça um programa que verifique se um casal é
perfeito ou não, dados as datas de nascimento do casal no formato
ddmmaaaa. Exemplo: niver1 = 19011981 (1+9+0+1+1+9+8+1 = 30 =
3+0 = 3) e niver2 = 20021970 (2+0+0+2+1+9+7+0 = 30 = 3+0= 3), logo
este casal é perfeito. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 8+1

char get_megic_n(char str[]){
    int magic_n = 0;
    int len = strlen(str);
    char char_int[LEN];
    while (len > 1){
        magic_n = 0;
        
        for(int i=0; i<len; i++){
            magic_n += str[i] - '0';
        }
        snprintf(char_int, sizeof(char_int), "%d", magic_n);
        // puts(char_int);
        len = strlen(char_int);
        
        strcpy(str, char_int);
    }

    return magic_n;
}

int main(void){

    char date1[LEN];
    char date2[LEN];

    printf("Digite o primeiro aniversario: ");
    scanf("%9[^\n]", date1);
    fflush(stdin);
    
    printf("Digite o segundo aniversario: ");
    scanf(" %9[^\n]", date2);
    fflush(stdin);

    if (get_megic_n(date1) == get_megic_n(date2)){
        printf("Casal perfeito");
    } else {
        printf("\".\"");
    }
    return 0;
}