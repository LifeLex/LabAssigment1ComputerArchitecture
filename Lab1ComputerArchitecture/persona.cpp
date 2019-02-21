#include "persona.h"

Persona::Persona()
{


}

Persona::~Persona()
{


}

Persona:: Persona(string Nombre, string Apellido, string DNI)
{
    this->nombre= Nombre;
    this->apellido= Apellido;
    this->dni= DNI;

}

void Persona:: setNombre(string valor)
{
    nombre= valor;
}

void Persona::setApellido(string valor)
{
    apellido= valor;
}

void Persona::setDNI(string valor)
{
    dni= valor;
}

string Persona::getNombre()
{
    return nombre;
}

string Persona::getApellido()
{
    return apellido;
}

string Persona::getDNI()
{
    return dni;
}
