#pragma once
#include "Documentos.h"

class Identificacion : public Documentos
{
private:
	string numeroPersona;

public:
	Identificacion(string numeroPersona, string nombre, string sexo, string estado, string nacionalidad, string edad);
	string getNumeroPersona();
};