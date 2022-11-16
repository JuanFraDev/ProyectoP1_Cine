#ifndef BOLETO_H
#define BOLETO_H
#include <iostream>
#include "pelicula.h"

using namespace std;

class Boleto
{
private:
    int sala;
    Pelicula pelicula;
    char fila;
    int columna;
public:
    Boleto();

    int getSala() const;
    void setSala();
    char getFila() const;
    void setFila(char newFila);
    int getColumna() const;
    void setColumna(int newColumna);
    void getBoleto();
};

#endif // BOLETO_H
