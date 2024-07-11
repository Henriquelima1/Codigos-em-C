#include <iostream>
#include <iomanip>
#include <map>

int main() {
    int N;
    std::cin >> N; // Número de casos de teste

    for (int i = 0; i < N; ++i) {
        int M;
        std::cin >> M; // Quantidade de produtos disponíveis

        std::map<std::string, double> precos; // Mapa para armazenar os preços dos produtos

        // Leitura dos produtos e seus preços
        for (int j = 0; j < M; ++j) {
            std::string nome;
            double preco;
            std::cin >> nome >> preco;
            precos[nome] = preco;
        }

        int P;
        std::cin >> P; // Quantidade de produtos desejados

        double total = 0.0; // Valor total gasto

        // Leitura dos produtos desejados e cálculo do valor
        for (int j = 0; j < P; ++j) {
            std::string nome;
            int quantidade;
            std::cin >> nome >> quantidade;
            total += precos[nome] * quantidade;
        }

        // Imprime o valor formatado com 2 casas decimais
        std::cout << "R$ " << std::fixed << std::setprecision(2) << total << std::endl;
    }

    return 0;
}
