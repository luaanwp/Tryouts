#include <stdio.h>
int main()
{
    int valor;
    printf("Digite um numero de (1 a 12): ");
    scanf("%d", &valor);
    switch (valor)
    {
    case 1:
        printf("Alta temporada!");
        break;
    case 2:
        printf("Alta temporada!");
        break;
    case 3:
        printf("Baixa temporada!");
        break;
    case 4:
        printf("Baixa temporada!");
        break;
    case 5:
        printf("Baixa temporada!");
        break;
    case 6:
        printf("Alta temporada!");
        break;
    case 7:
        printf("Alta temporada!");
        break;
    case 8:
        printf("Baixa temporada!");
        break;
    case 9:
        printf("Baixa temporada!");
        break;
    case 10:
        printf("Baixa temporada!");
        break;
    case 11:
        printf("Baixa temporada!");
        break;
    case 12:
        printf("Alta temporada!");
        break;
    default:
        printf("Valor invalido!");
        break;
    }
}