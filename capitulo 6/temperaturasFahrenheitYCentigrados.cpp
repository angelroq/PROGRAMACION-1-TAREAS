#include <iostream>

using namespace std;

float fahrenheit;
float centigrados;
int decision;
char repetir;

void conversionDeGrados()
{
    fahrenheit=0;
    centigrados=0;
    if (decision==1)
    {
        cout<<"Ingrese grados fahrenheit"<<endl;
        cin>>fahrenheit;
        centigrados=(fahrenheit-32)*5/9;
        cout<<"El equivalente en grados centigrados es: "<<centigrados<<endl;
    }else if (decision==2)
    {
        cout<<"Ingrese grados centigrados"<<endl;
        cin>>centigrados;
        fahrenheit=(centigrados*9/5)+32;
        cout<<"El equivalente en grados fahrenheit es: "<<fahrenheit<<endl;
    }else
    {
        cout<<"Ingrese una opcion valida"<<endl;
    }
}
int main()
{
  do
  {
  cout<<"Si desea convertir de fahrenheit a centigrados ingrese 1"<<endl;
  cout<<"Si desea convertir de centigrados a fahrenheit ingrese 2"<<endl;
  cin>>decision;
  conversionDeGrados();

  cout<<"Desea realizar otra conversion (s/n)"<<endl;
  cin>>repetir;

  }while (repetir=='s');
  return 0;
}

