/**
 * 1) Implementar lista encadeadas simples e 
 * suas funções principais
 * a) Inicializa
 * b) Insere
 * c) Imprime
 * d) Busca
 * e) Remove
 * f) Libera
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;

struct lista {
    int data;
    Lista* prox;
};

// Função para inicializar
Lista* init(void){
    return NULL;
}

// Inserir na lista
Lista* append_first_element(int data){
    Lista* no = (Lista*)malloc(sizeof(Lista*));
    no->data = data;
    no->prox = NULL;

    return no;
}

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

void insert(Lista* li, int index, int data){
    Lista *no = li;
    int cont = 0;

    if (index == 0){
        printf("Index invalido\n");
        return;
    };

    // Encontra o no anteior a posição index;
    while (cont < index-1 && no != NULL){
        no = no->prox;
        cont++;
    };

    if(no == NULL) {
        printf("Index %d fora do intervalo\n", index);
        return;
    };

    // Capturando o no seguinte
    Lista* next_no = no->prox;

    Lista* new_no = (Lista *)malloc(sizeof(Lista*));

    no->prox = new_no;

    new_no->prox = next_no;
    new_no->data = data;
}

Lista* insert_init(Lista* li, int data){
    Lista *no = (Lista*)malloc(sizeof(Lista*));
    no->prox = li;
    no->data = data;

    return no;
}

// Imprimindo a lista
void print_lista(Lista *li){
    for (Lista* no = li; no!=NULL; no = no->prox){
        printf("%d ", no->data);
    }
    printf("\n");
}

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

int main(void){

    Lista* li = init();

    
    // Inserindo dados na lista;
    li = append_first_element(1);
    append_last(li, 2);
    append_last(li, 3);
    insert(li, 10, 0);
    insert(li, 1, 0);
    insert(li, 3, 0);
    li = insert_init(li, 0);
    
    printf("Imprimindo a lista: ");
    print_lista(li);

    Lista* getted_no = get_item(li, 3);

    printf("get item: %d\n", getted_no->data);

    return 0;
}