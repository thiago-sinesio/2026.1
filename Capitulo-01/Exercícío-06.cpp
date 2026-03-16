//6. Crie um programa que solicite ao usuário três números inteiros, calcule
//a média aritmética desses valores e mostre o resultado com duas casas decimais.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num1, num2, num3;
  
    cout<<"Digite o 1 numero: ";
    cin>>num1;
    cout<<"Digite o 2 numero: ";
    cin>>num2;
    cout<<"Digite o 3 numero: ";
    cin>>num3;
    
    cout<<"Media é: " << fixed << setprecision(2)<< float(num1 + num2 + num3) / 3 << endl;
    return 0;
}
