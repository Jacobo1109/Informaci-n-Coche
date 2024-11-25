#ifndef COCHE_ELECTRICO_H
#define COCHE_ELECTRICO_H

#include "Coche.h"
#include<iostream>

using namespace std;

class Coche_electrico : public Coche {
private:
    int autonomia;

public:
    Coche_electrico() : Coche() {
        autonomia = 0;
    }

    void set_autonomia(int _autonomia) { autonomia = _autonomia; }

    void imprime_datos(){
        Coche::imprime_datos();
        cout << "Autonomía: " << autonomia << " km" << endl;
    }
};

#endif