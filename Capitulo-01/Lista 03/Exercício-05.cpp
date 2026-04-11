//5. Desenvolva um programa em C++ que implemente um menu interativo utilizando a estrutura de repetição do-while.
//O menu deve exibir uma lista de opções para o usuário (olá, tchau e sair), e após cada escolha válida (exceto a opção de sair),
//o menu deve ser exibido novamente automaticamente. O programa só deve terminar quando o usuário digitar a opção 0 (sair).

#include <iostream>
using namespace std;

int main() {
    int i;
    
    do {
        cout << "\n====MENU====" << endl;
        cout << "1- Olá " << endl;
        cout << "2- Tchau " << endl;
        cout << "3- ----- " << endl;
        cout << "0- Sair. " << endl;
        cout << "============" << endl;
        cin >> i;
        
        switch(i) {
            case 1:
                cout << "Olá !" << endl;
                break;
            case 2:
                cout << "Tchau tchau!" << endl;
                break;
            case 3:
                cout << "zzzzzzz" << endl;
                break;
            case 0:
                cout << "Saindo...";
                break;
            
            default:
                cout << endl;
        }
    } while (i != 0);
    
    
    return 0;
}