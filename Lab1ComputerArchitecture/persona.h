#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <vector>


using namespace std;

class Persona
{
public:
    //Constructor
    Persona();

    //Destructor
    ~Persona();

    //Constructor Sobrecargado
    Persona(string Nombre, string Apellido, string DNI);

    //Setters
    void setNombre(string valor);
    void setApellido(string valor);
    void setDNI(string valor);

    //Getters
    string getNombre();
    string getApellido();
    string getDNI();


private:
    string nombre;
    string apellido;
    string dni;

};

#endif // PERSONA_H
