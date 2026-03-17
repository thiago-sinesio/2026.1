//11. Crie um programa que leia um número inteiro de 1 a 7 e exiba o nome
//correspondente ao dia da semana (1 = Domingo, 2 = Segunda-feira, etc.).
//Caso o número não esteja entre 1 e 7, exiba uma mensagem de erro.

#include <iostream>
using namespace std;

int main() {
    int i;
    cout<<"Digite um numero de 1 a 7: ";
    cin>>i;
    
    switch(i){
        case 1:
            cout<<"1 - Domingo";
            break;
        case 2:
            cout<<"2 - Segunda-Feira";
            break;
        case 3:
            cout<<"3 - Terça-Feira";
            break;
        case 4:
            cout<<"4 - Quarta-Feira";
            break;
        case 5:
            cout<<"5 - Quinta-Feira";
            break;
        case 6:
            cout<<"6 - Sexta-Feira";
            break;
        case 7:
            cout<<"7 - Sábado";
            break;
        default:
            cout<<"Não é um dia válido." << endl;
            break;
    } 
    return 0;
}
