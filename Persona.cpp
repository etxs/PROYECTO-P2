#include "Persona.h"
//pasaporteUsuarios = pasaport
//setListPasaporte = pasaporte
void Persona::setListPasaporte(Pasaporte pasaporte)
{
	documentos.push_back(pasaporte);
}

void Persona::setListIdentificacion(Identificacion identificacion)
{
	documentos.push_back(identificacion);
}

void Persona::verificar()
{
	int p = 0;
	string aux1, aux2;
	string a[10] = { "Jung Hoseok", "Hombre", "Seul", "Coreano", "28", "Jung Hoseok", "Hombre", "Seul", "Coreano", "28" };
	string b[10] = { "Kim Seokjin", "Hombre", "Suwon", "Coreano", "30", "Kim Seok Jin", "Hombre", "Seul", "Coreano", "31" };
	string c[10] = { "Min Yoongi", "Hombre", "Jeonju", "Europeo", "28", "Min Yoongi", "Hombre", "Jeju", "Europeo", "28" };
	string d[10] = {"Park Jimin", "Hombre", "Isla de Jeju", "Coreano", "26", "Park Jimin", "Hombre", "Isla de Jeju", "Coreano", "26"};
	string f[10] = { "Kim Taehyung", "Hombre", "Busan", "Coreano", "24", "Kim Taehyung", "Hombre", "Busan", "Coreano", "24" };
	string g[10] = { "Jeon Jungkook", "Hombre", "Ulsan", "Coreano", "22", "Jeon Hoseok", "Hombre", "Ulsan", "Coreano", "22" };

	system("cls");
	cout << "Primer solicitante:  \n";//datos correctos
	cout << "INE:  \n";
	cout << "Nombre: " << a[0] << endl;
	cout << "Sexo: " << a[1] << endl;
	cout << "Estado: " << a[2] << endl;
	cout << "Nacionalidad: " << a[3] << endl;
	aux1 = a[3];
	cout << "Edad: " << a[4] << endl;

	cout << "\n";

	cout << "Pasaporte:  \n";
	cout << "Nombre: " << a[5] << endl;
	cout << "Sexo: " << a[6] << endl;
	cout << "Estado: " << a[7] << endl;
	cout << "Nacionalidad: " << a[8] << endl;
	aux2 = a[8];
	cout << "Edad: " << a[9] << endl;

	p = pasaporteUsuarios(aux1, aux2, p);

	cout << "\n";
	cout << "Tu puntaje actual es: " << p << endl;

	cout << "\n";
	system("Pause");
	system("cls");


	cout << "Segundo solicitante:  \n";
	cout << "INE:  \n";
	cout << "Nombre: " << b[0] << endl;
	cout << "Sexo: " << b[1] << endl;
	cout << "Estado: " << b[2] << endl;
	aux1 = b[2];
	cout << "Nacionalidad: " << b[3] << endl;
	cout << "Edad: " << b[4] << endl;

	cout << "Pasaporte:  \n";
	cout << "Nombre: " << b[5] << endl;
	cout << "Sexo: " << b[6] << endl;
	cout << "Estado: " << b[7] << endl;
	aux2 = b[7];
	cout << "Nacionalidad: " << b[8] << endl;

	cout << "Edad: " << b[9] << endl;

	p = pasaporteUsuarios(aux1, aux2, p);
	cout << "\n";

	cout << "Tu puntaje actual es: " << p << endl;

	cout << "\n";
	system("Pause");
	system("cls");

	cout << "Tercer solicitante:  \n";
	cout << "INE:  \n";
	cout << "Nombre: " << c[0] << endl;
	cout << "Sexo: " << c[1] << endl;
	cout << "Estado: " << c[2] << endl;
	aux1 = c[2];
	cout << "Nacionalidad: " << c[3] << endl;
	cout << "Edad: " << c[4] << endl;

	cout << "\n";

	cout << "Pasaporte:  \n";
	cout << "Nombre: " << c[5] << endl;
	cout << "Sexo: " << c[6] << endl;
	cout << "Estado: " << c[7] << endl;
	aux2 = c[7];
	cout << "Nacionalidad: " << c[8] << endl;
	cout << "Edad: " << c[9] << endl;

	p = pasaporteUsuarios(aux1, aux2, p);
	cout << "\n";

	cout << "Tu puntaje actual es: " << p << endl;

	cout << "\n";

	cout << "\n";
	system("Pause");
	system("cls");

	cout << "Cuarto solicitante:  \n"; //datos correctos
	cout << "INE:  \n";
	cout << "Nombre: " << d[0] << endl;
	cout << "Sexo: " << d[1] << endl;
	cout << "Estado: " << d[2] << endl;
	cout << "Nacionalidad: " << d[3] << endl;
	aux1 = d[3];
	cout << "Edad: " << d[4] << endl;

	cout << "\n";

	cout << "Pasaporte:  \n";
	cout << "Nombre: " << d[5] << endl;
	cout << "Sexo: " << d[6] << endl;
	cout << "Estado: " << d[7] << endl;
	cout << "Nacionalidad: " << d[8] << endl;
	aux2 = d[8];
	cout << "Edad: " << d[9] << endl;

	p = pasaporteUsuarios(aux1, aux2, p);
	cout << "\n";

	cout << "Tu puntaje actual es: " << p << endl;

	cout << "\n";
	cout << "\n";
	system("Pause");
	system("cls");

	cout << "Quinto solicitante:  \n";//datos correctos
	cout << "INE:  \n";
	cout << "Nombre: " << f[0] << endl;
	cout << "Sexo: " << f[1] << endl;
	cout << "Estado: " << f[2] << endl;
	cout << "Nacionalidad: " << f[3] << endl;
	aux1 = f[3];
	cout << "Edad: " << f[4] << endl;

	cout << "\n";

	cout << "Pasaporte:  \n";
	cout << "Nombre: " << f[5] << endl;
	cout << "Sexo: " << f[6] << endl;
	cout << "Estado: " << f[7] << endl;
	cout << "Nacionalidad: " << f[8] << endl;
	aux2 = f[8];
	cout << "Edad: " << f[9] << endl;

	p = pasaporteUsuarios(aux1, aux2, p);
	cout << "\n";

	cout << "Tu puntaje actual es: " << p << endl;

	cout << "\n";
	cout << "\n";
	system("Pause");
	system("cls");

	cout << "Sexto solicitante:  \n";
	cout << "INE:  \n";
	cout << "Nombre: " << g[0] << endl;
	aux1 = g[0];
	cout << "Sexo: " << g[1] << endl;
	cout << "Estado: " << g[2] << endl;
	cout << "Nacionalidad: " << g[3] << endl;
	
	cout << "Edad: " << g[4] << endl;

	cout << "\n";

	cout << "Pasaporte:  \n";
	cout << "Nombre: " << g[5] << endl;
	aux2 = g[5];
	cout << "Sexo: " << g[6] << endl;
	cout << "Estado: " << g[7] << endl;
	cout << "Nacionalidad: " << g[8] << endl;

	cout << "Edad: " << g[9] << endl;

	p = pasaporteUsuarios(aux1, aux2, p);
	cout << "\n";

	cout << "Tu puntaje actual es: " << p << endl;

	cout << "\n";
	system("Pause");
	system("cls");
	system("Pause");

	if (p <= 0) {//poner 2 en vez de 0
		cout << "\n \n\tPerdiste menso :p \n \n \n \n \n \n";
	}
	else {
		cout << "\n \n\tSuerte en la proxima jugada! \n \n \n \n \n \n\n";
	}

}

int Persona::pasaporteUsuarios(string matricula, string pasaport, int puntaje)
{
	char pase = 0;
	cout << "\n\nAPROBAR VISADO? \n1=SI \n2=NO";
	cin >> pase;
	if (pase == 1)
	{
		if (matricula == pasaport) {
			cout << "Este cuidadado tiene sus datos en forma y orden :) \n";
			puntaje++;
		}
		else {
			cout << "Dejaste pasar a un terrorista malvado! xc\n";
			puntaje--;
		}
	}
	else if (pase == 2)
	{
		if (matricula == pasaport) {
			cout << "ERROR!, este cuidadado tiene sus datos correctamente ;( \n";
			puntaje--;
		}
		else {
			cout << "Evitaste que pasara un horrible terrorista!:D \n";
			puntaje++;
		}
	}
	return puntaje;
}