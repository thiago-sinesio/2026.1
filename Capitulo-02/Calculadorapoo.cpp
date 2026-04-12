#include <iostream>
#include <stdexcept>


class Calculadora {
private:
    //Atributos
    double resultado;   // armazena o valor acumulado
    int    operacoes;   // conta quantas operações foram feitas

public:
    //Construtor
    Calculadora() {
        resultado  = 0.0;
        operacoes  = 0;
    }

    //Métodos de operação
    double somar(double a, double b) {
        resultado = a + b;
        operacoes++;
        return resultado;
    }

    double subtrair(double a, double b) {
        resultado = a - b;
        operacoes++;
        return resultado;
    }

    double multiplicar(double a, double b) {
        resultado = a * b;
        operacoes++;
        return resultado;
    }

    double dividir(double a, double b) {
        if (b == 0) {
            throw std::invalid_argument("Erro: divisao por zero!");
        }
        resultado = a / b;
        operacoes++;
        return resultado;
    }

    //Getters
    double getResultado() const { return resultado; }
    int    getOperacoes()  const { return operacoes; }
};

//Programa principal

int main() {
    // Cria um objeto da classe Calculadora
    Calculadora calc;

    int opcao;
    double a, b;

    do {
        std::cout << "\n===== Calculadora =====\n";
        std::cout << "1- Somar\n"
                     "2- Subtrair\n"
                     "3- Multiplicar\n"
                     "4- Dividir\n"
                     "0- Sair\n"
                     "Opcao: ";
        std::cin >> opcao;

        if (opcao >= 1 && opcao <= 4) {
            std::cout << "Primeiro numero : ";
            std::cin >> a;
            std::cout << "Segundo numero  : ";
            std::cin >> b;
        }

        try {
            switch (opcao) {
                case 1:
                    std::cout << "Resultado: " << calc.somar(a, b) << "\n";
                    break;
                case 2:
                    std::cout << "Resultado: " << calc.subtrair(a, b) << "\n";
                    break;
                case 3:
                    std::cout << "Resultado: " << calc.multiplicar(a, b) << "\n";
                    break;
                case 4:
                    std::cout << "Resultado: " << calc.dividir(a, b) << "\n";
                    break;
                case 0:
                    std::cout << "Saindo...\n";
                    break;
                default:
                    std::cout << "Opcao invalida!\n";
            }
        } catch (const std::invalid_argument& e) {
            std::cout << e.what() << "\n";
        }

    } while (opcao != 0);

    return 0;
}