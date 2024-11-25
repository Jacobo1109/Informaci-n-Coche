/*
    Nombre - str
    Teléfono - int
    Correo - str
    Dirección - str
    Edad - int
    Coche - str
    */
#ifndef PERSONA_H
#define PERSONA_H

#include<iostream>

using namespace std;

class Persona{
    
    protected:
        string nombre;
        string telefono;
        string correo;
        string direccion;

    public:
        Persona(){
            nombre = "Desconocido";
            telefono = "Desconocido";
            correo = "Desconocido";
            direccion = "Desconocido";
        }

        void set_nombre(string _nombre){
            nombre = _nombre;
        }
        void set_telefono(string _telefono){
            telefono = _telefono;
        }
        void set_correo(string _correo){
            correo = _correo;
        }
        void set_direccion(string _direccion){
            direccion = _direccion;
        }

        void imprime_datos(){
            cout << "Nombre: " << nombre << endl;
            cout << "Telefono: " << telefono << endl;
            cout << "Correo: " << correo << endl;
            cout << "Direccion: " << direccion << endl;
        }
};

#endif