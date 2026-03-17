//4. Faça um programa que leia um número inteiro e informe se ele é múltiplo de 5 ou não.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Digite um numero: ";
    cin>>num;
    
    if (num % 5 == 0){
        cout<<"É multiplo de 5";
    } else {
        cout<<"Não é multiplo de 5.";
    }
    return 0;
}
