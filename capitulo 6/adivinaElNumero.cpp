#include <iostream>
#include <cstdlib>

using namespace std;

int aleatorio;
int intento;
char repetir;

void numerosAleatorios()
{
    do
    {
    system("cls");
    aleatorio=rand()%1000+1;
    do
    {
    cout<<"Ingrese numero"<<endl;
    cin >>intento;

    if(intento>aleatorio)
    {
        cout<<"Muy alto"<<endl;
    }else if(intento<aleatorio)
    {
        cout<<"Muy bajo"<<endl;
    }else
    {
        cout<<"Ganaste!"<<endl;
    }

   }while (intento!=aleatorio);
    cout<<"Desea jugar de nuevo? (s/n)"<<endl;
    cin>>repetir;
    }while (repetir=='s');
}

int main()
{
    cout<<"Intente adivinar el numero entre 1 y 1000"<<endl;
    numerosAleatorios();

return 0;
}
