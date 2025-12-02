#include <stdio.h>

int main()
{
    float moeda;

    printf("Insira o valor da moeda (0 para sair): ");
    scanf("%f", &moeda);

    while (moeda > 0)
    {
        printf(">>> Doce liberado! <<<\n\n");

        printf("Insira outra moeda (0 para sair): ");
        scanf("%f", &moeda);
    }
    printf("Máquina encerrada.\n");

    return 0;
}