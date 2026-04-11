//4. Faça um programa que peça números ao usuário até que ele digite um número negativo.
//Ao final, exiba a quantidade de números positivos digitados.

#include <iostream>
using namespace std;

int main() {
    int i, x = 0;
    
    do {
        cout << "Digite um numero: " << endl;
        cin >> i;
        if(i > 0)
            x++;
    } while (i>=0);
    
    cout << "voce digitou " << x << " numeros positivos.";
    return 0;
}
