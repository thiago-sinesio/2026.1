//7. Crie um programa que leia a nota de um aluno e informe se ele foi
//aprovado (nota maior ou igual a 60), reprovado (nota menor que 40)
//ou se está de recuperação (nota entre 40 e 59).

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Digite o primeiro numero: ";
    cin>>num;
    
    if (num >= 60){
        cout<<"Aprovado.";
    } else if(num >= 40){
        cout<<"Recuperação";
    } else{
        cout<<"Reprovado.";
    }
    return 0;
}
