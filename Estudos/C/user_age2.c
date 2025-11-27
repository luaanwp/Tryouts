#include <stdio.h>
int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    switch (idade)
    {
    case 0:
        printf("Crianca");
        break;
    case 10:
        printf("Adolescente");
        break;
    case 20:
       printf("Jovem");
       break;
    case 30:
        printf("Adulto");
        break;
    case 40:
        printf("Quarentao");
        break;
    case 60:
        printf("Aposentado");
        break;
    default:
     printf("Valor invalido!"); 
    }
}