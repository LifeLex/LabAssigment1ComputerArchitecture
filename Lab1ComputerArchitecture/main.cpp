#include <iostream>

#include <persona.h>
#include <estudiante.h>
#include <profesor.h>

#include "persona.h"
#include "estudiante.h"
#include "profesor.h"

using namespace std;


void Calificando();

int main()
{
    cout<< "Practica 1 ARCO"<<endl;
    cout<< "Autor: Alejandro Perez Gancedo"<<endl;
    Calificando();
    return 0;
}

void Calificando()
{
    //Creacion Profesor
    Profesor *profesor= new Profesor();
    profesor->setNombre("Martin Rekkles Larson");
    profesor->setDNI("00000001A");

    //Creacion estudiantes
    Estudiante *estudiante1 = new Estudiante();
    estudiante1->setNombre("Marcel Hirscher");
    estudiante1->setDNI("12345678A");

    Estudiante *estudiante2 = new Estudiante();
    estudiante2->setNombre("Ted Ligety");
    estudiante2->setDNI("87654321B");

    Estudiante *estudiante3 = new Estudiante();
    estudiante3->setNombre("Lindsay Vonn");
    estudiante3->setDNI("65432198C");

    Estudiante *estudiante4 = new Estudiante();
    estudiante4->setNombre("Mikaela Shiffrin");
    estudiante4->setDNI("98765432E");

    Estudiante *estudiante5 = new Estudiante();
    estudiante5->setNombre("Bode Miller");
    estudiante5->setDNI("70986543F");

    Estudiante *estudiante6 = new Estudiante();
    estudiante6->setNombre("Aymar Navarro");
    estudiante6->setDNI("09876543G");

    //Añadir estudiantes por el profesor
    profesor->nuevoEstudiante(estudiante1);
    profesor->nuevoEstudiante(estudiante2);
    profesor->nuevoEstudiante(estudiante3);
    profesor->nuevoEstudiante(estudiante4);
    profesor->nuevoEstudiante(estudiante5);
    profesor->nuevoEstudiante(estudiante6);

    //Añadir notas a los estudiantes
    profesor->calificar(2, estudiante1);
    profesor->calificar(6, 8, estudiante2);
    profesor->calificar(3, 7, 4,estudiante3);
    profesor->calificar(4, 5, estudiante4);
    profesor->calificar(8, 9, 7,estudiante5);
    profesor->calificar(3, 10, 7, estudiante6);

    //Imprimir Alumnos con nombre, medias, y mejor media

    cout<<"Profesor:"<<endl;
    cout<<"--------------------------------------"<<endl;
    profesor->imprimir(profesor);
    cout<<"--------------------------------------"<<endl;

    cout<<"Alumnos:"<<endl;
    cout<<"--------------------------------------"<<endl;
    profesor->imprimir(estudiante1);
    profesor->media(estudiante1);

    cout<<"--------------------------------------"<<endl;

    profesor->imprimir(estudiante2);
    profesor->media(estudiante2);

    cout<<"--------------------------------------"<<endl;

    profesor->imprimir(estudiante3);
    profesor->media(estudiante3);

    cout<<"--------------------------------------"<<endl;

    profesor->imprimir(estudiante4);
    profesor->media(estudiante4);

    cout<<"--------------------------------------"<<endl;

    profesor->imprimir(estudiante5);
    profesor->media(estudiante5);

    cout<<"--------------------------------------"<<endl;

    profesor->imprimir(estudiante6);
    profesor->media(estudiante6);

    cout<<"--------------------------------------"<<endl;

    profesor->mejorMedia();

    cout<<"--------------------------------------"<<endl;

}
