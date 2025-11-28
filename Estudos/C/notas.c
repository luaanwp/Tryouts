#include <stdio.h>
int main()
{
    float nota;
    while(1)
    {
    printf("Digite sua nota(1 a 10): ");
    scanf("%f", &nota);
    if (nota >= 1 && nota <=10)
    {
        printf("Nota valida!");
        break;
        } else {
        printf("Nota Invalida! tente de novo.\n");
     }
    }
}