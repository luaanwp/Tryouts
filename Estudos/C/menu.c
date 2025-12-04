#include <stdio.h>
int main()
{
    int numero = 0;
    float n1, n2;
    float soma, sub, mult, div;
    while (numero !=5){
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

        printf("Resultado: %.2f\n", soma);
        break;
    case 2:
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        sub = n1 - n2;
        printf("Resultado: %.2f\n", sub);

        break;
    case 3:
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        mult = n1 * n2;

        printf("Resultado: %.2f\n", mult);

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

        printf("Resultado: %.2f\n", div);

        break;

    case 5:
        break;
    default:
        printf("Numero invalido!\n");
    }
  }

    return 0;
}