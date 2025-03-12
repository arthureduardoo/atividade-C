#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4, e = 5;

    printf("a * b / c = %.3f\n", (float)a * b / c);
    printf("a * b %% c + 1 = %d\n", a * b % c + 1);
    printf("++a * b - c-- = %d\n", ++a * b - c--);
    printf("7  - - b * ++d = %d\n", 7 - b * ++d);
    printf("a / b / c = %.3f\n", (float)a / b / c);
    printf("7 + c * --d / e = %.3f\n", 7 + c * --d / (float)e);
    printf("2 * a %% -b + c + 1 = %d\n", 2 * a % -b + c + 1);
    printf("39 / -++e - +29 %% c = %.3f\n", 39.0 / -++e - +29 % c);
    printf("7 - +  ++a %% (3 + b) = %d\n", 7 - ++a % (3 + b));

    return 0;
}




/*
 * Questão 1 - Análise Teórica
 * Após compilar e executar o código, obtivemos os seguintes resultados:
 *
 * 1. a * b / c = 0.667
 * - Multiplicamos `a` (1) por `b` (2) e dividimos por `c` (3).
 * - O resultado é um número decimal (número com ponto) porque usamos `(float)` na operação.
 *
 * 2. a * b % c + 1 = 3
 * - Multiplicamos `a` (1) por `b` (2), tiramos o resto da divisão por `c` (3) e somamos 1.
 *
 * 3. ++a * b - c-- = 1
 * - Aumentamos o valor de `a` para 2, multiplicamos por `b` (2) e diminuímos o valor de `c` (3), que depois foi reduzido para 2.
 *
 * 4. 7 - b * ++d = -3
 * - Aumentamos o valor de `d` para 5, multiplicamos `b` (2) por `d` (5) e subtraímos o resultado de 7.
 *
 * 5. a / b / c = 0.500
 * - Dividimos `a` (2) por `b` (2) e depois dividimos por `c` (3). Usamos `(float)` para garantir um número decimal.
 *
 * 6. 7 + c * --d / e = 8.600
 * - Diminuímos o valor de `d` para 4, multiplicamos `c` (3) por `d` (4), dividimos por `e` (5) e somamos 7.
 *
 * 7. 2 * a % -b + c + 1 = 3
 * - Multiplicamos `a` (2) por 2, tiramos o resto da divisão por `-b` (2), somamos `c` (3) e mais 1.
 *
 * 8. 39 / -++e - +29 % c = -7.500
 * - Aumentamos o valor de `e` para 6, dividimos 39 por `-6`, tiramos o resto de `29 % c` (3) e subtraímos.
 *
 * 9. 7 - ++a % (3 + b) = 4
 * - Aumentamos o valor de `a` para 3, tiramos o resto da divisão por `(3 + b)` (5) e subtraímos de 7.
 *
 */
