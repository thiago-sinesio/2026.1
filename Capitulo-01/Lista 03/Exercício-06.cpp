//6. Peça ao usuário um número inteiro n e use for aninhado para imprimir um triângulo de asteriscos com n linhas.

#include <iostream>
using namespace std;

int main() {
    int i, j, n;
    
    //n=numero
    //i=conta linha
    //j=quantidade * por linha
    
    cout << "Digite um número: ";
    cin >> n;
    
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;   
    }
    return 0;
}
