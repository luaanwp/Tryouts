#include <stdio.h>
int main()
{
    int numero;
    float n1;
    float n2;
    float soma;
    float sub;
    float mult;
    float div;

    printf("1 - Somar dois numeros\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("5 - Sair\n");

    printf("Digite o numero referente a operacao: ");
    scanf("%d", &numero);
    switch (numero)
    {
    case 1:
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        soma = n1 + n2;

        printf("Resultado: %.2f", soma);
        break;
    case 2:
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        sub = n1 - n2;
        printf("Resultado: %.2f", sub);

        break;
    case 3:
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        mult = n1 * n2;

        printf("Resultado: %.2f", mult);

        break;
    case 4:
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
            
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        if (n1 == 0)
        {
            printf("Nao e possivel dividir por zero!");
            break;
        }

        div = n1 / n2;

        printf("Resultado: %.2f", div);

        break;

    case 5:
        break;
    default:
        printf("Numero invalido!");
    }
    return 0;
}