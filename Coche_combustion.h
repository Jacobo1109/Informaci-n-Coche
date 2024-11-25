#ifndef COCHE_COMBUSTION_H
#define COCHE_COMBUSTION_H

#include "Coche.h"
#include<iostream>

using namespace std;

class Coche_combustion : public Coche {
private:
    float capacidad;

public:
    Coche_combustion() : Coche() {
        capacidad = 0.0;
    }

        void set_capacidad(float _capacidad) {
            capacidad = _capacidad;
        }

        void imprime_datos(){
        Coche::imprime_datos();
        cout << "Capacidad del tanque: " << capacidad << " litros" << endl;
    }
};

#endif