#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "persona.h"


class Estudiante
{
public:

    //Constructor Destructor
    Estudiante();
    ~Estudiante();

    //Vector para guardar las notas
    vector<int> notas;

};

#endif // ESTUDIANTE_H
