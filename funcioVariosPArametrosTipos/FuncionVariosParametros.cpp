#include <ostream>
#include <iostream>
#include <stdarg.h> // macros parámetros variables
#include <string.h> // función strle
#include <stdio.h>

using namespace std;
void param_test(char *...);
void param_test(char *tipos...)
{
    int i;
    va_list ap;          // ap es la lista de parámetros
    va_start(ap, tipos); // inicialización lista de param.
    i = strlen(tipos);   // la longitud de la cadena es el nº de param
                         // nuestra función reconoce tipos enteros y tipos reales (los reales sólo de tipo
                         // double).
    for (int j = 0; j < i; j++)
    {
        switch (*tipos)
        {
        case 'e':
            int iv = va_arg(ap, int);
            cout<< "Parámetro " << j << " = " << iv << " de tipo entero\n";
            break;
        case 'r':
            double dv = va_arg(ap, double);
            cout<< "Parámetro " << j << " = " << dv << " de tipo real\n";
            break;
        default:
            cout<< "Parámetro " << j << " de tipo desconocido\n";
            return;
        }       // end switch
    }           // end for
    va_end(ap); // terminamos con la lista de param.
}
void main(void)
{
    param_test("eer", 12, 5, 5.35);
}