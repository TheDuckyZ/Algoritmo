#include <stdio.h>

int main() {
    int n;
    int par = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    while(n%2==0) {
            printf("Digite um número: ");
            scanf("%d", &n);
            par++;
    }
    printf("\nQuantidade de números pares digitados: %d", par);
}
