#include <stdio.h>

int main() {
    int quantidade_estrelas;
    int i;

    printf("Quantas estrelas maria viu? Digite: ");
    scanf("%d", &quantidade_estrelas);

    for (i = 1; i <= quantidade_estrelas; i++) {
        printf("Estrela %d brilhando!\n", i);
    }

    printf("\nContagem concluída!\n");

    return 0;
}