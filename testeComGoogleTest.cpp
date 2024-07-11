#include <iostream>
#include <gtest/gtest.h>

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

int MinhaFuncao(int x){
    valores.soma(valor);
    x = valores.getValor();
    return x;
}

TEST(MinhaFuncaoTeste, TesteBasico) {
    // Teste básico
    EXPECT_EQ(MinhaFuncao(2), 42); // Verifica se MinhaFuncao(2) retorna 42
    EXPECT_EQ(MinhaFuncao(3), 42); // Verifica se MinhaFuncao(3) retorna 42

    // Mais casos de teste...
}

int main(int argc, char** argv) {

    std::cout << "Iniciando teste!" << std::endl;
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}