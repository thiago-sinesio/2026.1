//2. Escreva um programa que receba um número inteiro e informe se ele é par. 
//Se for par, exiba "Número par". Caso contrário, não exiba nada.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Digite um numero: ";
    cin>>num;
    
    if (num % 2 == 0){
        cout<<"Numero é par";
    }
    return 0;
}
