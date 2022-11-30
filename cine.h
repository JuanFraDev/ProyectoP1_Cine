#ifndef CINE_H
#define CINE_H
#include <string.h>
#include <ctime>
#include <iomanip>
#include "pelicula.h"
#include "sala.h"
#include "boleto.h"

class Cine
{
private:
    int adulto;
    int nino;
    int especial;
    float IVA = 0.12;
    float BoletoEstandar = 5;
    float BoletoNino = 4.5;
    float BoletoEspecial = 2.5;
    Pelicula pelicula[5];
    Boleto boleto[30];
    Sala sala[5];
    int cont = 0;
    bool cedula;
public:
    Cine();
    void setPeliculas();
    void mostrarCartelera();
    void setSala();
    void mostrarSala();
    void comprarBoleto();
    void resumenCompra();
    void setCedula(string);
    bool getCedula() const;
    int validNum(string);
    char estFila(string);
};

#endif // CINE_H
