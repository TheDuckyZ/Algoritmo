 #include <stdio.h>

 typedef struct pessoa{
    int idade;
    struct pessoa *braco;
 }pessoa;

 int main(){

    pessoa *maria = (pessoa*) malloc(sizeof(pessoa));
    pessoa *julia = (pessoa*) malloc(sizeof(pessoa));
    pessoa *jonas = (pessoa*) malloc(sizeof(pessoa));
    pessoa *manoel = (pessoa*) malloc(sizeof(pessoa));

    maria -> idade = 18;
    julia -> idade = 20;
    jonas -> idade = 22;
    manoel -> idade = 24;

    maria -> braco = julia;
    julia -> braco = jonas;
    jonas -> braco = NULL;

    printf("\t\tIdade dos participantes\n");
    printf("Idade de Maria: %d\n", maria->idade);
    printf("Idade de Julia: %d\n", maria->braco->idade);
    printf("Idade de Jonas: %d\n", maria->braco->braco->idade);

    printf("\n\nAtualizando o sistema\nAguarde...\n\n");

    // Mudar o braço
    manoel -> braco = maria -> braco;
    maria -> braco = manoel;

    printf("\t\tIdade dos participantes\n");
    printf("Idade de Maria: %d\n", maria->idade);
    printf("Idade de Julia: %d\n", maria->braco->braco->idade);
    printf("Idade de Jonas: %d\n", maria->braco->braco->braco->idade);
    printf("Idade de Manoel: %d\n", maria->braco->idade);


 }
