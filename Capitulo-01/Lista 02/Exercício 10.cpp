//10. Escreva um programa que leia um número inteiro e informe se ele é
//positivo, negativo ou zero, utilizando estruturas condicionais aninhadas.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Digite o valor: ";
    cin>>num;

    if (num > 0){
        cout<<"Numero Positivo.";
    } else if (num < 0) {
        cout<<"Numero negativo.";
    } else{
        cout<<"Numero neutro.";
    }
    return 0;
}
