/**2) Crie um programa que utilize uma struct para representar um Vetor no plano
cartesiano R². O programa deve ser capaz de:
a) Criar uma struct chamada Vetor2D com dois campos do tipo float: x
(coordenada horizontal) e y (coordenada vertical).
b) Implemente uma função criar_vetor que recebe as coordenadas x e y
e retorna uma nova struct Vetor2D inicializada.
c) Implemente uma função calcular_modulo que recebe o endereço de
uma struct Vetor2D (Passagem por Referência) e retorna o módulo (ou
norma) desse vetor, que é calculado
 */

#include <stdio.h>
#include <math.h>

typedef struct vetor2D {
    float x;
    float y;
}Vetor2D;

Vetor2D criar_vetor(float x, float y){
    Vetor2D vetor = {x, y};
    return vetor;
}

float calcular_modulo(Vetor2D *vetor_ptr){
    return sqrtf(vetor_ptr->x*vetor_ptr->x + vetor_ptr->y*vetor_ptr->y);
}

int main(void){
    Vetor2D vetor;

    vetor = criar_vetor(3, 2);

    printf("Vetor: %.2f", calcular_modulo(&vetor));

    return 0;
}