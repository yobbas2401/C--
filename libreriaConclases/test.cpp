#include <iostream>
#include ".\libroCalificaciones\libroCalificaciones.h"
using std::cout;
using std::endl;


int main()
{
libroCalificaciones libro2("Estoy aprendiendo del curso de programacion ");//se crea un objeto libroCalificaciones
libroCalificaciones libro3("ahora se como se crean las clases gracias a el curso ");  //se crea un objeto libroCalificaciones
cout<<libro2.GetNombrecurso()<<"de c++\n";
cout<<libro3.GetNombrecurso()<<"de c++\n";

/*cout << "introduzca el nombre del curso : ";
getline(cin, nombrecurso);
cout << endl;
msg.mostrarMsg(nombrecurso); //se llama la funcion mostrarmsg del objeto
*/
return 0;
}
def response( input ) :
	# Enter your code here
	response = []
	for i in range(1, input + 1):
		if (i % 3 == 0) and (i % 5 == 0):
			response.append('FizzBuzz')
		elif i % 3 == 0:
			response.append('Fizz')
		elif i % 5 == 0:
			response.append('Buzz')
		else:
			response.append(i)
	return response
