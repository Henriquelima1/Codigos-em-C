#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N; // Leia o número de valores de entrada

    std::vector<int> even_numbers; // Vetor para armazenar os números pares
    std::vector<int> odd_numbers;  // Vetor para armazenar os números ímpares

    for (int i = 0; i < N; ++i) {
        int num;
        std::cin >> num; // Leia cada valor de entrada

        if (num % 2 == 0) {
            even_numbers.push_back(num); // Adicione números pares ao vetor even_numbers
        } else {
            odd_numbers.push_back(num); // Adicione números ímpares ao vetor odd_numbers
        }
    }

    // Ordene even_numbers em ordem crescente
    std::sort(even_numbers.begin(), even_numbers.end());

    // Ordene odd_numbers em ordem decrescente
    std::sort(odd_numbers.begin(), odd_numbers.end(), std::greater<int>());

    // Imprima even_numbers
    for (const auto& num : even_numbers) {
        std::cout << num << std::endl;
    }

    // Imprima odd_numbers
    for (const auto& num : odd_numbers) {
        std::cout << num << std::endl;
    }

    return 0;
}
