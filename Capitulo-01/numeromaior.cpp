#include <iostream>
using namespace std;

int main()
{
    int a, b;
    
    cout <<"Digite um valor: " << endl;
    cin >> a;
        
    cout <<"Digite um valor: " << endl;
    cin >> b;
    
    if (a > b){
        cout << a << " É maior que " << b << endl;
    }else if (b > a){
        cout << b << " É maior que " << a << endl;
    }else {
        cout << "Os dois numeros são iguais" << endl;
    }

    return 0;
}