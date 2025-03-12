#include <stdio.h>

int main() {
    int y = 5;
    int z = 11;
    int w;

    w = y + z;
    if (y > z) {
        w = y * z;
    }

    printf("%d", w);
    return 0;
}


/*
 * O programa calcula w como a soma de y e z:
 * w = 5 + 11 = 16.
 * 
 * A condição do if (y > z) é falsa porque 5 não é maior que 11.
 * Assim, w continua 16.
 * 
 * Saída: 16
 */
