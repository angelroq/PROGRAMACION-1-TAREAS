#include <iostream>
#include <cmath>

using namespace std;

float x;


int main ()
{

    cout<<"Ingrese numero a redondear"<<endl;
    cin>>x;
    cout<<"Redondeado a entero "<<floor(x*1+0.5)/1<<endl;
    cout<<"Redondeado a decimas "<<floor(x*1+0.5)/10<<endl;
    cout<<"Redondeado a centesimas "<<floor(x*1+0.5)/100<<endl;
    cout<<"Redondeado a milesimas "<<floor(x*1+0.5)/1000<<endl;
}
