
# Listas Encadeadas:

Uma lista encadeada é um conjunto de dados dispostos em uma sequência determinada.

Diferentemente de um vetor, os elementos podem estar consecutiva ou espalhados na memória.

Pode estar ordanado ou não.

Existem algumas operações intríssicas possíveis.

## Vetor:
- Ocupa um espaço contíguo na memória;
- Permite acesso randâmico aos elementos;
- Deve ser dimensionado com um número máximo de elementos

```c
int vetor[4] = {1, 2, 3, 4};
```

**Limitações:**
- Tamanho fixo;
- Não há aumento nativo para a quantidade de elementos;
- Desperdício de memória (casos em que não se saiba o tamanho máximo);

## Estruturas de dados dinâmica:
- Crescem ou decrescem conforme os elementos;

Uma lista encadeada é um exemplo
- Maior flexibilidade;
- Permite tipos diferentes de dados;

Cada item de uma lista é chamado de nó, que guarda o valor da posíção e um ponteiro para o próximo nó.

_Uma lista encadeada é uma lista com itens (valor, ponteiro para o próximo)_

`Lista encadeada não permite acesso randômico, é necessário percorrer a lista`

**Um nó:**

Cada nó é uma struct, onde há um valor e um ponteiro do tipo do Struct apontando para o próximo.

```c
typedef struct lista {
    int dado;
    Lista *prox;
}Lista;
```

**Iniciando uma lista:**

Isso pode ser feito criando-se uma função:
```c
Lista* inicializa(void){
    return NULL;

    // Utilizando na main na main:
    // li = incializa();
}
```

**Inserindo dados em uma lista vazia:**

```c
Lista* insercao_vazio(int dado){
    Lista *no = (Lista *)malloc(sizeof(Lista));
    no->dado = dado;
    no->prox = NULL;

    return no;

    // Após isso, é preciso fazer a lista vazia (o início), apontar para `no`;
    // Algo como: li = insercao_vazio(dado);
}
```

**Removendo o primeiro elemento:**

```c
Lista* free_prim_elem(Lista *li){
    Lista* no;
    no = li;
    li = li->prox;
    free(no);
    return li;
}
```

**Para remover todos os elementos:**

Basta percorrer a lista e aplicar a remoção do primeiro a todos os elementos;

**Percorrendo uma lista:**

```c
for (Lista*no = li; no != NULL; no = no->prox){
    //...
}
```

```c
int len_lista(Lista *li){
    int cont = 0;
    while(li != NULL){
        cont ++;
        li = li->prox;
    }
    return cont;
}
```

**Inserindo no início:**

A lista vai apontar para o novo nó;

no-prox = li;
li = no;

```c
Lista* insercao_inicio(Lista* li, int dado){
    Lista *aux = (Lista*) malloc(sizeof(Lista));
    aux->dado = dado;
    aux->prox = li; // Lembre-se que li aponta para o primeiro elemento

    return aux;

    // Na main:
    // li = insercao_inicio(li, dado); // Isso faz o li apontar para o novo primeiro.
    // aux é o nó
}
```
