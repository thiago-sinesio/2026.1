/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


int main()
{  
    float a,b;
    int i;
    cout<<"==== Escolha uma opção ===="<<endl;
    cout<<"1- Somar" <<endl;
    cout<<"2- Subtrair" <<endl;
    cout<<"3- Dividir" <<endl;
    cout<<"4- Multiplicar" <<endl;
    cin>>i;
    
    switch(i) {
        case 1:
            cout<<"Digite o primeiro numero: "<<endl;
            cin>>a;
            cout<<"Digite o segundo numero: "<< endl;
            cin>>b;
            cout << a <<" + "<< b <<" = " <<a+b;
            break;
        case 2:
            cout<<"Digite o primeiro numero: "<<endl;
            cin>>a;
            cout<<"Digite o segundo numero: "<< endl;
            cin>>b;
            cout<< a <<" - " << b <<" = " << a-b;
            break;
        case 3:
            cout<<"Digite o primeiro numero: "<<endl;
            cin>>a;
            cout<<"Digite o segundo numero: "<< endl;
            cin>>b;
            cout << a <<" / "<< b <<" = " <<a/b;
            break;
        case 4:
            cout<<"Digite o primeiro numero: "<<endl;
            cin>>a;
            cout<<"Digite o segundo numero: "<< endl;
            cin>>b;
            cout<< a <<" * " << b <<" = " << a*b;
            break;    
    }
    return 0;
}