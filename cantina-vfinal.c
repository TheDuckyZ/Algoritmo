#include <stdio.h>
#include <unistd.h>

int main() {
    float total = 0, suco_preco = 1.00, coxinha_preco = 4.50, pastel_preco = 4.00, refri_preco = 3.00; // Valor de cada item e total
    int qsuco = 0, qcoxinha = 0, qpastel = 0, qrefri = 0; // Quantidade de cada item
    int item;
    int resposta;

    while (1) {
        printf(" --------------------------------\n");
        printf("| Consulte os valores dos itens: |\n");
        printf(" --------------------------------\n\n");
        printf("---------------------------");
        printf("\n1 - Suco\n2 - Coxinha\n3 - Pastel\n4 - Refri\n5 - Mostrar carrinho\n6 - Remover item\n");
        printf("---------------------------\n\n");
        sleep(1);
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
                if (total > 0) {
                    printf("\n------------- Itens Selecionados -------------\n\n");
                    // Testar se tem algum pedido de cada comida
                    printf("QUANTIDADE     PREÇO     TOTAL");
                    if (qsuco > 0){
                        printf("\n     %d         R$%.2f    R$%.2f", qsuco, suco_preco, qsuco * suco_preco);
                    }
                    if (qcoxinha > 0){
                        printf("\n     %d         R$%.2f    R$%.2f", qcoxinha, coxinha_preco, qcoxinha * coxinha_preco);
                    }
                    if (qpastel > 0){
                        printf("\n     %d         R$%.2f    R$%.2f", qpastel, pastel_preco, qpastel * pastel_preco);
                    }
                    if (qrefri > 0){
                        printf("\n     %d         R$%.2f    R$%.2f", qrefri, refri_preco, qrefri * refri_preco);
                    }
                    printf("\n\n---------------------------------------------\n");
                    printf("     %d                   R$%.2f\n", qsuco + qcoxinha + qpastel + qrefri, total); // Imprime a quantidade geral de itens e o valor total a pagar
                    sleep(1);
                } else {
                    printf("\nSeu carrinho está vazio! Volte para adicionar algum item.\n");
                    sleep(1);
                }
                break;

            case 6:
                // Remover itens
                if (total > 0) {
                    printf("\n\nO que deseja remover?\n");
                    printf("\n1 - Remover Suco\n2 - Remover Coxinha\n3 - Remover Pastel\n4 - Remover Refri\n5 - Retornar\n");
                    printf("\nDigite o número do item que deseja remover: ");
                    scanf("%d", &item);

                    switch (item) {
                        case 1:
                            if (qsuco > 0) {
                                qsuco--;
                                total -= suco_preco;
                                printf("\nSuco removido do carrinho.\n");
                            } else {
                                printf("\nNão há suco no carrinho para remover.\n");
                            }
                            break;

                        case 2:
                            if (qcoxinha > 0) {
                                qcoxinha--;
                                total -= coxinha_preco;
                                printf("\nCoxinha removida do carrinho.\n");
                            } else {
                                printf("\nNão há coxinha no carrinho para remover.\n");
                            }
                            break;

                        case 3:
                            if (qpastel > 0) {
                                qpastel--;
                                total -= pastel_preco;
                                printf("\nPastel removido do carrinho.\n");
                            } else {
                                printf("\nNão há pastel no carrinho para remover.\n");
                            }
                            break;

                        case 4:
                            if (qrefri > 0) {
                                qrefri--;
                                total -= refri_preco;
                                printf("\nRefri removido do carrinho.\n");
                            } else {
                                printf("\nNão há refri no carrinho para remover.\n");
                            }
                            break;

                        case 5:
                            break;

                        default:
                            printf("\nOpção inválida.\n");
                            break;
                    } 
                    }else {
                        printf("\nNão há nenhum item no carrinho para ser removido!\n");
                        break;
                    }
                break;

            default:
                printf("\nDesculpe, mas esse item não existe na lista\n\n");
                sleep(1);
                break;
        }

        // Perguntar se deseja escolher mais
        sleep(1);
        printf("\nDeseja mais alguma coisa?\n1 - Sim ou 2 - Não: ");
        scanf("%d", &resposta);

        // Caso 1 (voltar para o menu principal)
        if (resposta == 1) {
            continue;
        } // Caso 2 (encerrar o código)
        else if (resposta == 2) {
            printf("\nValor total a pagar: R$%.2f.\nAgradecemos a preferência, volte sempre!\n", total);
            break;
        } // Caractere inválido (retornar a pergunta)
        else {
            printf("\nCaractere inválido!\n");
            continue;
        }
    }

    return 0;
}
