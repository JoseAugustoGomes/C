#include <stdio.h>
#include <stdlib.h>

struct no{
    int valor;
    struct no *proximo;
};

typedef struct no No;
typedef struct {
    No *inicio;
}lista;

void imprimir(lista *l){
    No *auxiliar;
    auxiliar = l->inicio;

    if(auxiliar == NULL){
        printf("lista vazia\n");
    }else {
        while (auxiliar != NULL){
            printf("%i ", auxiliar->valor);
            auxiliar = auxiliar->proximo;
        }
    printf("\n");
    }
}

int main() {
    No *no1, *no2;
    lista l;

    no1 = malloc(sizeof(No));
    no2 = malloc(sizeof(No));

    no1->valor = 5;
    no2->valor = 10;
    no1->proximo = no2;
    no2-> proximo = NULL;
    l.inicio = no1;
    imprimir(&l);

    return 0;
}