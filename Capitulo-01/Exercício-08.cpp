//8. Faça um programa que leia um número inteiro e mostre o resultado da divisão
//desse número por 2, demonstrando tanto a divisão inteira quanto a divisão real (ponto flutuante).

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num;
    cout<<"Digite um numero para dividir por 2: ";
    cin>>num;
    
    cout<< "Divisão inteira é: " <<num / 2 << endl;
    cout<< "Divisão real: " << fixed<< setprecision(2) << (float)num / 2;

    return 0;
}
