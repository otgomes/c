#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char dado;
    struct Node* proximo;
} Node;

typedef struct Fila {
    Node* inicio;
    Node* fim;
} Fila;

void criarFila(Fila* fila) {
    fila->inicio = fila->fim = NULL;
}

int filaVazia(Fila* fila) {
    return (fila->inicio == NULL);
}

void enfileirar(Fila* fila, char dado) {
    Node* novoNo = (Node*)malloc(sizeof(Node));
    novoNo->dado = dado;
    novoNo->proximo = NULL;

    if (filaVazia(fila)) {
        fila->inicio = novoNo;
    } else {
        fila->fim->proximo = novoNo;
    }
    fila->fim = novoNo;
}

char desenfileirar(Fila* fila) {
    if (filaVazia(fila)) {
        printf("A fila está vazia.\n");
        return '\0';
    }

    Node* temp = fila->inicio;
    char dado = temp->dado;
    fila->inicio = fila->inicio->proximo;

    if (fila->inicio == NULL) {
        fila->fim = NULL;
    }

    free(temp);
    return dado;
}

void imprimirFila(Fila* fila) {
    if (filaVazia(fila)) {
        printf("Fila: (vazia)\n");
        return;
    }

    Node* atual = fila->inicio;
    printf("Fila: ");
    while (atual != NULL) {
        printf("%c", atual->dado);
        atual = atual->proximo;
    }
    printf("\n");
}

typedef struct NoPilha {
    char dado;
    struct NoPilha* proximo;
} NoPilha;

typedef struct Pilha {
    NoPilha* topo;
} Pilha;

void criarPilha(Pilha* pilha) {
    pilha->topo = NULL;
}

int pilhaVazia(Pilha* pilha) {
    return (pilha->topo == NULL);
}

void empilhar(Pilha* pilha, char dado) {
    NoPilha* novoNo = (NoPilha*)malloc(sizeof(NoPilha));
    novoNo->dado = dado;
    novoNo->proximo = pilha->topo;
    pilha->topo = novoNo;
}

char desempilhar(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        printf("A pilha está vazia.\n");
        return '\0';
    }

    NoPilha* temp = pilha->topo;
    char dado = temp->dado;
    pilha->topo = pilha->topo->proximo;

    free(temp);
    return dado;
}

void imprimirPilha(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        printf("Pilha: (vazia)\n");
        return;
    }

    NoPilha* atual = pilha->topo;
    printf("Pilha: ");
    while (atual != NULL) {
        printf("%c", atual->dado);
        atual = atual->proximo;
    }
    printf("\n");
}

int main() {
    Fila fila;
    Pilha pilha;
    char nucleotideo;
    int i;

    criarFila(&fila);
    criarPilha(&pilha);

    char sequencia[100];
    printf("Digite a sequencia de nucleotideos: ");
    scanf("%s", sequencia);

    printf("Sequencia de nucleotideos: %s\n", sequencia);

    for (i = 0; sequencia[i] != '\0'; i++) {
        enfileirar(&fila, sequencia[i]);
    }

    imprimirFila(&fila);
    while (!filaVazia(&fila)) {
        nucleotideo = desenfileirar(&fila);

        switch (nucleotideo) {
            case 'A':
                empilhar(&pilha, 'T');
                break;
            case 'T':
                empilhar(&pilha, 'A');
                break;
            case 'C':
                empilhar(&pilha, 'G');
                break;
            case 'G':
                empilhar(&pilha, 'C');
                break;
            default:
                printf("Nucleotideo invalido: %c\n", nucleotideo);
                break;
        }
    }

    imprimirPilha(&pilha);

    return 0;
}