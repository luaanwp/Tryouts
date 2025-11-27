#include <stdio.h>
int main()
{
    int num1;
    int soma = 0;
    
    printf("Digite um numero(numero negativo para parar!):\n ");
    while(1)
    {
        printf("Digite um numero: ");
        scanf("%d", &num1);
        if (num1 < 0) {
            break;
        }
        soma += num1;
    }
    printf("Soma dos numeros digitados:%d\n", soma);
    return 0; 
 
}