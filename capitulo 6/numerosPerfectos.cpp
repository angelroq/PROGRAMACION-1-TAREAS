#include <iostream>

using namespace std;

int sumaDivisores(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma;
}

int main() {
    int inicio, fin;
    cout << "Ingrese el rango de numeros "<<endl;
    cout<<"Ingrese el inicio"<<endl;
    cin >> inicio;
    cout<<"Ingrese el fin"<<endl;
    cin>>fin;

    cout << "Numeros perfectos en el rango " << inicio << ", " << fin << ":" << endl;
    for (int i = inicio; i <= fin; i++) {
        if (sumaDivisores(i) == i) {
            cout << i << endl;
        }
    }

    return 0;
}
