#include <iostream>
#include <string>
#include "Dato.h"

using namespace std;

Dato:: Dato() {
    codigo = 0;
    nombre = "Unknown";
    carrera = "Unknown";
}

    // Setters
void Dato::setCodigo(int c) { 
    codigo = c; 
}

void Dato::setNombre(const string& n) { 
    nombre = n; 
}

void Dato::setCarrera(const string& c) { 
    carrera = c; 
}

int Dato::getCodigo() const { 
    return codigo; 
}

string Dato::getNombre() const { 
    return nombre; 
}

string Dato::getCarrera() const { 
    return carrera; 
}
