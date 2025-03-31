#include <iostream>
#include <iomanip>

using namespace std;


double calcularCargos(double horas) {
    double cargo;

    if (horas <= 3)
    {
        cargo = 2;
    }
    else if (horas>=24)
    {
        cargo = 10;


    }else
    {
        cargo = 2 + (horas - 3) * 0.50;
    }

    return cargo;
}

int main() {
    double horas1, horas2, horas3;
    double cargo1, cargo2, cargo3;
    double total = 0;
    double totalhoras=0;

    cout << "Introduce las horas de estacionamiento del primer cliente:"<<endl;
    cin >> horas1;
    cout << "Introduce las horas de estacionamiento del segundo cliente:"<<endl;
    cin >> horas2;
    cout << "Introduce las horas de estacionamiento del tercer cliente:"<<endl;
    cin >> horas3;

    cargo1 = calcularCargos(horas1);
    cargo2 = calcularCargos(horas2);
    cargo3 = calcularCargos(horas3);

    total = cargo1 + cargo2 + cargo3;
    totalhoras=horas1+horas2+horas3;


    cout<< fixed << setprecision(2);
    cout<< "Automovil       Horas     Cargo"<<endl;
    cout<< "Cliente 1       " << horas1 << "      $" << cargo1 << endl;
    cout<< "Cliente 2       " << horas2 << "      $" << cargo2 << endl;
    cout<< "Cliente 3       " << horas3 << "     $" << cargo3 << endl;
    cout<< "Total           " << totalhoras  << "     $" << total<<endl;


    return 0;
}
