#include "pelicula.h"

int Pelicula::getID() const
{
    return ID;
}

void Pelicula::setID(int newID)
{
    ID = newID;
}

const string &Pelicula::getTitulo() const
{
    return titulo;
}

void Pelicula::setTitulo(const string &newTitulo)
{
    titulo = newTitulo;
}

int Pelicula::getDuracion() const
{
    return duracion;
}

void Pelicula::setDuracion(int newDuracion)
{
    duracion = newDuracion;
}

bool Pelicula::getEstreno() const
{
    return estreno;
}

void Pelicula::setEstreno(bool newEstreno)
{
    estreno = newEstreno;
}

const string &Pelicula::getHora() const
{
    return hora;
}

void Pelicula::setHora(const string &newHora)
{
    hora = newHora;
}

string Pelicula::toString()
{
    string aux;
    if (this->estreno){
        aux = "* ESTRENO *";
    } else {
        aux = " ";
    }
    return to_string(this->ID) + " - [" + this->hora + "] " + this->titulo + " (" + to_string(this->duracion) + ") " + aux + "\n";
}

Pelicula::Pelicula()
{

}
