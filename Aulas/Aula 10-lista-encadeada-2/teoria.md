
# Lista encadeada:

## Inserindo ao final:

Percorrer a lista até encontrar o nó cujo próximo é NULL

```c
void append_last(Lista* li, int data){
    Lista* no = li;

    // Percorre a lista até encontrar o último.
    // O último é aquele cujp prox é NULL;
    while (no->prox != NULL) no = no->prox;
    
    Lista* new_no = (Lista*)malloc(sizeof(Lista*));

    // Definindo dados do novo nó
    new_no->prox = NULL;
    new_no->data = data;

    // Faz o último apontar para o novo nó;
    no->prox = new_no;
}
```

## Imprimindo a lista:

Basta percorrer a lista, semelhante ao item anterior, até quando o nó for NULL;

```c
// Exemplo com for
void print_lista(Lista *li){
    for (Lista* no = li; no!=NULL; no = no->prox){
        printf("%d ", no->data);
    }
    printf("\n");
}

// Exemplo com while
void print_lista(Lista *li){
    Lista* no = li;

    while (no != NULL){
        printf("%d ", no->data);
        no = no->prox;
    }
    printf("\n");
}
```

## Liberando todos os elementos:

```c
Lista* free_lista(Lista* li){
    while (li != NULL){
        Lista* aux = li->prox;
        free(li);
        li = aux;
    }

    // Retornando NULL;
    return li;
}
```

## Buscando um elemento:

Nesse caso estou buscando pela posição, mas nada impede de buscar pelo valor de `data`

```c
// Buscando um elemento específico;
Lista* get_item(Lista* li, int index){
    Lista* no = li;
    int cont = 0;
    while (cont < index && no!=NULL){
        no= no->prox;
        cont++;
    }

    if (no == NULL){
        printf("Index %d fora do intervalo\n", index);
        return NULL;
    }

    return no;
}
```

## Removendo um elemento:

É necessário tratar três casos distintos:
- **Remover o primeiro elemento:** É preciso fazer o início (li) apontar para o segundo;
- **Remover um elemento no meio:** O anterior precisa apontar para o próximo;
- **Remocer o último:** O penúltimo precisa apontar para NULL;

```c
Lista *remove(Lista* li, int valor){
    Lista* ant = NULL;
    Lista* pr = li;

    while (pr!= NULL){
        if (pr->valor == valor){
            break;
        }
        ant = pr;
        pr = pr->prox;
    }

    // Caso em que não encontrou o elemento
    if (p == NULL){
        return li;
    }

    // Caso em que é o primeiro elemento
    if (ant == NULL){
        li = p->prox;
    } else {
        // Caso em que está no meio ou no fim;
        ant->prox = p->prox;
    }

    free(p);
    return li;
}
```

