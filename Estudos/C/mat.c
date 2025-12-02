#include <stdio.h>

int main()
{
    int numero;

    scanf("%d", &numero);

    while (numero == 1)
    {
        printf("Jogando...\n");
        scanf("%d", &numero);
    }

    return 0;
}