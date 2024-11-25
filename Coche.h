/*
    Tipo de coche - str
    Estado del coche - str
    Año del coche - int
    Color - str
    Puertas - int
    Motor -  Motor.h
    */

#ifndef COCHE_H
#define COCHE_H

#include "Motor.h"
#include <iostream>

using namespace std;

class Coche {
private:
    string tipo_coche;
    string estado_coche;
    int generacion;
    string color;
    int puertas;
    Motor motor;

public:
    Coche() {
        tipo_coche = "Desconocido";
        estado_coche = "Desconocido";
        generacion = 0;
        color = "Desconocido";
        puertas = 0;
    }

    Coche(string _tipo_coche, string _estado_coche, int _generacion, string _color, int _puertas, string _tipo_motor, int _cilindros, string _combustible, int _caballos, int _torque) {
            tipo_coche = _tipo_coche;
            estado_coche = _estado_coche;
            generacion = _generacion;
            color = _color;
            puertas = _puertas;

            motor.set_tipo_motor(_tipo_motor);
            motor.set_cilindros(_cilindros);
            motor.set_combustible(_combustible);
            motor.set_caballos(_caballos);
            motor.set_torque(_torque);
        }
        string get_tipo_coche() {
            return tipo_coche;
        }
        string get_estado_coche() {
            return estado_coche;
        }
        int get_generacion() {
            return generacion;
        }
        string get_color() {
            return color;
        }
        int get_puertas() {
            return puertas;
        }

        //Motor.h
        string get_tipo_motor() {
            return get_tipo_motor();
        }
        int get_cilindros() {
            return motor.get_cilindros();
        }
        string get_combustible() {
            return motor.get_combustible();
        }
        int get_caballos() {
            return motor.get_caballos();
        }
        int get_torque() {
            return motor.get_torque();
        }

    void set_tipo_coche(string _tipo_coche){ 
        tipo_coche = _tipo_coche; 
    }
    void set_estado_coche(string _estado_coche){ 
        estado_coche = _estado_coche; 
    }
    void set_generacion(int _generacion){
         generacion = _generacion;
    }
    void set_color(string _color){
        color = _color;
    }
    void set_puertas(int _puertas){
        puertas = _puertas;
    }
    void set_motor(Motor _motor){
        motor = _motor;
    }

    void imprime_datos() {
        cout << "Tipo del coche: " << tipo_coche << endl;
        cout << "Estado del coche: " << estado_coche << endl;
        cout << "Generacion: " << generacion << endl;
        cout << "Color: " << color << endl;
        cout << "Numero de puertas: " << puertas << endl;
        cout << "----------------------" << endl;
        motor.imprime_datos();

    }

    virtual ~Coche(){}
};

#endif