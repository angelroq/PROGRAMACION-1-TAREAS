#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



int enteroCociente(int n,int a,int b)
{
    return n=a/b;
}
int residuoCociente(int n, int a, int b)
{
    return n=a%b;
}
int main()
{
   int espacio,i;
   int a,b,n;
   cout<<"Ingrese primer numero"<<endl;
   cin>>a;
   cout<<"Ingrese segundo numero"<<endl;
   cin>>b;
   cout<<"Ingrese numero a separar por digitos"<<endl;
   cin>>espacio;
   int numeroCifras[espacio];
   cout<<"El entero cociente es: "<<enteroCociente(n,a,b)<<endl;
   cout<<"El residuo entero es: "<<residuoCociente(n,a,b)<<endl;
   while (espacio>0)
   {
       numeroCifras[i]=espacio%10;
       espacio=espacio/10;
       i++;

   }
   for (int c=i-1; c>=0; c--)
   {
       cout<<numeroCifras[c]<<"  ";
   }



 return 0;
}
