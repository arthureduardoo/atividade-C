#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    // Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    // Cálculo da média
    media = (n1 + n2 + n3) / 3;

    // Condicional para verificar situação
    if (media >= 7.0) {
        printf("Aluno APROVADO com média: %.2f\n", media);
    } else if (media >= 5.0) {
        printf("Aluno em RECUPERAÇÃO com média: %.2f\n", media);
    } else {
        printf("Aluno REPROVADO com média: %.2f\n", media);
    }

    return 0;
}
