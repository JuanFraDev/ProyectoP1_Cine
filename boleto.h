#ifndef BOLETO_H
#define BOLETO_H
#include <iostream>
#include "pelicula.h"

using namespace std;

class Boleto
{
private:
    int sala;
    Pelicula pelicula[5];
    char fila;
    int columna;
public:
    Boleto();

    int getSala() const;
    void setSala(int newSala);
    char getFila() const;
    void setFila(char newFila);
    int getColumna() const;
    void setColumna(int newColumna);
    void getBoleto();
    void setPelicula();
};

#endif // BOLETO_H
