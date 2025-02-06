#include <iostream>
#include <cstdlib>
//Febrero 2025 angelroq
using namespace std;

int main()
{
    //Variables operadores
    float pesoEnLibras=0;
    float pesoEnKilogramos=0;
    float alturaEnMetros=0;
    float alturaEnPulgadas=0;
    int opcionSeleccionada;
    float resultadoCalculadora;
    char salidaMenu;
    //inicia el ciclo
    do
    {
        system("cls");
        //Ingreso de datos
        opcionSeleccionada=0;
        resultadoCalculadora=0;
        cout << "Calculadora de IMC (INDICE DE MASA CORPORAL)" << endl;
        //Menu de opciones en calculadora IMC
        cout << "1. Peso en kilogramos" << endl;
        cout << "2. Peso en libras" << endl;
        cout << "   Opcion: "<<endl;
        cin >> opcionSeleccionada;
        // Estructuras condicionales
        if (opcionSeleccionada==1)
        {
            cout << "Ingrese peso en kilogramos"<<endl;
            cin >> pesoEnKilogramos;
            cout << "Ingrese altura en metros" << endl;
            cin >> alturaEnMetros;
        } else if (opcionSeleccionada==2)
        {
            cout<< "Ingrese peso en libras"<<endl;
            cin >> pesoEnLibras;
            cout << "Ingrese altura en pulgadas"<<endl;
            cin>> alturaEnPulgadas;
        }
        switch  (opcionSeleccionada)
        {
            case 1:
                resultadoCalculadora = pesoEnKilogramos/(alturaEnMetros*alturaEnMetros);
                break;
            case 2:
                resultadoCalculadora = (pesoEnLibras*703)/(alturaEnPulgadas*alturaEnPulgadas);
                break;
            default:
                cout << "Error opcion seleccionada" << endl;
        }
        //INDICAR IMC
        if (resultadoCalculadora<18.5)
        {
            cout<<"Bajo peso "<<resultadoCalculadora<<" de IMC"<<endl;
        }else
        if (resultadoCalculadora<25 && resultadoCalculadora>18.4)
        {
            cout<<"Peso normal "<<resultadoCalculadora<<" de IMC"<<endl;
        }else
        if (resultadoCalculadora<30 && resultadoCalculadora>24)
        {
            cout<<"Tiene sobrepeso "<<resultadoCalculadora<<" de IMC" <<endl;
        }else if (resultadoCalculadora>29)
        {
            cout<<"Tiene obesidad "<<resultadoCalculadora<<" de IMC"<<endl;
        }
        cout << "Desea realizar otra operacion Si=S o No=N" << endl;
        cin >> salidaMenu;
    } while (salidaMenu == 's' || salidaMenu == 'S');
    return 0;
}
