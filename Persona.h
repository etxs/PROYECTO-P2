#pragma once
#include "Documentos.h"
#include "Pasaporte.h"
#include "Identificacion.h"
#include <list>
#include <string>
#include <iostream>

using namespace std;

class Persona
{
private:
	list <Documentos> documentos;

public:
	void setListPasaporte(Pasaporte pasaporte);
	void setListIdentificacion(Identificacion identificacion);
	void verificar();
	int pasaporteUsuarios(string matricula, string pasaport, int puntaje);
};
//pasaporteUsuarios = pasaport
//setListPasaporte = pasaporte