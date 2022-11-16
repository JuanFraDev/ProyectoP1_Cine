#include "boleto.h"

int Boleto::getSala() const
{
    return sala;
}

void Boleto::setSala()
{
    sala = pelicula.getID();
}

char Boleto::getFila() const
{
    return fila;
}

void Boleto::setFila(char newFila)
{
    fila = newFila;
}

int Boleto::getColumna() const
{
    return columna;
}

void Boleto::setColumna(int newColumna)
{
    columna = newColumna;
}

void Boleto::getBoleto()
{
    char corneris = -55, vertical = -70, cornerii = -56, cornersd = -69, cornerid = -68, horizontal = -51;
        string saludo = "Hello Wordl!", despedida = "Nos vemos mijin!";
        // linea superior
        cout << corneris;
        for(int i = 0; i < 70; i++){
            cout << horizontal;
        }
        cout << cornersd << endl;
        // fin linea superior
        // bloque 1 de texto entre lineas
        cout << vertical << "Sala: " << sala;
        for(int i = 0; i <= 70 - 7; i++){
            cout << " ";
        }
        cout << vertical << endl;
        // fin bloque 1 de texto entre lineas
        // bloque 2 de texto entre lineas
        cout << vertical << "Hora: " << this->pelicula.getHora();
        for(int i = 0; i <= 70 - 6 - this->pelicula.getHora().size(); i++){
            cout << " ";
        }
        cout << vertical << endl;
        // fin bloque 2 de texto entre lineas
        // bloque 3 de texto entre lineas
        cout << vertical << "Asiento: " << fila << columna;
        for(int i = 0; i <= 70 - 11; i++){
            cout << " ";
        }
        cout << vertical << endl;
        // fin bloque 3 de texto entre lineas
        // bloque 4 de texto entre lineas
        cout << vertical << "Pelicula: " << this->pelicula.getTitulo();
        for(int i = 0; i <= 70 - 10 - this->pelicula.getTitulo().size(); i++){
            cout << " ";
        }
        cout << vertical << endl;
        // fin bloque 4 de texto entre lineas
        // linea inferior
        cout << cornerii;
        for(int i = 0; i < 70; i++){
            cout << horizontal;
        }
        cout << cornerid << endl;
        // fin linea inferior
}

Boleto::Boleto()
{

}
