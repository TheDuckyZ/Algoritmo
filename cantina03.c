#include <stdio.h>

int main() {
    //Registrar valores itens
    int item;
    float total = 0, suco = 1.00, coxinha = 4.50, pastel = 4.00, refri = 3.00;
    char resposta;

    //Perguntar ao usuário o que vai querer
    while (1) {
        printf(" --------------------------------\n");
        printf("| Consulte os valores dos itens: |");
        printf("\n --------------------------------\n\n");

        printf("-----------------");
        printf("\n1 - Suco\n2 - Coxinha\n3 - Pastel\n4 - Refri\n");
        printf("-----------------");

        printf("\n\nDigite o numero do item que deseja: ");
        scanf("%d", &item);

        switch(item) {
            case 1:
                printf("\n\nItem | Preco\n-------------\nSuco | R$1,00\n\n");
                total += suco;
                break;

            case 2:
                printf("\n\nItem | Preco\n-------------\nCoxinha | R$4,50\n\n");
                total += coxinha;
                break;

            case 3:
                printf("\n\nItem | Preco\n-------------\nPastel | R$4,00\n\n");
                total += pastel;
                break;

            case 4:
                printf("\n\nItem | Preco\n-------------\nRefri | R$3,00\n\n");
                total += refri;
                break;

            default:
                printf("\nDesculpe, mas esse item nao exite na lista\n\n");
                break;

        } // Fim do Switch

        //Perguntar se vai escolher mais
        printf("Deseja mais alguma coisa? (s/n): ");
        scanf("%s", &resposta);

        //Caso positivo
        if (resposta == 's' || resposta == 'S') {
            continue;
        } // Caso negativo
        else if (resposta == 'n' || resposta == 'N') {
            printf("\nValor total a pagar: %.2f.\n", total);
            break;
        } else {
            printf("\nCaractere invalido!\n");
            continue;
        }

    } // Fim do While

    return 0;
}
