#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <iostream>

using namespace std;

class calculadora
{
    public:
    float valor1;
    float valor2;
    calculadora(float v1, float v2);

    void SumaCalculadora();
    void RestaCalculadora();
    void MultiplicacionCalculadora();
    void DivisionCalculadora();
    void LeerNumeros();
        calculadora();
        virtual ~calculadora();
    protected:

    private:
};

#endif // CALCULADORA_H
