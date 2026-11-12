
# Lista encadeada circular:

Uma lista em que o último nó aponta para o início novamente.

Para criar uma struct de uma lista circular é exatamente a mesma coisa de uma lista encadeada.

```c
typedef struct lista {
    int dado;
    Lista *prox;
}Lista;
```

## Inicalizando:

Exatamente a mesma forma.

```c
Lista* inicializa(void){
    return NULL;

    // Utilizando na main na main:
    // li = incializa();
}
```

## Inserindo:

Na seguinte função, o início (li) sempre aponta para o último elemento inserido.

```c
Lista* insere(Lista* li, int info){
    Lista* no = (Lista*) malloc(sizeof(Lista*));
    no->info = n;
    no->prox = NULL;

    if (li == NULL){
        no->prox = no;
        li = no;
    } else {
        no->prox = li->prox;
        li->prox = no;
    }

    return no;
}
```

## Imprimindo:

```c
void imprime(Lista* li){
    Lista* aux = li;
    if (li == NULL){
        printf("Lista vazia \n");
        return;
    }

    aux = aux->prox;
    while (aux != li){
        printf("%d ", aux->info);
        aux = aux->prox;
    }

    print(li->info);

    // com do while
    do {
        printf("%d ");
        aux = aux->prox;
    } while (aux != li)
}
```

## Buscando um elemento:
```c
Lista* busca(Lista* li, int info){
    if (li == NULL) return NULL;

    Lista* aux = li;
    do {
        aux = aux->prox;
        if (aux->info == info){
            return aux;
        }
    } while (aux != n);

    return NULL;
}
```

## Removendo de uma lista com um único:

free na lista e atribui NULL;

## Removendo um específico.

```
Irei trazer o exemplo depois;
```


# Lista duplamente encadeada:

É uma lista encadeada em que há um ponteiro para o anterior.
