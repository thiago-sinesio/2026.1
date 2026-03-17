//5. Desenvolva um programa que leia a idade de uma pessoa e informe se ela é
//menor de idade (menos de 18 anos) ou maior de idade (18 anos ou mais).

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Digite a idade: ";
    cin>>num;
    
    if (num < 18){
        cout<<"É menor de idade.";
    } else {
        cout<<"É maior de idade.";
    }
    return 0;
}
