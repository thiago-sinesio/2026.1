//3. Use for aninhado para gerar e exibir a tabuada completa de 1 a 10.
#include <iostream>
using namespace std;

int main() {
    //controla a tabuada (1 até 10)
    for(int i = 1; i <= 10; i++) {
        cout << "Tabuada do " << i << ":\n";

        //multiplicações (1 até 10)
        for(int j = 1; j <= 10; j++) {
          //saída: i=tabuada x j=multiplicacao = i*j
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    return 0;
}
