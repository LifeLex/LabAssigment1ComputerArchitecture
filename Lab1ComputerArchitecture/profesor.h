#ifndef PROFESOR_H
#define PROFESOR_H

#include "persona.h"
#include "estudiante.h"


class Profesor: public Persona
{
public:
    //Constructor Destructor
    Profesor();
    ~Profesor();

    //Funciones sobrecargadas
    void calificar(float nota1, Estudiante *alumno);
    void calificar(float nota1, float nota2, Estudiante *alumno);
    void calificar(float nota1, float nota2, float nota3, Estudiante *alumno);

    //Funciones Profesor
    void nuevoEstudiante(Estudiante *alumno);
    void imprimir(Persona *persona);
    void media(Estudiante *estudiante);
    void mejorMedia();
private:
    //vector que contiene la lista de alumnos
    vector <Estudiante> estudiantes;
};

#endif // PROFESOR_H
