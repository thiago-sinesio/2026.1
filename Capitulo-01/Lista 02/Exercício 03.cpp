//3. Crie um programa que receba um número inteiro e informe se ele é positivo
//ou negativo. Não é necessário tratar o caso do zero.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Digite um numero: ";
    cin>>num;
    
    if (num > 0){
        cout<<"Numero é positivo.";
    } else {
        cout<<"Numero é negativo.";
    }
    return 0;
}
