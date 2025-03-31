#include <iostream>

using namespace std;

int calificacion;
char repetir;

void puntosCalidad()
{
    if (calificacion>=90 && calificacion<=100)
    {
        cout<<"Tiene 4 puntos de calidad"<<endl;
    }else if(calificacion>=80 && calificacion<=89)
    {
        cout<<"Tiene 3 puntos de calidad"<<endl;
    }else if(calificacion>=70 && calificacion<=79)
    {
        cout<<"Tiene 2 puntos de calidad"<<endl;
    }else if(calificacion>=60 && calificacion<=69)
    {
        cout<<"Tiene 1 punto de calidad"<<endl;
    }else
    {
        cout<<"No tiene ningun punto de calidad"<<endl;
    }
}

int main()
{
    do
    {
        cout<<"Ingrese la calificacion del estudiante:"<<endl;
        cin>>calificacion;

        puntosCalidad();

        cout<<"Desea realizar otra operacion (s/n)"<<endl;
        cin>> repetir;
    }while (repetir=='s');
}
