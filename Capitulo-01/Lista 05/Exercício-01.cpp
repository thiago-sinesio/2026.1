//8. O programa deve permitir calcular a média de notas de uma turma.
//A cada execução, o usuário informa a quantidade de alunos. Depois, insere as
//notas e vê a média. O menu repete até que o usuário digite 0 para sair.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int cont = 0;

    cout << "Digite seu nome completo: ";
    getline(cin, nome);

    //Passsa por cada caractere da string
    for (int i = 0; i < nome.length(); i++) {
        //verifica se o caractere atual não é um espaço vazio
        if (nome[i] != ' ') {
            cont++;
        }
    }
    cout << "O nome possui " << cont << " caracteres." << endl;

    return 0;
}