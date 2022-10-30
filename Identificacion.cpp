#include "Identificacion.h"

Identificacion::Identificacion(string numeroPersona, string nombre, string sexo, string estado, string nacionalidad, string edad) :
	Documentos(nombre, sexo, estado, nacionalidad, edad)
{
	this->numeroPersona = numeroPersona;
}

string Identificacion::getNumeroPersona()
{
	return string(numeroPersona);
}