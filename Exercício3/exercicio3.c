#include <stdio.h>
 
int main(){
    int a = 5;
    int b = 11;
    float c;

    scanf("%d %d", &a, &b);

    if(a > b || !(a > 0)) {
        c = (float) (b / a);
    } else {
        c = (float) (a / b);
    }
    printf("%.2f\n", c);
    return 0;
}

/*
 * Este programa lê dois números (a e b) e calcula c com base em condições:
 * - Se a for maior que b ou menor/igual a 0, calcula c = b / a.
 * - Caso contrário, calcula c = a / b.
 *
 * Observação:
 * - Divisão entre números inteiros em C ignora os decimais. Exemplo:
 *   4 / 20 resulta em 0 (e não 0.2), por isso a saída pode ser 0.00.
 * - Para preservar os decimais, é necessário converter um dos números para float.
 */