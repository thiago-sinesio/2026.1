//14. Escreva um programa que leia um número inteiro entre 1 e 12 e exiba
//o nome do mês correspondente (1 = Janeiro, 2 = Fevereiro, etc.).
//Caso o número esteja fora desse intervalo, informe que é inválido.

#include <iostream>
using namespace std;

int main() {
    int i;
    cout<<"Digite um numero correspondente ao mês 1 a 12: ";
    cin>>i;
    
    switch(i){
        case 1:
            cout<<"1 - Janeiro";
            break;
        case 2:
            cout<<"2 - Fevereiro";
            break;
        case 3:
            cout<<"3 - Março";
            break;
        case 4:
            cout<<"4 - Abril";
            break;
        case 5:
            cout<<"5 - Maio";
            break;
        case 6:
            cout<<"6 - Junho";
            break;
        case 7:
            cout<<"7 - Julho";
            break;
        case 8:
            cout<<"8 - Agosto";
            break;
        case 9:
            cout<<"9 - Setembro";
            break;
        case 10:
            cout<<"10 - Outubro";
            break;
        case 11:
            cout<<"11 - Novembro";
            break;
        case 12:
            cout<<"12 - Dezembro";
            break;
        default:
            cout<<"Não é um mês válido." << endl;
            break;
    } 
    return 0;
}
