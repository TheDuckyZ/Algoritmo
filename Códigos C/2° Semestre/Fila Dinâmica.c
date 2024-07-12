#include <stdio.h>
#include <stdlib.h>

typedef struct Elemento {
    int valor;
    struct Elemento *prox;
}Elemento;

typedef struct {
    struct Elemento *inicio;
    struct Elemento *fim;
}Fila;

void passar_elementos(int *n1, int *n2, int *n3){
    printf("Digite um número: ");
    scanf("%d", n1);

    printf("Digite um número: ");
    scanf("%d", n2);

    printf("Digite um número: ");
    scanf("%d", n3);
}

void inserir_elemento(Fila *fi, int val){
    Elemento *novo = malloc(sizeof(Elemento));
    novo->valor = val;
    novo->prox = NULL;

    if(fi->inicio == NULL){
        fi->inicio = novo; /*Se não existir nenhum número no inicio, o "novo" será o primeiro*/
    }else{
        fi->fim->prox = novo; /*Mas caso exista, ele vai ser o proximo do último número (o final)*/
    }

    fi->fim = novo; /*Define o "novo" como o fim da fila*/
}

void remover_elemento(Fila *fi){
    Elemento *e;
    if(fi->inicio){
        e = fi->inicio;
        fi->inicio = fi->inicio->prox;
        free(e);
    }else{
        printf("A fila está vazia!\n");
    }
}

void imprimir_elementos(Elemento *e){
    printf("\n=== IMPRIMINDO ===\n");

    if(e){
        while (e){
            printf("\nElemento: %d", e->valor);
            e = e->prox;
        }
        printf("\n\nFila impressa!\n");
    }else{
        printf("\nA fila está vazia!\n");
    }
}

int main(){
    Fila f1;
    f1.inicio = NULL;
    f1.fim = NULL;

    int n1, n2, n3;

    passar_elementos(&n1, &n2, &n3);
    
    /*Dá pra botar isso na função depois*/
    inserir_elemento(&f1, n1);
    inserir_elemento(&f1, n2);
    inserir_elemento(&f1, n3);

    imprimir_elementos(f1.inicio);

    remover_elemento(&f1);

    imprimir_elementos(f1.inicio);

}
