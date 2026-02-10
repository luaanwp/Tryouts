#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unistd.h> // Para a função usleep (fazer o delay)

int main() {
    float A = 0, B = 0; // Ângulos de rotação
    float z[1760];      // zBuffer para profundidade
    char b[1760];       // Buffer de caracteres (tela)

    while(1) {
        memset(b, 32, 1760); // Limpa o buffer com espaços
        memset(z, 0, 7040); // Limpa o zBuffer

        // Aqui entrariam os loops para calcular os pontos do cubo
        // usando as fórmulas de rotação e projeção...

        printf("\x1b[H"); // Comando ANSI para voltar o cursor ao topo da tela
        for(int k=0; k<1761; k++) {
            putchar(k % 80 ? b[k] : 10); // Imprime o buffer
        }
        
        A += 0.04; // Incrementa o ângulo para girar
        B += 0.02;
        usleep(30000); // Pausa para não rodar rápido demais
    }
    return 0;
}