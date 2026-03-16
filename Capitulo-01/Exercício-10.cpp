//10. Faça um programa que receba a temperatura em graus Celsius e converta
//para Fahrenheit, exibindo o resultado com uma casa decimal.
//A fórmula para conversão é: F = C * 9/5 + 32

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float tempC, tempF;
    cout<<"Digite a temperatura em Celcius: ";
    cin>>tempC;
    
    tempF = (tempC * 9.0 / 5.0) + 32;
    cout<<"A temperatura em Fahrenheit é: " << fixed << setprecision(1) << tempF << " graus.";

    return 0;
}
