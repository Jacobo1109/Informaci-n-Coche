#ifndef DUENO_H
#define DUENO_H

#include <iostream>
#include "Persona.h"
#include "Coche.h"

using namespace std;

class Dueno : public Persona {
    
    private:
        int edad;
        Coche* coche;

    public:
        Dueno():Persona() {
            edad = 0;
            coche = nullptr;
        }
        ~Dueno(){
            if(coche != nullptr) {
                delete coche;
            }
        }

    void set_edad(int _edad){
        edad = _edad;
    }
    void set_coche(Coche* _coche){
        coche = _coche;
    }

    void imprime_datos() {
        Persona::imprime_datos();
        cout << "Edad: " << edad << endl;
        cout << "----------------------" << endl;
        if (coche != nullptr) {
            coche->imprime_datos();
        }
    }

};

#endif