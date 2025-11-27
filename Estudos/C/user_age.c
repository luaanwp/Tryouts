#include <stdio.h>
int main() 
{
    char resposta;
    printf("Voce e maior de idade?(responda com S ou N): ");
    scanf("%c", &resposta);
    
    switch (resposta)
    {
    case 'S':
       printf("Voce tem 18 anos ou mais.\n");
       break;
    case 'N':
       printf("Voce tem menos que 18 anos.\n");
       break;
    default:
     printf("Caracter invalido!");
    }
}