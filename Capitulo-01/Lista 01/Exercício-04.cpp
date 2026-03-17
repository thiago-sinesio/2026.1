//4. Faça um programa que leia o valor do raio de um círculo (tipo float),
//utilize uma constante para armazenar o valor de pi e calcule a área do círculo.
//Apresente o resultado com duas casas decimais.

#include <iostream>
#include <iomanip> //sem isso setprecison não funciona
using namespace std;

int main() {
    float raio;
    const float PI = 3.14159;
    float resultado;
    
    cout<<"Digite o valor de um raio de um círculo: ";
    cin >> raio;
    
    resultado = PI * raio * raio;
    //PRECISA FICAR ANTES DA VARIAVEL
    // fixed << setprecision(2) << VARIAVEL
    cout<< fixed << setprecision(2) << resultado;

    return 0;
}
