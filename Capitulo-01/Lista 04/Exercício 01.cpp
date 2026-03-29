//1. Escreva um programa que leia 10 numeros reais e os armazene em um vetor.
//Em seguida, calcule e exiba a soma de todos os valores positivos.
#include <iostream>
using namespace std;

int main() {
    float numeros[10];
    float soma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Digite um numero: ";
        cin >> numeros[i];
    }
    for (int i = 0; i < 10; i++) {
        if (numeros[i] > 0) {
            soma += numeros[i];
        }
    }
    cout << "Soma dos numeros positivos: " << soma << endl;

    return 0;
}
