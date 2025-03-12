#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura Aluno
typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main() {
    // Aloca memória dinamicamente para um aluno
    aluno_t *aluno = (aluno_t *)malloc(sizeof(aluno_t));
    
    if (aluno == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; // Encerra o programa em caso de erro
    }

    // Insere os dados do aluno
    printf("Digite o nome do aluno: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);
    aluno->nome[strcspn(aluno->nome, "\n")] = '\0'; // Remove o '\n' do final

    printf("Digite o número de faltas: ");
    scanf("%d", &aluno->faltas);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno->nota);

    // Verifica se o aluno foi aprovado
    printf("\n--- Resultado ---\n");
    printf("Nome: %s\n", aluno->nome);
    printf("Faltas: %d\n", aluno->faltas);
    printf("Nota: %.2f\n", aluno->nota);

    if (aluno->faltas <= 10 && aluno->nota >= 6.0) {
        printf("Status: Aprovado\n");
    } else {
        printf("Status: Reprovado\n");
    }

    // Libera a memória alocada
    free(aluno);

    return 0;
}
