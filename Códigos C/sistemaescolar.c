#include <stdio.h>

int main() {
    float nota[3][4], soma;
    int i, j, alunos, qtdAval;

    // Definir a quantidade de notas
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);

    // Definir a quantidade de avaliações
    printf("Digite a quantidade de avaliações: ");
    scanf("%d", &qtdAval);

    // Range de alunos e avaliações
    for (i = 1; i < alunos; i++) {
        for (j = 1; j < qtdAval; j++) {
            printf("\n\n Aluno %d\nAv.%d = ", i, j);
            scanf("%f", &nota[i][j]);
        }
    }
    // Pedir, salvar e somas as notas

    // Imprimir as notas digitadas
    for(i = 1; i < alunos; i++){
        for(j = 1; j < qtdAval; j++){
            printf("\n  Aluno %d:", i);
            printf("\nAv.%d: %.1f", j, nota[i][j]);
        }
    }
    // Mostrar a média das notas
    printf("\n\nA média das notas é %.1f\n", soma/alunos);
}
