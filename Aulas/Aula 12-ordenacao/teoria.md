
# Algoritmos de ordenação:

Existem vários algoritmos, cada um com suas especificidades, vantagens e contextos de uso.

A ordenação pode ser realizada por vários fatores, mas a maioria dos casos se resumo a casos números e alfabéticos.

## Vantagens:
- Pode otimizar buscas em um espaço muito grande (busca binária);
- Vários sistemas dependem de dados ordenados:
 - Ifood;
 - e-commerces;
 - Bancos;

## Não existe o algoritmo perfeito:

Na verdade, existe o melhor para cada situação.

Maneiras para compará-los:
- **Complexidade de tempo:** Número de comparações;
 - O(N logN), O(N²), etc.
- **Complexidade de expaço:** Quanta memória extra é consumida;
- **Número de trocas:** necessidade de criar outros elementos ou estruturas;
- **Complexidade de implementação**

**Estabilidade:** Um algoritmo de ordenação é considerado estável se a ordem dos elementos com chaves iguais não muda durante a ordenação;
- O algoritmo preserva a ordem relativa original dos valores em casos de valores iguais;
- _Para elementos com valores iguais, o algoritmo não muda a ordem original entre eles_

## Casos de ordenação:
**Melhor caso:** o vetor já está ordenado;
**Médio caso:**
**Pior caso:**


## Bubble sort:

Baseia-se na troca de elementos adjascentes até que o vetor esteja ordenado
- Fácil de entender, fácil de implementar, mas é ineficiente;
- Compara valores adjascente para os pares que estão na ordem errada;
- Seu objetivo é ordenar colocando os maiores para o final.

```c
void bubble_sort(int *v, int n){
    for (int i =0; i < n-1;  i++){

        for (int j=0; j<n-1; j++ >){ // possível otimização: j< n-1 -i;
        
        if (v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                // trocou = 1
            }
        }

        // if (trocou == 0) return; só percorre uma vez se já estiver ordenado
    }
}

// Melhor caso Ômega (N);
// Pior caso O(N²);
// Caso médio, O(N²);
```

## Selection sort:

Seleciona o melhor elemento para ocupar uma posição;

**Vantagens:**
- Intuitivo;
- Simples de ser implementado;
- in place, não requer memória adicional;

**Desvantagem:**
- A eficiência diminui drasticamente à medida que o número cresce;
- Não recomendado para aplicações que envolvem um grande número de dados;
- Não estável;

**Complexidade:**
- N² em todas as condições;