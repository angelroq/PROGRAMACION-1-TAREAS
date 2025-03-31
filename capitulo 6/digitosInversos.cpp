#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero:"<<endl;
    cin >> numero;

    cout << "El numero invertido es:"<<endl;
    while (numero > 0) {
        cout << numero % 10;
        numero = numero / 10;
    }

    return 0;
}
