#include <iostream>

using namespace std;

int i,j;
int dimensionDelCuadrado;
int repetir;

void dibujar()
{
    for (i=0; i<dimensionDelCuadrado; i++)
    {
        for (j=0; j<dimensionDelCuadrado; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}


int main()
{
    do
    {
    cout<<"Ingrese un numero para definir el tamaño del cuadrado"<<endl;
    cin>>dimensionDelCuadrado;
    dibujar();

    cout<<"Desea repetir? Si=1 No=0"<<endl;
    cin>>repetir;
    }while (repetir!=0);

    return 0;
}
