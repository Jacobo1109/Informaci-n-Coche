/*
   Tipo de motor - str
   Cilindros- int
   Combustible - str
   Caballos HP - int
   Torque - int
    */

#ifndef MOTOR_H
#define MOTOR_H

#include<iostream>

using namespace std;

class Motor {
    private:
        string tipo_motor;
        int cilindros;
        string combustible;
        int caballos;
        int torque;
    
    public:
        Motor() {
            tipo_motor = "Desconocido";
            cilindros = 0;
            combustible = "Desconocido";
            caballos = 0;
            torque = 0; //Newton-metro
        }
        Motor(string _tipo_motor, int _cilindros, string _combustible, int _caballos, int _torque) {
            tipo_motor = _tipo_motor;
            cilindros = _cilindros;
            combustible = _combustible;
            caballos = _caballos;
            torque = _torque;
        }
        string get_tipo_motor() {
            return tipo_motor;
        }
        int get_cilindros() {
            return cilindros;
        }
        string get_combustible() {
            return combustible;
        }
        int get_caballos() {
            return caballos;
        }
        int get_torque() {
            return torque;
        }
        void set_tipo_motor(string _tipo_motor) {
            tipo_motor = _tipo_motor;
        }
        void set_cilindros(int _cilindros) {
            cilindros = _cilindros;
        }
        void set_combustible(string _combustible) {
            combustible = _combustible;
        }
        void set_caballos(int _caballos) {
            caballos = _caballos;
        }
        void set_torque(int _torque) {
            torque = _torque;
        }
        void imprime_datos() {
            cout << "Tipo de motor: " << tipo_motor << endl;
            cout << "Cilindros: " << cilindros << endl;
            cout << "Tipo de combustible: " << combustible << endl;
            cout << "Caballos HP: " << caballos << endl;
            cout << "Torque: " << torque << endl;
        }
};

#endif