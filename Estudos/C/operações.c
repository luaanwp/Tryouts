#include <stdio.h>
int main()
{
    char caractere;
    float numero, numero2, resultado;
    printf("Digite o caractere para a operacao(+,-,/,*): ");
    scanf("%c", &caractere);
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    switch (caractere)
    {
    case '+':
        printf("Operacoo escolhida: Adicao\n");
        resultado = numero + numero2;
        printf("Resultado: %.2f\n", resultado);
        break;
    case '-':
        printf("Operacao escolhida: Subtracao\n");
        resultado = numero - numero2;
        printf("Resultado: %.2f\n", resultado);
        break;
    case '/':
        printf("Operacao escolhida: Divisao\n");
        if (numero2 == 0)
        {
            printf("Erro! Divisão por zero");
        }  
        else {
            resultado = numero / numero2;
            printf("Resultado: %.2f\n", resultado);
        }
        break;
    case '*':
        printf("Operacao escolhida: Multiplicacao\n");
        resultado = numero * numero2;
        printf("Resultado: %.2f\n", resultado);
        break;
    default:
        printf("Operacao invalida!");
        break;
    }
    return 0;
}