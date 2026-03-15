//2. Crie um programa que leia um número decimal (do tipo double)
//e mostre esse número formatado com exatamente três casas decimais na saída.
//Use manipuladores de fluxo para garantir a formatação.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{  
    double a;
    
    cout <<"Digite o numero: ";
    cin >> a;
    
    cout<< "\nO resultado de "<< fixed << setprecision(3)<<a<< endl;

    return 0;
}