#include <iostream>
#include<string>
#include "libroCalificaciones.h"

using std::cout;
using std::endl;


   libroCalificaciones::libroCalificaciones (string nombre)
   {
   setNombrecurso(nombre); //llama la funcion establecer nombre de curso 
   }
   void libroCalificaciones::setNombrecurso(string nombre)
   {
      nombreCurso=nombre; //asigna el nombre del curso a nombre curso
   }
    string libroCalificaciones::GetNombrecurso()
    { 
      //return nombreCurso;
      return "sadasd";
   }
    void libroCalificaciones::mostrarMsg(/* args */)
    {
       cout <<"hola Curso de C++"<<endl;
    }
    void libroCalificaciones::mostrarMsg(string nombrecurso)
    {
       cout <<"hola Curso de : "<< nombrecurso << endl;
    }
