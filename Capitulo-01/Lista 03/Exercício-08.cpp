//8. O programa deve permitir calcular a média de notas de uma turma.
//A cada execução, o usuário informa a quantidade de alunos. Depois, insere as
//notas e vê a média. O menu repete até que o usuário digite 0 para sair.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int qtdAlunos;
    
    do {
        cout << "\n====== Calculo de Media da Turma ======" << endl;
        cout << "Digite a quantidade de alunos (0 para sair): ";
        cin >> qtdAlunos;

        if (qtdAlunos > 0) {
            double somaNotas = 0;
            double nota;
            int i = 0;

            // Laço para ler as notas da turma atual
            while (i < qtdAlunos) {
                cout << "Digite a nota do aluno " << (i + 1) << ": ";
                cin >> nota;
                somaNotas += nota;
                i++;
            }

            double media = somaNotas / qtdAlunos;
            
            // fixed e setprecision(2) deixa com duas casas decimais
            cout << fixed << setprecision(2);
            cout << "\nA media da turma e: " << media << endl;
            
        } else if (qtdAlunos < 0) {
            cout << "Numero invalido! Digite um numero positivo ou 0 para sair." << endl;
        }

    } while (qtdAlunos != 0);

    cout << "Fim" << endl;

    return 0;
}