//1. Faça um programa que leia um número inteiro e informe se ele é positivo (maior que zero).
//Caso contrário, não precisa imprimir nada.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Digite um numero: ";
    cin>>num;
    
    if (num > 0){
        cout<<"Numero é positivo";
    } else {
        cout<<endl;
    }
    return 0;
}
