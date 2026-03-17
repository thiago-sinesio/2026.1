//9. Desenvolva um programa que receba três números inteiros e informe se eles
//formam um triângulo válido segundo a regra: a soma de dois lados sempre deve ser maior que o terceiro.

#include <iostream>
using namespace std;

int main() {
    int lado1, lado2, lado3;
    
    cout<<"Digite o primeiro valor: ";
    cin>>lado1;
    cout<<"Digite o segundo valor: ";
    cin>>lado2;
    cout<<"Digite o terceiro valor: ";
    cin>>lado3;
    
    //soma de dois lados tem que ser maior que o ultimo
    if ((lado1 + lado2) > lado3 && (lado2 + lado3) > lado1 && (lado1 + lado3) > lado2){
        cout<<"Triangulo válido.";
    } else {
        cout<<"Não é válido.";
    }
    return 0;
}
