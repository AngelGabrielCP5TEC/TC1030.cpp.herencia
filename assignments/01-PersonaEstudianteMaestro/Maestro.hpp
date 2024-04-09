#pragma once

#include "Persona.hpp"
#include <string>

class Maestro: public Persona {
    private:
        std::string departamento;
    public:
        Maestro();
        Maestro(std::string nom, int ed, std::string dep);
        std::string getDepartamento();
        void setDepartamento(std::string dep);
        void muestraDatos();
};