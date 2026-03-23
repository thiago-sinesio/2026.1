//13. Desenvolva um programa que leia um código de operação (1 para soma, 2 para subtração,
//3 para multiplicação, 4 para divisão), leia dois números e execute a operação
//correspondente, exibindo o resultado. Caso o código seja inválido, exiba uma mensagem de erro.

#include <iostream>
using namespace std;

float calcular(float a, float b, int op) {
    if (op == 1) return a + b;
    if (op == 2) return a - b;
    if (op == 3) return a * b;
    if (op == 4 && b != 0) return a / b;
    return 0; // Caso base
}

int main() {
    int op;
    float num1, num2;

    cout << "Calculadora:\n1- Soma\n2- Subtração\n3- Multiplicação\n4- Divisão\nOpção: ";
    cin >> op;
    cout<<"=================="<< endl;

    if (op < 1 || op > 4) {
        cout << "Operação inválida!" << endl;
    } else {
        cout << "Digite os valores: ";
        cin >> num1 >> num2;
        cout << "Resultado: " << calcular(num1, num2, op) << endl;
    }
    return 0;
}
