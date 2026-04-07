#include <iostream>
using namespace std;

class Retangulo {
public:
    float largura;
    float altura;

    // Método para calcular a área
    float calcularArea() {
        return largura * altura;
    }
};

int main() {
    //Criando um objeto da classe Retangulo
    Retangulo meuRetangulo;

    //Lendo os valores
    cout << "Digite a largura do retangulo: ";
    cin >> meuRetangulo.largura;

    cout << "Digite a altura do retangulo: ";
    cin >> meuRetangulo.altura;

    //Mostrando o resultado chamando o calcularArea()
    cout << "A area do retangulo e: " << meuRetangulo.calcularArea() << endl;

    return 0;
}