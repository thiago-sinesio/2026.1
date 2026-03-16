//9. Crie um programa que leia um número inteiro e mostre na tela o seu antecessor e seu sucessor.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Digite um numero: ";
    cin>>num;
    
    cout<< "Número anterior: " << num - 1<< endl;
    cout<< "Número posterior: " << num + 1 << endl;

    return 0;
}
