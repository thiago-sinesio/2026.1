//12. Faça um programa que leia um caractere representando uma vogal (a, e, i, o, u)
//e exiba uma mensagem confirmando qual vogal foi digitada.
//Caso seja uma consoante ou outro caractere, informe que não é vogal.

#include <iostream>
using namespace std;

int main() {
    char letra;
    cout<<"Digite uma vogal: ";
    cin>>letra;
    
    switch(letra){
        case 'a':
        case 'A':
            cout<<"Vogal A digitada.";
            break;
        case 'e':
        case 'E':
            cout<<"Vogal E digitada.";
            break;
        case 'i':
        case 'I':
            cout<<"Vogal I digitada.";
            break;
        case 'o':
        case 'O':
            cout<<"Vogal O digitada.";
            break;
        case 'u':
        case 'U':
            cout<<"Vogal U digitada.";
            break;
        default:
            cout<<"Não é uma vogal." << endl;
            break;
    } 
    return 0;
}
