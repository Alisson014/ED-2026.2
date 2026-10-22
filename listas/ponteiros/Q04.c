/**4) Modifique o código da questão dois, de forma que seja requisitado ao
usuário o tamanho n dos vetores e, na sequência, os elementos dos
vetores. Utilize ponteiros para criação dos vetores. */

#include <stdio.h>

void get_vetor(float *vetor_ptr, int len){
    for (int i=0; i<len; i++){
        printf("Digite o %d termo: ",i+1);
        scanf("%f", (vetor_ptr+i));
    }
}

int main(void){

    int LEN=0;
    printf("Digite o tamaho dos vetores: ");
    scanf("%d", &LEN);

    float vetor1[LEN], vetor2[LEN], prod_escalar;

    printf("Preencha o primeiro vetor: \n");
    get_vetor(vetor1, LEN);
    
    printf("Preencha o segundo vetor: \n");
    get_vetor(vetor2, LEN);

    for (int i=0; i<LEN; i++){
        prod_escalar += vetor1[i]*vetor2[i];
    }

    printf("Produto escalar: %.2f\n", prod_escalar);
    
    return 0;
}
