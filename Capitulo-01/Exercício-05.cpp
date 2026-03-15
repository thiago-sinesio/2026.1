//5. Escreva um programa que receba um único caractere do usuário e exiba
//o código ASCII correspondente a esse caractere na saída.
#include <iostream>
using namespace std;

int main() {
    char x;
    
    cout<<"Digite uma letra para ter";
    cout<<"\no caractere ASCII correspondente: ";
    cin >> x;

    cout << "\nO caractere " <<"'" << x <<"'" " é: " << int(x);
    return 0;
}
