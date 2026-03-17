//13. Desenvolva um programa que leia um código de operação (1 para soma, 2 para subtração,
//3 para multiplicação, 4 para divisão), leia dois números e execute a operação
//correspondente, exibindo o resultado. Caso o código seja inválido, exiba uma mensagem de erro.

#include <iostream>
using namespace std;

int main() {
    int i, num1, num2;
    cout<<"Calculadora: \n 1- Soma\n 2- Subtração\n 3- Multiplicação\n 4- Divisão" << endl;
    cout<<"=================="<< endl;
    cin>>i;
    
    switch(i){
        case 1:
            cout<<"\n1 - Soma"<<endl;
            cout<<"Digite o primeiro numero: ";
            cin>>num1;
            cout<<"Digite o segundo numero: ";
            cin>>num2;
            cout<< num1 << " + " <<num2 << " = " <<num1 + num2;
            break;
        case 2:
            cout<<"\n2 - Subtração"<<endl;
            cout<<"Digite o primeiro numero: ";
            cin>>num1;
            cout<<"Digite o segundo numero: ";
            cin>>num2;
            cout<< num1 << " - " <<num2 << " = " <<num1 - num2;
            break;
        case 3:
            cout<<"\n3 - Multiplicação"<<endl;
            cout<<"Digite o primeiro numero: ";
            cin>>num1;
            cout<<"Digite o segundo numero: ";
            cin>>num2;
            cout<< num1 << " * " <<num2 << " = " <<num1 * num2;
            break;
        case 4:
            cout<<"\n4 - Divisão"<<endl;
            cout<<"Digite o primeiro numero: ";
            cin>>num1;
            cout<<"Digite o segundo numero: ";
            cin>>num2;
            cout<< num1 << " / " <<num2 << " = " <<num1 / num2;
            break;
        default:
            cout<<"Não é uma operação válida." << endl;
            break;
    } 
    return 0;
}
