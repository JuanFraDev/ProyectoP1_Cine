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
    this->sala[0].setSala();
    this->sala[1].setSala();
    this->sala[2].setSala();
    this->sala[3].setSala();
    this->sala[4].setSala();
}

void Cine::mostrarSala()
{
    int id;
    cout << "Ingrese el id de la pelicula: ";
    cin >> id;
    while (id < 1 || id > 5){
        cout << "Ingrese un id valido:_";
        cin >> id;
    }
    cout << endl;
    cout << pelicula[id-1].toString();
    this->sala[id-1].getSala();
}

void Cine::comprarBoleto()
{
    string asiento, fila, columna;
    int col, num, id;
    char fil;
    int aux, auxTamanio;
    cout << "Ingrese el ID de la pelicula: ";
    cin >> id;
    while(id < 1 || id > 5){
        cout << "Ingrese un id valido: ";
        cin >> id;
    }
    cout << "Ingrese la cantidad de boletos que desea comprar: ";
    cin >> num;
    cout << "Seleccione los asientos: " << endl;
    this->sala[id-1].getSala();
    for(int i = 1; i <= num; i++){
        cout << "\nIngrese el asiento " << i << ": ";
        getline(cin>>ws, asiento);
        auxTamanio = asiento.length();
        fila = asiento.substr(0,1);
        columna = asiento.substr(1,1);
        aux = isdigit(asiento[1]);
        while (aux == 0){
            cout << "Error, fila no valida!" << endl;
            cout << "\nIngrese el asiento " << i << ": ";
            getline(cin>>ws, asiento);
            auxTamanio = asiento.length();
            fila = asiento.substr(0,1);
            columna = asiento.substr(1,1);
            aux = isdigit(asiento[1]);
        }
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
        while ((col < 1 || col > 5) || (fil == 'N') || (auxTamanio < 2 || auxTamanio > 2)){
            cout << "Ingrese un asiento correcto [Ejemplo: A3]: ";
            getline(cin>>ws, asiento);
            auxTamanio = asiento.length();
            columna = asiento.substr(1,1);
            aux = isdigit(asiento[1]);
            while (aux == 0){
                cout << "Error, fila no valida!" << endl;
                cout << "\nIngrese el asiento " << i << ": ";
                getline(cin>>ws, asiento);
                auxTamanio = asiento.length();
                fila = asiento.substr(0,1);
                columna = asiento.substr(1,1);
                aux = isdigit(asiento[1]);
            }
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
        this->sala[id-1].setFila(fil);
        this->sala[id-1].setNumero(col);
        this->sala[id-1].setAsiento();
        this->boleto[cont].setColumna(col);
        this->boleto[cont].setFila(fil);
        this->boleto[cont].setSala(id);
        this->boleto[cont].setPelicula();
        cont++;
    }

}

void Cine::resumenCompra()
{
    cout << endl;
    for(int i = 0; i < cont; i++){
        this->boleto[i].getBoleto();
        cout << endl;
    }
    cout << "Precio final: $" << cont*precioBoleto << "\n" << endl;

}
