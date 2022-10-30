#pragma once
#include <string>

using namespace std;

class Documentos
{
private:
	string nombre, sexo, estado, nacionalidad, edad;

public:
	Documentos(string nombre, string sexo, string estado, string nacionalidad, string edad);
	string getNombre();
	string getSexo();
	string getEstado();
	string getNacionalidad();
	string getEdad();
};