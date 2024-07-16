#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// Função para verificar se um número é um quadrado perfeito
bool isPerfectSquare(int num) {
    int root = sqrt(num);
    return root * root == num;
}

int maxBalls(int N) {
    vector<int> rods(N, 0); // Inicializa as hastes com 0
    int ball = 1; // Começa com a bola 1

    while (true) {
        bool placed = false;
        for (int i = 0; i < N; ++i) {
            if (rods[i] == 0 || isPerfectSquare(rods[i] + ball)) {
                rods[i] = ball;
                placed = true;
                break;
            }
        }
        if (!placed) break; // Se não conseguiu colocar a bola, termina o jogo
        ++ball; // Próxima bola
    }

    return ball - 1; // Retorna o número máximo de bolas colocadas
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        cout << maxBalls(N) << endl;
    }
    return 0;
}
