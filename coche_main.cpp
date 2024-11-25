#include <iostream>
#include "Dueno.h"
#include "Coche_combustion.h"
#include "Coche_electrico.h"

using namespace std;

int main() {
    Motor motor_coche1;
    motor_coche1.set_tipo_motor("Motor 1.9 TDI (Turbocharged Direct Injection)");
    motor_coche1.set_cilindros(3);
    motor_coche1.set_combustible("Diesel");
    motor_coche1.set_caballos(105);
    motor_coche1.set_torque(250);

    Motor motor_coche2;
    motor_coche2.set_tipo_motor("Dos motores electricos");
    motor_coche2.set_cilindros(0);
    motor_coche2.set_combustible("Electrico");
    motor_coche2.set_caballos(402);
    motor_coche2.set_torque(660);

    Coche_combustion* jetta = new Coche_combustion();
    jetta->set_tipo_coche("Jetta V");
    jetta->set_estado_coche("Buen estado");
    jetta->set_generacion(2005);
    jetta->set_color("Gris");
    jetta->set_puertas(4);
    jetta->set_motor(motor_coche1);
    jetta->set_capacidad(55.0);

    Coche_electrico* volvo = new Coche_electrico();
    volvo->set_tipo_coche("Volvo XC40 Recharge");
    volvo->set_estado_coche("Buen estado");
    volvo->set_generacion(2023);
    volvo->set_color("Blanco");
    volvo->set_puertas(4);
    volvo->set_motor(motor_coche2);
    volvo->set_autonomia(418);

    Dueno javier;
    javier.set_nombre("Javier");
    javier.set_telefono("4428144935");
    javier.set_correo("javiersito@gmail.com");
    javier.set_direccion("Calle Benito Juarez 25");
    javier.set_edad(34);
    javier.set_coche(jetta);


    Dueno maria;
    maria.set_nombre("Maria");
    maria.set_telefono("4421780772");
    maria.set_correo("marianita@gmail.com");
    maria.set_direccion("Calle Benito Juarez 25");
    maria.set_edad(32);
    maria.set_coche(volvo);

    javier.imprime_datos();

    cout << "----------------------" << endl;

    maria.imprime_datos();

    return 0;
}