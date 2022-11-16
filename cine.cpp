#include "cine.h"

Cine::Cine()
{

}

void Cine::setPeliculas()
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

void Cine::mostrarCartelera()
{
    cout << pelicula[0].toString();
    cout << pelicula[1].toString();
    cout << pelicula[2].toString();
    cout << pelicula[3].toString();
    cout << pelicula[4].toString();
}

void Cine::setSala()
{
    this->sala.setSala();
}

void Cine::mostrarSala()
{
    this->sala.getSala();
}

void Cine::comprarBoleto()
{
    string asiento, fila, columna, valid = "";
    int col;
    char fil;
    cout << "\nIngrese su asiento: ";
    getline(cin>>ws, asiento);
    valid = asiento.substr(2,1);
    fila = asiento.substr(0,1);
    columna = asiento.substr(1,1);
    col = stoi(columna);
    if(fila == "A" || fila == "a"){
        fil = 'A';
    } else if (fila == "B" || fila == "b"){
        fil = 'B';
    } else if (fila == "C" || fila == "c"){
        fil = 'C';
    } else if (fila == "D" || fila == "d"){
        fil = 'D';
    } else if (fila == "E" || fila == "e"){
        fil = 'E';
    } else {
        fil = 'N';
    }
    while ((col < 1 || col > 5) || (fil == 'N') || (valid != "")){
        cout << "Ingrese un asiento correcto [Ejemplo: A3]: ";
        getline(cin>>ws, asiento);
        valid = asiento.substr(2,1);
        columna = asiento.substr(1,1);
        col = stoi(columna);
        fila = asiento.substr(0,1);
        if(fila == "A" || fila == "a"){
            fil = 'A';
        } else if (fila == "B" || fila == "b"){
            fil = 'B';
        } else if (fila == "C" || fila == "c"){
            fil = 'C';
        } else if (fila == "D" || fila == "d"){
            fil = 'D';
        } else if (fila == "E" || fila == "e"){
            fil = 'E';
        } else {
            fil = 'N';
        }
    }
    cout << "Git";
    this->sala.setFila(fil);
    this->sala.setNumero(col);
    this->sala.setAsiento();

}
