#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura Aluno
typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno *prox; // Ponteiro para o próximo aluno
} aluno_t;

// Função para criar um novo aluno
aluno_t* criar_aluno(const char* nome, int faltas, float nota) {
    aluno_t* novo = (aluno_t*)malloc(sizeof(aluno_t));
    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1); // Encerra o programa em caso de erro
    }
    strcpy(novo->nome, nome);
    novo->faltas = faltas;
    novo->nota = nota;
    novo->prox = NULL; // Inicializa o ponteiro para NULL
    return novo;
}

// Função para adicionar um aluno na lista
void adicionar_aluno(aluno_t** raiz, const char* nome, int faltas, float nota) {
    aluno_t* novo = criar_aluno(nome, faltas, nota);
    if (*raiz == NULL) {
        *raiz = novo; // Define o primeiro aluno na lista
    } else {
        aluno_t* temp = *raiz;
        while (temp->prox != NULL) {
            temp = temp->prox; // Encontra o último aluno
        }
        temp->prox = novo; // Adiciona o novo aluno no final
    }
}

// Função para exibir a lista de alunos
void exibir_alunos(aluno_t* raiz) {
    aluno_t* temp = raiz;
    printf("\n--- Lista de Alunos ---\n");
    while (temp != NULL) {
        printf("Nome: %s\n", temp->nome);
        printf("Faltas: %d\n", temp->faltas);
        printf("Nota: %.2f\n", temp->nota);
        if (temp->faltas <= 10 && temp->nota >= 6.0) {
            printf("Status: Aprovado\n");
        } else {
            printf("Status: Reprovado\n");
        }
        printf("\n");
        temp = temp->prox; // Avança para o próximo aluno
    }
}

// Função principal
int main() {
    aluno_t* aluno_root = NULL; // Inicializa a raiz da lista como NULL

    // Adiciona alguns alunos na lista
    adicionar_aluno(&aluno_root, "Bruno Ryan", 3, 10.0);
    adicionar_aluno(&aluno_root, "Ana Luiza", 12, 4);
    adicionar_aluno(&aluno_root, "Breno Wesley", 8, 7.5);

    // Exibe os alunos
    exibir_alunos(aluno_root);

    // Libera a memória alocada
    aluno_t* temp;
    while (aluno_root != NULL) {
        temp = aluno_root;
        aluno_root = aluno_root->prox;
        free(temp);
    }

    return 0;
}
