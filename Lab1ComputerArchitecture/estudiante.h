#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "persona.h"


class Estudiante: public Persona
{
public:

    //Constructor Destructor
    Estudiante();
    ~Estudiante();

    //Vector para guardar las notas
    vector<int> notas;


    //Setters
    void setNotas(int notas);

    //Getters
    vector<int> getNotas();

    //Funciones
    void addNota(int nota);
    vector<int> verNotas();
    int verNumeroDeNotas();

};

#endif // ESTUDIANTE_H
