#ifndef CINE_H
#define CINE_H
#include <string.h>
#include "pelicula.h"
#include "sala.h"
#include "boleto.h"

class Cine
{
private:
    float precioBoleto;
    Pelicula pelicula[5];
    Boleto boleto;
    Sala sala;
public:
    Cine();
    void setPeliculas();
    void mostrarCartelera();
    void setSala();
    void mostrarSala();
    void comprarBoleto();
};

#endif // CINE_H
