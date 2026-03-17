//6. Faça um programa que leia três números inteiros e informe qual deles é o maior.

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout<<"Digite o primeiro numero: ";
    cin>>num1;
    
    cout<<"Digite o segundo numero: ";
    cin>>num2;
    
    cout<<"Digite o terceiro numero: ";
    cin>>num3;
    
    if (num1 > num2 && num1 > num3){
        cout<<"Numero " << num1 <<" é maior.";
    } else if(num2 > num3){
        cout<<"Numero " << num2 <<" é maior.";
    } else{
        cout<<"Numero " << num3 <<" é maior.";
    }
    return 0;
}
