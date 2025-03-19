#include <iostream>
#include "calculadora.h"


using namespace std;

int main()
{
    cout << "Bienvenido a la calculadora " << endl;
    int seleccionadorMenu=0;
    calculadora operacion(0,0);
    operacion.LeerNumeros();
    while(seleccionadorMenu!= 5)
    {
        cout<< "Seleccione 1 para realizar una suma"<<endl;
        cout<< "Seleccione 2 para realizar una resta"<<endl;
        cout<< "Seleccione 3 para realizar una multiplicacion"<<endl;
        cout<< "Seleccione 4 para realizar una division"<<endl;
        cout<< "Seleccione 5 si quiere salir"<<endl;
        cout<<"..."<<endl;
        cin>> seleccionadorMenu;
        if(seleccionadorMenu>5 || seleccionadorMenu<1)
        {
           cout<<"opcion no valida"<<endl;
        }
        if (seleccionadorMenu==1)
        {
            operacion.SumaCalculadora();
        }
        if (seleccionadorMenu==2)
        {
            operacion.RestaCalculadora();
        }
        if (seleccionadorMenu==3)
        {
            operacion.MultiplicacionCalculadora();
        }
        if (seleccionadorMenu==4)
        {
            operacion.DivisionCalculadora();
        }
    }
    return 0;
}
