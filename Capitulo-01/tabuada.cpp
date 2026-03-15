#include <iostream>
using namespace std;

int main()
{
    int a, i = 1;
    
    cout <<"Digite um valor: ";
    cin >> a;
    
    while (i <= 10){
        cout << a <<"x" << i << "=" << a * i << endl;
        i++;
    }

    return 0;
}