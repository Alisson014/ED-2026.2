
#include <stdio.h>

int main(void){

    for(int i = 1; i < 11; i++){
        // Não exibe apenas o 4
        if (i == 4) {
            continue;
        }

        printf("%d ", i);

        // Para de repetir depois do 5
        if (i == 5) {
            break;
        }
    }

    return 0;
}