#include <stdio.h>

int main() {
    float nota[5][5], soma;
    int i, j, alunos, qtdAval;

    // Definir a quantidade de notas
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);

    // Definir a quantidade de avaliações
    printf("Digite a quantidade de avaliações: ");
    scanf("%d", &qtdAval);

    // Range de alunos e avaliações
    for (i = 0; i < alunos; i++) {
        printf("\n Aluno %d\n", i+1);

        for (j = 0; j < qtdAval; j++) {
            printf("Av.%d = ", j+1);
            scanf("%f", &nota[i][j]);
        }
    }

    // Imprimir as notas digitadas
    for(i = 0; i < alunos; i++){
        printf("\n  Aluno %d:", i+1);

        for(j = 0; j < qtdAval; j++){
            printf("\nAv.%d: %.1f", j+1, nota[i][j]);
            soma += nota[0][j];
        }
    }
    printf("\n\n------- Médias -----\n");

    // Calcular as médias
    for (i = 0; i < alunos; i++){
        soma = 0;

        for (j = 0; j < qtdAval; j++){
            soma += nota[i][j];
        }
        // Mostrar a média das notas
        printf("\nAluno %d\nMédia: %.1f\n", i+1,soma/qtdAval);
    }
}
