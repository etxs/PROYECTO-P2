#include "Pasaporte.h"

Pasaporte::Pasaporte(string numeroMatricula, string fechaExpiracion, string nombre, string sexo, string estado, string nacionalidad, string edad) :
	Documentos(nombre, sexo, estado, nacionalidad, edad)
{
	this->numeroMatricula = numeroMatricula;
	this->fechaExpiracion = fechaExpiracion;
}

string Pasaporte::getnumeroMatricula()
{
	return string(numeroMatricula);
}

string Pasaporte::getfechaExpiracion()
{
	return string(fechaExpiracion);
}