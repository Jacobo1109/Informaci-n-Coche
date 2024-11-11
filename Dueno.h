/*
    Nombre - str
    Teléfono - int
    Correo - str
    Dirección - str
    Edad - int
    Coche - str
    */
# ifndef DUENO_H
# define DUENO_H

# include <iostream>
# include "Coche.h"

using namespace std;

class Dueno {
    private: 
        string nombre;
        string telefono;
        string correo;
        string direccion;
        int edad;
        Coche coche;

    public:
        Dueno() {
            nombre = "Desconocido";
            telefono = "Desconocido";
            correo = "Desconocido";
            direccion = "Desconocido";
            edad = 0;
        }

        Dueno(string _nombre, string _telefono, string _correo, string _direccion, int _edad, string _tipo_coche, string _estado_coche, int _generacion, string _color, int _puertas, string _tipo_motor, int _cilindros, string _combustible, int _caballos, int _torque) {
            nombre = _nombre;
            telefono = _telefono;
            correo = _correo;
            direccion = _direccion;
            edad = _edad;
            
            coche.set_tipo_coche(_tipo_coche);
            coche.set_estado_coche(_estado_coche);
            coche.set_generacion(_generacion);
            coche.set_color(_color);
            coche.set_puertas(_puertas);
            coche.set_tipo_motor(_tipo_motor);
            coche.set_cilindros(_cilindros);
            coche.set_combustible(_combustible);
            coche.set_caballos(_caballos);
            coche.set_torque(_torque);
        }
        string get_nombre() {
            return nombre;
        }
        string get_telefono() {
            return telefono;
        }
        string get_correo() {
            return correo;
        }
        string get_direccion() {
            return direccion;
        }
        int get_edad() {
            return edad;
        }

        // Coche.h
        string get_tipo_coche() {
            return coche.get_tipo_coche();
        }
        string get_estado_coche() {
            return coche.get_estado_coche();
        }
        int get_generacion() {
            return coche.get_generacion();
        }
        string get_color() {
            return coche.get_color();
        }
        int get_puertas() {
            return coche.get_puertas();
        }

        // Motor.h
        string get_tipo_motor() {
            return coche.get_tipo_motor();
        }
        int get_cilindros() {
            return coche.get_cilindros();
        }
        string get_combustible() {
            return coche.get_combustible();
        }
        int get_caballos() {
            return coche.get_caballos();
        }
        int get_torque() {
            return coche.get_torque();
        }
        void set_nombre(string _nombre) {
            nombre = _nombre;
        }
        void set_telefono(string _telefono) {
            telefono = _telefono;
        }
        void set_correo(string _correo) {
            correo = _correo;
        }
        void set_direccion(string _direccion) {
            direccion = _direccion;
        }
        void set_edad(int _edad) {
            edad = _edad;
        }

        // Coche.h
        void set_tipo_coche(string _tipo_coche){
            coche.set_tipo_coche(_tipo_coche);
        }
        void set_estado_coche(string _estado_coche){
            coche.set_estado_coche(_estado_coche);
        }
        void set_generacion(int _generacion){
            coche.set_generacion(_generacion);
        }
        void set_color(string _color){
            coche.set_color(_color);
        }
        void set_puertas(int _puertas){
            coche.set_puertas(_puertas);
        }

        //Motor.h
        void set_tipo_motor(string _tipo_motor){
            coche.set_tipo_motor(_tipo_motor);
        }
        void set_cilindros(int _cilindros){
            coche.set_cilindros(_cilindros);
        }
        void set_combustible(string _combustible){
            coche.set_combustible(_combustible);
        }
        void set_caballos(int _caballos){
            coche.set_caballos(_caballos);
        }
        void set_torque(int _torque){
            coche.set_torque(_torque);
        }
        void imprime_datos() {
            cout << "Nombre: " << nombre << endl;
            cout << "Telefono: " << telefono << endl;
            cout << "Corre electronico: " << correo << endl;
            cout << "Direccion: " << direccion << endl;
            cout << "Edad: " << edad << endl;
            cout << "----------------------" << endl;
            coche.imprime_datos();
        }
};

#endif