#include "Maestro.hpp"
#include <iostream>

Maestro::Maestro():Persona{} {

}

Maestro::Maestro(std::string nom, int ed, std::string dep):Persona{nom, ed} {
    departamento=dep;
}

std::string Maestro::getDepartamento(){
    return departamento;
}

void Maestro::muestraDatos(){
    std::cout << "Nombre: " << nombre << " Edad: " << edad << " Departamento: " << departamento << "\n";
}
