#include <iostream>

// Estrutura de dados para representar um nó de uma lista encadeada
struct No {
    int valor;
    No* proximo;
};

// Função para criar um novo nó
No* criarNo(int valor) {
    No* novo = new No;
    novo->valor = valor;
    novo->proximo = nullptr;
    return novo;
}

// Função para imprimir os elementos de uma lista encadeada
void imprimirLista(No* cabeca) {
    No* atual = cabeca;
    while (atual != nullptr) {
        std::cout << atual->valor << " ";
        atual = atual->proximo;
    }
    std::cout << std::endl;
}

int main() {
    
    No* cabeca = criarNo(10);
    cabeca->proximo = criarNo(20);
    cabeca->proximo->proximo = criarNo(30);

    // Imprimindo os elementos da lista
    std::cout << "Lista encadeada: ";
    imprimirLista(cabeca);

    // Modificando o valor do segundo nó usando um ponteiro
    cabeca->proximo->valor = 25;

    // Imprimindo a lista novamente
    std::cout << "Lista modificada: ";
    imprimirLista(cabeca);

    // Liberando a memória alocada
    while (cabeca != nullptr) {
        No* temp = cabeca;
        cabeca = cabeca->proximo;
        delete temp;
    }

    return 0;
}
