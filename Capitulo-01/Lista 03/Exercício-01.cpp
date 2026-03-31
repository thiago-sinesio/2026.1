//1. Escreva um programa que use for para imprimir todos os números pares de 2 até 20, inclusive.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> par;
    
    for(int i = 2; i <= 20; i+=2) {
        par.push_back(i);
    }
    
    cout << "numeros pares: " << endl;
    for (int n : par){
        cout <<n << " ";
    }
    cout << endl;

    return 0;
}
