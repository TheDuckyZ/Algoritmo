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
    for (i = 0; i < alunos; i++) {
        for (j = 0; j < qtdAval; j++) {
            printf("\n Aluno %d\nAv.%d = ", i+1, j+1);
            scanf("%f", &nota[i][j]);
        }
    }
    // Pedir, salvar e somas as notas

    // Imprimir as notas digitadas
    for(i = 0; i < alunos; i++){
        for(j = 0; j < qtdAval; j++){
            printf("\n  Aluno %d:", i+1);
            printf("\nAv.%d: %.1f", j+1, nota[i][j]);
            soma += nota[i][j];
        }
    }
    // Mostrar a média das notas
    printf("\n\nA média das notas é %.1f\n", soma/alunos);
}
