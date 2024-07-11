#include <iostream>
#include <string>
#include <vector>

// Função para contar a quantidade de diamantes em uma string
int contarDiamantes(const std::string& entrada) {
    std::vector<char> pilha;
    int diamantes = 0;

    for (char c : entrada) {
        if (c == '<') {
            pilha.push_back(c);
        } else if (c == '>' && !pilha.empty()) {
            pilha.pop_back();
            diamantes++;
        }
    }

    return diamantes;
}

int main() {
    int numCasos;
    std::cin >> numCasos;
    std::cin.ignore(); // Ignora a quebra de linha após o número de casos

    for (int i = 0; i < numCasos; ++i) {
        std::string caso;
        std::getline(std::cin, caso);
        int resultado = contarDiamantes(caso);
        std::cout << resultado << std::endl;
    }

    return 0;
}
