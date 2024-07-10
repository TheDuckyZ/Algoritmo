#include <stdio.h>
#include <stdlib.h>

typedef struct Elemento{
	int valor;
	struct Elemento *prox;
}Elemento;


typedef struct{
    struct Elemento *inicio;
    struct Elemento *fim;
}Fila;

void insere_elemento(Fila *fi, int val){
    Elemento *novo = malloc(sizeof(Elemento));
    novo->valor = val;
    novo->prox = NULL;
    if(fi->inicio == NULL){
        fi->inicio = novo;
    }else{
        fi->fim->prox = novo;
    }

    fi->fim = novo;
}

void remove_elemento(Fila *fi, Elemento *e){
    if(fi->inicio){
        printf("\nRemovendo...\n");
        e = fi->inicio;
        fi->inicio = fi->inicio->prox;
        free(e);
    }else{
        printf("Fila vazia");
    }
}

void esvazia_fila(Fila *fi){
    while(fi->inicio){
        remove_elemento(fi, fi->inicio);
    }
}

void imprime_fila(Elemento *e){
    if(e){
        printf("\nElemento: %d\n", e->valor);
        imprime_fila(e->prox);
    }
}

void remover_negativo(Fila *fi, Fila *fi2){
    printf("\nRemovendo Negativos...\n");

    while(fi->inicio){
        if(fi->inicio->valor < 0){
            remove_elemento(fi, fi);
        }else{
            insere_elemento(fi2, fi->inicio->valor);
            fi->inicio = fi->inicio->prox;
        }
    }

}

int main(){
    Fila fi;
    fi.inicio = NULL;
    fi.fim = NULL;

    Fila fi2;
    fi2.inicio = NULL;
    fi2.fim = NULL;

    insere_elemento(&fi, 10);
    insere_elemento(&fi, -20);
    insere_elemento(&fi, -30);
    insere_elemento(&fi, 40);


    imprime_fila(fi.inicio);

    //remove_elemento(&fi, fi.inicio);
    //imprime_fila(fi.inicio);
    remover_negativo(&fi, &fi2);

    printf("\n==== PILHA 2 ====\N");
    imprime_fila(fi2.inicio);
}
