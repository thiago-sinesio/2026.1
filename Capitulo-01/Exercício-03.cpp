//3. Desenvolva um programa que peça ao usuário a quantidade de dias e,
//usando uma constante que represente o número de horas em um dia, calcule
//e exiba quantos segundos existem no total desse período informado.

//quantidade de dias > dias * 24 > horas pra segundos
//1 hora = 3600 segundos
#include <iostream>
using namespace std;

int main() {
    const int horasPorDia = 24;
    int dia, hora, segundo;
    
    cout << "Digite uma quantidade de dias: ";
    cin >> dia;
    
    hora = dia * horasPorDia;
    segundo = hora * 3600;
    
    cout << "Dia tem "<<segundo<<" segundos.";

    return 0;
}
