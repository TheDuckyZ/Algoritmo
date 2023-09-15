#include <stdio.h>

int main() {
    float total = 0, suco_preco = 1.00, coxinha_preco = 4.50, pastel_preco = 4.00, refri_preco = 3.00; // Valor de cada item e total
    int qsuco = 0, qcoxinha = 0, qpastel = 0, qrefri = 0; // Quantidade de cada item
    int item;
    char resposta;

    while (1) {
        printf(" --------------------------------\n");
        printf("| Consulte os valores dos itens: |\n");
        printf(" --------------------------------\n\n");

        printf("-----------------\n");
        printf("1 - Suco\n");
        printf("2 - Coxinha\n");
        printf("3 - Pastel\n");
        printf("4 - Refri\n");
        printf("5 - Mostrar itens e total\n"); // Adicionamos a opção de mostrar itens
        printf("-----------------\n\n");

        printf("\nDigite o número do item que deseja: ");
        scanf("%d", &item);

        switch (item) {
            case 1:
                printf("\n\nItem | Preço\n-------------\nSuco | R$1,00\n\n");
                total += suco_preco;
                qsuco++;
                break;

            case 2:
                printf("\n\nItem | Preço\n-------------\nCoxinha | R$4,50\n\n");
                total += coxinha_preco;
                qcoxinha++;
                break;

            case 3:
                printf("\n\nItem | Preço\n-------------\nPastel | R$4,00\n\n");
                total += pastel_preco;
                qpastel++;
                break;

            case 4:
                printf("\n\nItem | Preço\n-------------\nRefri | R$3,00\n\n");
                total += refri_preco;
                qrefri++;
                break;

            case 5:
                printf("\nItens selecionados: ");
                //Testar se tem algum pedido de cada comida
                if (qsuco > 0){
                    printf("\n%d - Suco", qsuco);
                }
                if (qcoxinha > 0){
                    printf("\n%d - Coxinha", qcoxinha);
                }
                if (qpastel > 0){
                    printf("\n%d - Pastel", qpastel);
                }
                if (qrefri > 0){
                    printf("\n%d - Refri", qrefri);
                }
                //Imprime o valor total a pagar
                printf("\nTotal a pagar: R$%.2f\n\n", total);
                break;

            default:
                printf("\nDesculpe, mas esse item não existe na lista\n\n");
                break;
        }

        // Perguntar se deseja escolher mais
        printf("Deseja mais alguma coisa? (s/n): ");
        scanf(" %c", &resposta);

        // Caso positivo
        if (resposta == 's' || resposta == 'S') {
            continue;
        } // Caso negativo
        else if (resposta == 'n' || resposta == 'N') {
            printf("\nValor total a pagar: R$%.2f.\n", total);
            break;
        } else {
            printf("\nCaractere inválido!\n");
            continue;
        }
    }

    return 0;
}
