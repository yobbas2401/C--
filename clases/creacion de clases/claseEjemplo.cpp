#include <iostream>
#include<string>

using namespace std;

class LibroCalificaciones
{
public:
   LibroCalificaciones (string nombre){ //inicializacion de objeto libro de calificaciones
      setNombrecurso(nombre); //llama la funcion establecer nombre de curso 
   }
   void setNombrecurso(string nombre){//funcion para establecer el nombre del curso
      nombreCurso=nombre; //asigna el nombre del curso a nombre curso
   }
    string GetNombrecurso(){ //funcion para obtener el nombre del curso
      return nombreCurso;
   }
    void mostrarMsg(/* args */){
       cout <<"hola Curso de C++"<<endl;
    }
    void mostrarMsg(string nombrecurso){
       cout <<"hola Curso de : "<< nombrecurso << endl;
    }
private:
string nombreCurso;
};



int main()
{
string nombrecurso;
LibroCalificaciones libro1("Estoy aprendiendo del curso de programacion ");//se crea un objeto libroCalificaciones
LibroCalificaciones libro2("ahora se como se crean las clases gracias a el curso ");  //se crea un objeto libroCalificaciones
cout<<libro1.GetNombrecurso()<<"de c++\n";
cout<<libro2.GetNombrecurso()<<"de c++\n";

/*cout << "introduzca el nombre del curso : ";
getline(cin, nombrecurso);
cout << endl;
msg.mostrarMsg(nombrecurso); //se llama la funcion mostrarmsg del objeto
*/

}