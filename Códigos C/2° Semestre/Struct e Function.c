#include <stdio.h>

typedef struct Elemento {
    float altura;
    int idade;
    struct Elemento *prox;
}Elemento;

typedef struct topo {
    struct Elemento *topo;
    int quantidade;
}topo;

void empilhar(topo *m, float alt, int ida){
    Elemento *novo = (Elemento*) malloc(sizeof(Elemento));
    novo -> altura = alt;
    novo -> idade = ida;

    novo -> prox = m->topo;
    m->topo = novo;
}

void imprimir(Elemento *e){
    if(e!=NULL){
        while(e){
            printf("Idade: %i\nAltura: %.2f\n\n", e->idade, e->altura);
            e = e->prox;
        }
    } else {
        printf("Não foi");
    }
}

int main(){
    topo m;
    m.topo = NULL;

    empilhar(&m, 1.70, 30); //Topo, altura, idade
    empilhar(&m, 1.71, 31);
    empilhar(&m, 1.72, 32);
    empilhar(&m, 1.73, 33);
    empilhar(&m, 1.74, 34);
    empilhar(&m, 1.75, 35);

    imprimir(m.topo);
}
