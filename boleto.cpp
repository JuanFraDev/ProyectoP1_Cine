#include "boleto.h"

int Boleto::getSala() const
{
    return sala;
}

void Boleto::setSala(int newSala)
{
    sala = newSala;
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
        cout << vertical << "Hora: " << this->pelicula[sala-1].getHora();
        for(int i = 0; i <= 70 - 6 - this->pelicula[sala-1].getHora().size(); i++){
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
        cout << vertical << "Pelicula: " << this->pelicula[sala-1].getTitulo();
        for(int i = 0; i <= 70 - 10 - this->pelicula[sala-1].getTitulo().size(); i++){
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

void Boleto::setPelicula()
{
        pelicula[0].setID(1);
        pelicula[0].setTitulo("PANTERA NEGRA WAKANDA");
        pelicula[0].setDuracion(160);
        pelicula[0].setHora("15:35");
        pelicula[0].setEstreno(1);
        pelicula[1].setID(2);
        pelicula[1].setTitulo("EL PRODIGIO");
        pelicula[1].setDuracion(105);
        pelicula[1].setHora("18:00");
        pelicula[1].setEstreno(1);
        pelicula[2].setID(3);
        pelicula[2].setTitulo("BLACK ADAM");
        pelicula[2].setDuracion(125);
        pelicula[2].setHora("16:00");
        pelicula[2].setEstreno(0);
        pelicula[3].setID(4);
        pelicula[3].setTitulo("LILO LILO COCODRILO");
        pelicula[3].setDuracion(110);
        pelicula[3].setHora("13:10");
        pelicula[3].setEstreno(0);
        pelicula[4].setID(5);
        pelicula[4].setTitulo("PERSIGUIENDO UN SUENIO");
        pelicula[4].setDuracion(90);
        pelicula[4].setHora("14:10");
        pelicula[4].setEstreno(0);
}

Boleto::Boleto()
{

}
