
#include <string>

using std::string;

class libroCalificaciones
{
public:
    libroCalificaciones(string);
    void setNombrecurso(string);
    string GetNombrecurso();
    void mostrarMsg(/* args */);
    void mostrarMsg(string);

private:
    string nombreCurso;
};
