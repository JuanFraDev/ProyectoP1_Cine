#ifndef PELICULA_H
#define PELICULA_H
#include <string>

using namespace std;

class Pelicula
{
private:
    int ID;
    string titulo;
    int duracion;
    bool estreno;
    string hora;
public:
    Pelicula();
    int getID() const;
    void setID(int newID);
    const string &getTitulo() const;
    void setTitulo(const string &newTitulo);
    int getDuracion() const;
    void setDuracion(int newDuracion);
    bool getEstreno() const;
    void setEstreno(bool newEstreno);
    const string &getHora() const;
    void setHora(const string &newHora);
    string toString();
};

#endif // PELICULA_H
