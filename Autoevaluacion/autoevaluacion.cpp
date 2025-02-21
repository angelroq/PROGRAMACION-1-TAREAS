#include <iostream>
#include <iomanip>
using namespace std;

//Declaración de variables a utilizar
int notasDePartidos[4][5];
int notasSeparadas=0;
int totalDeNotas=0;
int i=0;
int j=0;
int totalPartido1=0;
int totalPartido2=0;
int totalPartido3=0;
int totalPartido4=0;
int totalPartido5=0;

void ingresoDeNotas()//Fuuncion para ingresar las notas
{
    for (i=0; i<=3; i++)
    {
        for (j=0; j<=4; j++)//Pide notas de todos los partidos por rondas
        {
            cout<<"Ingrese la nota de la ronda "<<i+1<<" del partido No."<<j+1<<" ";
            cin>>notasSeparadas;
            notasDePartidos[i][j]=notasSeparadas;
            cout<<" "<<endl;
        }
    }
}
void imprimir()//Funcion que imprime una linea de separacion para columnas
{
    cout<<"|";
}
void mostrarParametros()//Muestra todas las notas ingresadas ordenadamente
{
    for (i=0; i<=3; i++)
    {
        cout<<"Ronda "<<i+1;
        for (j=0; j<=4; j++)
        {
            cout<<setw(10)<<notasDePartidos[i][j]<<"         ";
            imprimir();
        }
        cout<<" "<<endl;
    }
}
void calcularTotal()
{
            for (i=0; i<=4; i++)
    {
        if(i==0)
        {
            for (j=0; j<=3; j++)
            totalPartido1=totalPartido1+notasDePartidos[j][i];
        }else
        if(i==1)
        {
            for (j=0; j<=3; j++)
            totalPartido2=totalPartido2+notasDePartidos[j][i];
        }else
        if(i==2)
        {
            for (j=0; j<=3; j++)
            totalPartido3=totalPartido3+notasDePartidos[j][i];
        }else
        if(i==3)
        {
            for (j=0; j<=3; j++)
            totalPartido4=totalPartido4+notasDePartidos[j][i];
        }else
        if(i==4)
        {
            for (j=0; j<=3; j++)
            totalPartido5=totalPartido5+notasDePartidos[j][i];
        }
    }
}

int main()
{
    ingresoDeNotas();
    cout<<"          Partido No.1          Partido No.2         Partido No.3       Partido No.4       Partido No.5"<<endl;
    mostrarParametros();
    calcularTotal();
    cout<<"Total de votos: "<<totalPartido1<<"                   ";
    cout<<totalPartido2<<"                   ";
    cout<<totalPartido3<<"                   ";
    cout<<totalPartido4<<"                   ";
    cout<<totalPartido5;

    //Falto porcentajes

}
