#include <stdio.h>

int main() {
    int i;

    i = 0;

    // while verifica primeiro, depois executa
    while (i < 10) {
        printf("while: %d\n", i);
        i++;
    }

    // do-while executa primeiro, depois verifica
    do {
        printf("do: %d\n", i);
        i++;
    } while (i < 10);

    return 0;
}

/*
 * Saída do Programa:
 * 
 * 1. O bloco `while` executa enquanto a condição (i < 10) for verdadeira.
 *    - Exibe os valores de i de 0 a 9.
 *
 * 2. O bloco `do-while` executa pelo menos uma vez, porque primeiro executa o bloco e depois verifica a condição.
 *    - Exibe o valor de i uma vez como 10, pois a condição (i < 10) já é falsa após a primeira execução.
 *
 * Saída Completa:
 * while: 0
 * while: 1
 * while: 2
 * while: 3
 * while: 4
 * while: 5
 * while: 6
 * while: 7
 * while: 8
 * while: 9
 * do: 10
 */
