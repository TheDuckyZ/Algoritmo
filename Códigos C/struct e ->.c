#include <stdio.h>

typedef struct pessoa{
    int idade;
    struct pessoa *braco;
}pessoa;

int main(){
    pessoa *gabriel = (pessoa*) malloc(sizeof(pessoa));
    pessoa *pedro = (pessoa*) malloc(sizeof(pessoa));
    pessoa *samuel = (pessoa*) malloc(sizeof(pessoa));
    pessoa *david = (pessoa*) malloc(sizeof(pessoa));
    pessoa *caua = (pessoa*) malloc(sizeof(pessoa));

    gabriel->idade = 18;
    pedro->idade = 18;
    samuel->idade = 17;
    david->idade = 21;  
    caua->idade = 19;


    gabriel->braco = pedro;
    pedro->braco = samuel;
    samuel->braco = david;
    david->braco = caua;
    caua->braco = NULL;

    printf("%d", samuel->braco->idade);

}
