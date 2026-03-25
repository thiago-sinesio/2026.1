//10. Crie um programa que leia 10 números inteiros e conte quantos deles são positivos, utilizando for-each.

#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int positivos = 0;

    cout << "Digite 10 numeros inteiros:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }
    
    for (int n : numeros) {
        if (n > 0) {
            positivos++;
        }
    }
    cout << "Quantidade de numeros positivos: " << positivos << endl;
    
    return 0;
}
