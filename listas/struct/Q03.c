/**3) Crie um programa em C que utilize uma struct para armazenar informações
básicas de um produto e calcule seu preço de venda final.
a) Crie uma struct chamada Produto que contenha: codigo: Um inteiro
(int). preco_custo: Um valor de ponto flutuante (float).
percentual_lucro: Um valor de ponto flutuante (float).
b) Crie uma função chamada ler_produto com o seguinte protótipo:
Produto ler_produto();
Esta função deve solicitar ao usuário o código, o preço de custo e o
percentual de lucro do produto. A função deve retornar uma nova
struct Produto preenchida
c) Crie uma função chamada calcular_preco_venda com o seguinte
protótipo:
float calcular_preco_venda(Produto p);
Calcule o preço de venda final usando a fórmula: */

#include <stdio.h>

typedef struct produto{
    int codigo;
    float preco_custo;
    float percentual_lucro;
}Produto;

Produto ler_produto(int codigo, float preco_custo, float percentual_lucro){
    Produto produto = {codigo, preco_custo, percentual_lucro};
    return produto;
}

float calcular_preco_venda(Produto p){
    float preco_venda;
    preco_venda = p.preco_custo * (1+ (p.percentual_lucro/100));
    return preco_venda;
}

int main(void){
    Produto p;
    float preco_venda;

    p = ler_produto(1, 10, 10);
    preco_venda = calcular_preco_venda(p);

    printf("Produto: \n");
    printf("| Codigo: %d\n", p.codigo);
    printf("| Preco de custo: R$ %.2f\n", p.preco_custo);
    printf("| Percentual de Lucro: %.2f\n", p.percentual_lucro);
    printf("| Preco venda: R$ %.2f\n", preco_venda);

    return 0;
}