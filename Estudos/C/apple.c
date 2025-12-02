#include <stdio.h>

int main()
{
    int quantidade;

    printf("Quantidade de Andares: ");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++)
    {
        printf("Luz do andar %d acesa\n", i);
    }

    return 0;
}
