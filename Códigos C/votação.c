#include <stdio.h>
#include <unistd.h>

int main() {
    int caua = 0, samuel = 0, matheus = 0, pedro = 0, joao = 0, gabriel = 0, david = 0; // Quantidade de cada item
    int votacao, voto;
    int resposta;

    printf("1 - Continuar a votação\n2 - Encerrar a votação\n\n");
    printf("O que deseja fazer? ");
    scanf("%d", &votacao);

    while (votacao == 1) {
        printf("\n----------- VOTAÇÃO -----------\n");
        printf("    NÚMERO         CANDIDATO");
        printf("\n      1               Cauã\n      2              Samuel\n      3              Matheus\n      4               Pedro\n      5               João\n      6              Gabriel\n      7               David\n");
        printf("---------------------------\n\n");
        sleep(1);
        printf("\nDigite o número do item que deseja: ");
        scanf("%d", &voto);

        switch (voto) {

            case 1:
                printf("\nCanditado votado: Cauã\nVoto registrado com sucesso!\n");
                caua++;
                break;

            case 2:
                printf("\nCanditado votado: Samuel\nVoto registrado com sucesso!\n");
                samuel++;
                break;

            case 3:
                printf("\nCanditado votado: Matheus\nVoto registrado com sucesso!\n");
                matheus++;
                break;

            case 4:
                printf("\nCanditado votado: Pedro\nVoto registrado com sucesso!\n");
                pedro++;
                break;

            case 5:
                printf("\nCanditado votado: João\nVoto registrado com sucesso!\n");
                joao++;
                break;

            case 6:
                printf("\nCanditado votado: Gabriel\nVoto registrado com sucesso!\n");
                gabriel++;
                break;

            case 7:
                printf("\nCanditado votado: David\nVoto registrado com sucesso!\n");
                david++;
                break;

            default:
                printf("\nDesculpe, mas esse candidato não existe na lista\n\n");
                break;
        } // Fim do Switch

        // Perguntar se deseja escolher mais
        sleep(1);
        printf("\nDeseja mais alguma coisa?\n1 - Sim ou 2 - Não: ");
        scanf("%d", &resposta);

        // Caso 1 (voltar para o menu principal)
        if (resposta == 1) {
            continue;
        } // Caso 2 (encerrar o código)
        else if (resposta == 2) {
            break;
        } // Caractere inválido (retornar a pergunta)
        else {
            printf("\nCaractere inválido!\n");
            continue;
        }
    } // Fim do While

    printf("\n---------- VOTOS ----------\n");
    printf("  CANDIDATOS      VOTOS");
    printf("\n    Cauã            %d\n    Samuel          %d\n    Matheus         %d\n    Pedro           %d\n    Joao            %d\n    Gabriel         %d\n    David           %d\n", caua, samuel, matheus, pedro, joao, gabriel, david);

    return 0;
}
