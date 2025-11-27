#include <stdio.h>

int main()
{
    char nome[50];
    float valor;
    float aumento = 0;
    float valor_2 = 0;

    while (1)
    {
        printf("Digite o nome do produto: ");
        fgets(nome, 50, stdin);

        printf("Digite o valor do produto: ");
        scanf("%f", &valor);
        getchar();

        printf("\n--- Informacoes do produto ---\n");
        printf("Nome: %s", nome);
        printf("Valor: R$ %.2f\n", valor);

        printf("Digite um valor para acrescimo(digite numero negativo para encerrar): ");
        scanf("%f", &valor_2);
        getchar(); 

        if (valor_2 < 0)
        {
            break;
        }

        aumento = valor_2 * 0.1;
        valor_2 = valor_2 + aumento;

        printf("Valor com acrescimo: %.2f\n\n", valor_2);
    }

    return 0;
}
