#ifndef CINE_H
#define CINE_H
#include <string.h>
#include "pelicula.h"
#include "sala.h"
#include "boleto.h"

class Cine
{
private:
    float precioBoleto = 3.15;
    Pelicula pelicula[5];
    Boleto boleto[10];
    Sala sala[5];
    int cont = 0;
public:
    Cine();
    void setPeliculas();
    void mostrarCartelera();
    void setSala();
    void mostrarSala();
    void comprarBoleto();
    void resumenCompra();
};

#endif // CINE_H
