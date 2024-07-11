#include <iostream>


class Valores {

public:
    void soma(int valor) {
        Valores::valor +=valor;
        this->valor += 6;
    }
    int getValor() const {
        return valor;
    }

private:
    int valor = 34;

    
};


int main() {
    int valor = 0;
    Valores valores;
    std::cout << "Hello world!" << std::endl;
    std::cout << "insira um valor";
    std::cin >> valor;
    valores.soma(valor);
    std::cout << std::endl<< "resultado " << valores.getValor() << std::endl;
    return 0;
}