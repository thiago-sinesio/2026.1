//7. O programa deve garantir que o número de repetições n seja maior que 0 (usando do-while),
//e depois usar while para ler n números e somá-los.

#include <iostream>
using namespace std;

int main() {
    int n, i = 0, num, soma = 0;
    
    do {
        cout << "Quantos numeros serão somados: ";
        cin >> n;
    } while (n <= 0);
    
    // Ler N numeros e somar
    while (i < n) {
        cout << "Digite um numero: ";
        cin >> num;

        soma += num;
        i++;
    }

    cout << "A soma é: " << soma << endl;

    return 0;
}