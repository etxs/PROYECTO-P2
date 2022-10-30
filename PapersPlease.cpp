#include <iostream>
#include "iomanip"
#include "Persona.h"
#include "Identificacion.h"
#include "Pasaporte.h"

using namespace std;

class Intro
{
public:
    void iniciarIntro();
};

class Menu
{
public:
    int op;
    void iniciarMenu();
};
class Juego
{
public:
    void iniciarJuego();
};

//Objetos
Menu objetoMenu;
Intro objetoIntro;
Juego objetoJuego;

int main()
{
    system("Title ¡Gloria Arstotzka!");//titulo de ventana
    system("Color 7c");//color 7 blanco y 8 gris
//pasaporteUsuarios = pasaport
//setListPasaporte = pasaporte
    Pasaporte pasapo1("01", "29/10/2022", "Jung Hoseok", "Hombre", "Seul", "Coreano", "28");// Lista de personas
    Identificacion inden1("01", "Jung Hoseok", "Hombre", "Seul", "Coreano", "28");

    Pasaporte pasapo2("02", "02/10/2023", "Kim Seokjin", "Hombre", "Suwon", "Coreano", "30");
    Identificacion inden2("02", "Kim Seok Jin", "Hombre", "Seul", "Coreano", "31");

    Pasaporte pasapo3("03", "01/08/2023", "Min Yoongi", "Hombre", "Jeonju", "Europeo", "28");
    Identificacion inden3("03", "Min Yoongi", "Hombre", "Jeju", "Europeo", "28");

    Pasaporte pasapo4("04", "01/02/2029", "Park Jimin", "Hombre", "Isla de Jeju", "Coreano", "26");
    Identificacion inden4("04", "Park Jimin", "Hombre", "Isla de Jeju", "Coreano", "26");

    Pasaporte pasapo5("05", "12/12/2024", "Kim Taehyung", "Hombre", "Busan", "Coreano", "24");
    Identificacion inden5("05", "Kim Taehyung", "Hombre", "Busan", "Coreano", "24");

    Pasaporte pasapo6("06", "05/05/2025", "Jeon Jungkook", "Hombre", "Ulsan", "Coreano", "22");
    Identificacion inden6("06", "Jeon Hoseok", "Hombre", "Ulsan", "Coreano", "22");

    Persona personas;
    personas.setListPasaporte(pasapo1);
    personas.setListIdentificacion(inden1);

    personas.setListPasaporte(pasapo2);
    personas.setListIdentificacion(inden2);

    personas.setListPasaporte(pasapo3);
    personas.setListIdentificacion(inden3);

    personas.setListPasaporte(pasapo4);
    personas.setListIdentificacion(inden4);

    personas.setListPasaporte(pasapo5);
    personas.setListIdentificacion(inden5);

    personas.setListPasaporte(pasapo6);
    personas.setListIdentificacion(inden6);

    objetoIntro.iniciarIntro();
    objetoJuego.iniciarJuego();
    objetoMenu.iniciarMenu();
    personas.verificar();
}

void Intro::iniciarIntro()
{
    cout << "\n\n\n\tSu nombre ha salido elegido en la loteria de trabajo";
    cout << "\n\n\n\tSiguiente \n\n\n";
    system("PAUSE");
    system("cls");//Limpia la pantalla de la consola

    cout << "\n\n\n\tPreséntese inmediatamente ante el Ministerio de Admisiones, en el puesto fronterizo de Grestin.";
    cout << "\n\n\n\tSiguiente\n\n\n";
    system("PAUSE");
    system("cls");//Limpia la pantalla de la consola
    
    cout << "\n\n\n\tSe le proporcionará una vivienda de clase 8 en Grestin Oriental, en la cual podrá alojarse junto a su familia.";
    cout << "\n\n\n\tSiguiente\n\n\n";
    system("PAUSE");
    system("cls");//Limpia la pantalla de la consola
   
    cout << "\n\n\t-----------------------------------------------------";
    cout << "\n\n\n\n\n\n\t              Gloria a Arstotzka";
    cout << "\n\n\n\n\t-----------------------------------------------------\n\n\n\n";
    system("PAUSE");
    //Limpia la pantalla de la consola
    
};

void Juego::iniciarJuego()
{
    system("cls");//Limpia la pantalla de la consola
    int fecha = 11;
    cout << "\n\n\t-------------------------------------\n\n";
    cout << "\n\t         " << fecha << " de octube del 2001\n\n";
    cout << "\n\t-------------------------------------\n\n";
    system("PAUSE");
};

void Menu::iniciarMenu()
{
    system("cls");//Limpia la pantalla de la consola
    cout << "Bienvenido a Papers please";
    cout << "\n\n";
    cout << "\n\n\n\t- JUEGO EN PAUSA -\n\n\n\n" << endl;
    cout << "MENU DE OPCIONES : " << endl << "[1] Seguir jugando " << endl << "[2] Reiniciar juego" << endl << "[3] Salir" << endl;
    cin >> op;// Para decidir

    if (op == 1) // seguir jugando
    {
        system("cls");
        objetoJuego.iniciarJuego();
        Persona personas;
        personas.verificar();
    }

    if (op == 2)//Reiniciar el juego
    {
        system("cls");
        objetoIntro.iniciarIntro();
    }

    else if (op == 3)
    {
        cout << "VUELVA PRONTO! :)";
        exit(-1);
        //return 0;
    }
}