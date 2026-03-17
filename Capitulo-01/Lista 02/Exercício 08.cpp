//8. Faça um programa que leia o ano de nascimento de uma pessoa e informe
//se ela já pode votar (idade mínima 16 anos) ou não.

#include <iostream>
using namespace std;

int main() {
    int ano;
    cout<<"Informe seu ano de nascimento: ";
    cin>>num;
    
    if ((2026 - ano) >= 16){
        cout<<"Pode votar.";
    } else {
        cout<<"Não pode votar.";
    }
    return 0;
}
