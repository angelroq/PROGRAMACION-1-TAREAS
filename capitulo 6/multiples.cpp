#include <iostream>

using namespace std;

bool multiples(int a, int b) {
    return b % a == 0;
}

int main() {
    int a, b;
    cout<<"Ingrese el primer valor a evaluar"<<endl;
    cin>>a;
    cout<<"Ingrese el segundo valor a evaluar"<<endl;
    cin>>b;
    multiples(a,b);
    if (multiples(a,b))
    {
        cout<<"Primero multiplo del segundo: true "<<endl;
    }else
    {
        cout<<"Primero  multiplo del segundo: false "<<endl;
    }
    if (multiples(b,a))
    {
        cout<<"Segundo multiplo del primero: true "<<endl;
    }else
    {
        cout<<"Segundo multiplo del primero: false"<<endl;
    }


    return 0;
}
