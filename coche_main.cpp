#include<iostream>
# include<stdio.h>

# include "Dueno.h"
using namespace std;

int main() {
    Dueno javier;
    Coche jetta;
    Coche volvo;
    Motor motor_coche1;
    Motor motor_coche2;

    javier.set_nombre("Javier");
    javier.set_telefono("4428144935");
    javier.set_correo("javiersito@gmail.com");
    javier.set_direccion("Calle Benito Juarez 25");
    javier.set_edad(34);

    jetta.set_tipo_coche("Jetta V");
    jetta.set_estado_coche("Buen estado");
    jetta.set_generacion(2005);
    jetta.set_color("Gris");
    jetta.set_puertas(4);

    volvo.set_tipo_coche("Volvo XC40 Recharge");
    volvo.set_estado_coche("Buen estado");
    volvo.set_generacion(2023);
    volvo.set_color("Blanca");
    volvo.set_puertas(4);

    motor_coche1.set_tipo_motor("Motor 1.9 TDI (Turbocharged Direct Injection)");
    motor_coche1.set_cilindros(3);
    motor_coche1.set_combustible("Diesel");
    motor_coche1.set_caballos(105);
    motor_coche1.set_torque(250);

    motor_coche2.set_tipo_motor("Dos motores electricos");
    motor_coche2.set_cilindros(0);
    motor_coche2.set_combustible("Eléctrico");
    motor_coche2.set_caballos(402);
    motor_coche2.set_torque(660);

    javier.imprime_datos();
    jetta.imprime_datos();
    motor_coche1.imprime_datos();
    volvo.imprime_datos();
    motor_coche2.imprime_datos();

    return 0;
};