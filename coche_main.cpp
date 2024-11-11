#include<iostream>
# include<stdio.h>

# include "Dueno.h"
using namespace std;

int main() {
    Dueno javier;
    
    javier.set_nombre("Javier");
    javier.set_telefono("4428144935");
    javier.set_correo("javiersito@gmail.com");
    javier.set_direccion("Calle Benito Juarez 25");
    javier.set_edad(34);
    javier.set_tipo_coche("Jetta V");
    javier.set_estado_coche("Buen estado");
    javier.set_generacion(2005);
    javier.set_color("Gris");
    javier.set_puertas(4);
    javier.set_tipo_motor("Motor 1.9 TDI (Turbocharged Direct Injection)");
    javier.set_cilindros(3);
    javier.set_combustible("Diesel");
    javier.set_caballos(105);
    javier.set_torque(250);

    javier.imprime_datos();

    return 0;
};