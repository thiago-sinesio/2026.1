//15. Faça um programa que receba um caractere representando uma operação
//matemática básica ('+', '-', '*', '/') e exiba uma mensagem descrevendo a 
//operação escolhida. Para qualquer outro caractere, informe que é inválido.

#include <iostream>
using namespace std;

int main() {
    char i;
    cout<<"Digite simbolo de operador matemático: ";
    cin>>i;
    
    switch(i){
        case '+':
            cout<<"+ é soma";
            break;
        case '-':
            cout<<"- é subtração";
            break;
        case '*':
            cout<<"* é multiplicação";
            break;
        case '/':
            cout<<"/ é divisão";
            break;
        default:
            cout<<"Não é um operador válido." << endl;
            break;
    } 
    return 0;
}
