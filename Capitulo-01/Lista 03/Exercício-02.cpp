//2. Peça ao usuário um número N e use for para calcular e exibir
//a soma de todos os números naturais de 1 até N.

#include <iostream>
using namespace std;

int main() {
    int n;
    int soma = 0;
    
    cout<<"Digite um numero: ";
    cin>> n;
    
    for (int i = 1; i <= n; i++){
        cout << "Soma = " << soma << endl;
        soma += i;

        cout << "soma + "<< i <<" = " << soma << endl;
        cout << "----------------------" << endl;
    }
    cout << "Resultado: " << soma << endl;

    return 0;
}
