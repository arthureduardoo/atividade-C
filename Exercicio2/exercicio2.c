#include <stdio.h>

int main() {
    float nota;
    float frequencia;

    // Entrada dos dados do estudante
    printf("Digite a nota do estudante: ");
    scanf("%f", &nota);

    printf("Digite a frequência do estudante (em %%): ");
    scanf("%f", &frequencia);

    // Lógica para verificar aprovação
    if (nota >= 7.0 && frequencia >= 75.0) {
        printf("Estudante APROVADO!\n");
    } else {
        printf("Estudante REPROVADO!\n");
    }

    return 0;
}
