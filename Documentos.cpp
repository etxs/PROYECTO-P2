#include "Documentos.h"

Documentos::Documentos(string nombre, string sexo, string estado, string nacionalidad, string edad)
{
	this->nombre = nombre;
	this->sexo = sexo;
	this->estado = estado;
	this->nacionalidad = nacionalidad;
	this->edad = edad;
}

string Documentos::getNombre()
{
	return string(nombre);
}

string Documentos::getSexo()
{
	return string(sexo);
}

string Documentos::getEstado()
{
	return string(estado);
}

string Documentos::getNacionalidad()
{
	return string(nacionalidad);
}

string Documentos::getEdad()
{
	return string(edad);
}