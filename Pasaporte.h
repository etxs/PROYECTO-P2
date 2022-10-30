#pragma once
#include "Documentos.h"
#include <string>

class Pasaporte : public Documentos
{
private:
	string numeroMatricula, fechaExpiracion;

public:
	Pasaporte(string numeroMatricula, string fechaExpiracion, string nombre, string sexo, string estado, string nacionalidad, string edad);
	string getnumeroMatricula();
	string getfechaExpiracion();
};