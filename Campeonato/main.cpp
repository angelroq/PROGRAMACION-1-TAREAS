#include <iostream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "rondas.h"
using namespace std;

int main()
{
    rondas rondas;
    string equipos[NUM_EQUIPOS];
    int puntos[NUM9_EQUIPOS] = {0};
    int golesFavor[NUM_EQUIPOS] = {0};
    int golesContra[NUM_EQUIPOS] = {0};
    int victoriaPartido[NUM_EQUIPOS] = {0};
    int empates[NUM_EQUIPOS] = {0};

    rondas.nombreEquipos(equipos);

    cout<<"Primera y segunda ronda (No dispobible) "<<endl;
    rondas.simulacionLiga(equipos, golesFavor, golesContra, victoriaPartido, empates, puntos, 1);
    rondas.simulacionLiga(equipos, golesFavor, golesContra, victoriaPartido, empates, puntos, 2);
    cout<<"Resultado final de la liga: "<<endl;
    rondas.mostrarTabla(equipos, puntos, golesFavor, golesContra,victoriaPartido);

    return 0;

}
