#include <iostream>

using namespace std;
int base;
int exponente;
int resultado;
int i;

void exponenciacion()
{
    resultado=base;
    cout<<"La siguiente exponenciacion quedaria como: "<<endl;
    for (i=1; i<=exponente; i++)
    {
        cout<<base;
        resultado=resultado*base;

        if (i<exponente)
        {
            cout<<"*";
        }
    }
    cout<<endl;
    cout<<"El resultado de la exponenciacion es: "<<resultado<<endl;
}

int main()
{
    cout<<"Ingrese la base del numero a operar"<<endl;
    cin >>base;
    cout<<"Ingrese el exponente del numero a operar"<<endl;
    cin>>exponente;
    exponenciacion();

}
