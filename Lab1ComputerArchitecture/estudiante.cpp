#include "estudiante.h"

Estudiante::Estudiante()
{

}

Estudiante::~Estudiante()
{

}

void Estudiante::setNotas(int nota)
{
    notas.push_back(nota);

}

vector <int> Estudiante::verNotas()
{
    return notas;
}

int Estudiante::verNumeroDeNotas()
{
    return notas.size();
}

void Estudiante::addNota(int nota)
{
    notas.push_back(nota);
}

vector<int> Estudiante::getNotas()
{
    return notas;
}
