//1. Escreva um programa que leia dois números inteiros fornecidos pelo
//usuário, calcule a soma desses números e exiba o resultado de
//forma clara e explicativa na tela.
#include <iostream>
using namespace std;

int main()
{  
    float a,b;
    
    cout <<"Digite o 1 número: ";
    cin >> a;
    
    cout<<"Digite o 2 número: ";
    cin>> b;
    
    cout<< "\nO resultado de "<< a << " + " << b << " é: " << a+b;

    return 0;
}
