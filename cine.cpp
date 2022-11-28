#include "cine.h"

void Cine::setCedula(string cedula)
{
    int region, sumPares = 0, sumImpares = 0, final, total, aux, totalParcial;
    this->cedula = true;
    if(cedula.size() != 10){
        this->cedula = false;
    } else{
        for(int i = 0; i < cedula.size(); i++){
            if (!isdigit(cedula[i])){
                this->cedula = false;
            }
        }
        if(this->cedula == true){
            region = stoi(cedula.substr(0,2));
            if (region < 1 || region > 24){
                this->cedula = false;
            } else {
                final = stoi(cedula.substr(9,1));
                for(int i = 0; i < cedula.size(); i+=2){
                    if(i != 8){
                        sumPares += stoi(cedula.substr(i+1,1));
                    }
                    aux = stoi(cedula.substr(i,1));
                    aux *= 2;
                    if(aux > 9){
                        aux -= 9;
                    }
                    sumImpares += aux;
                }
                total = sumPares + sumImpares;
                totalParcial = total/10;
                totalParcial = (totalParcial + 1) * 10;
                totalParcial = totalParcial - total;
                if(totalParcial != final){
                    this->cedula = false;
                }
            }

        }
    }
}

bool Cine::getCedula() const
{
    return cedula;
}

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
    string aux;
    cout << "\t\t = = = CARTELERA DE CINE MEOWING = = =\n" << endl;
    cout << pelicula[0].toString();
    cout << pelicula[1].toString();
    cout << pelicula[2].toString();
    cout << pelicula[3].toString();
    cout << pelicula[4].toString();
    cout << endl;
    system("pause");
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
    char valid[1];
    cout << "\t\t = = = VISUALIZACION DE SALA = = =\n" << endl;
    cout << "Ingrese el id de la pelicula: ";
    cin >> valid;
    id = atoi(valid);
    while (id < 1 || id > 5){
        cout << "Ingrese un id valido: ";
        cin >> valid;
        id = atoi(valid);
    }
    cout << endl;
    cout << pelicula[id-1].toString();
    this->sala[id-1].getSala();
    cout << endl;
    system("pause");
}

void Cine::comprarBoleto()
{
    string asiento, fila, columna;
    int col, num = 0, opc, id, aux, auxTamanio, adultos = 0, ninos = 0, especiales = 0;
    char fil, valid[1], opcValid[1];
    cout << "\t\t = = = COMPRA DE BOLETOS = = =\n" << endl;
    cout << "Ingrese el ID de la pelicula: ";
    cin >> valid;
    id = atoi(valid);
    while(id < 1 || id > 5){
        cout << "Ingrese un id valido: ";
        cin >> valid;
        id = atoi(valid);
    }
    do{
        cout << endl;
        do{
            cout << "Ingresaran adultos? [1 - Si/2 - No]: ";
            cin >> opcValid;
            opc = atoi(opcValid);
        }while(opc < 1 || opc > 2);
        if(opc == 1){
            do{
                cout << "Indique la cantidad de adultos: ";
                cin >> valid;
                adultos = atoi(valid);
            } while(adultos < 1);
            num += adultos;
        }
        cout << endl;
        do{
            cout << "Ingresaran ninios? [1 - Si/2 - No]: ";
            cin >> opcValid;
            opc = atoi(opcValid);
        } while(opc < 1 || opc > 2);
        if(opc == 1){
            do{
                cout << "Indique la cantidad de ninios: ";
                cin >> valid;
                ninos = atoi(valid);
            } while(ninos < 1);
            num += ninos;
        }
        cout << endl;
        do{
            cout << "Ingresaran personas de tercera edad o discapacitados? [1 - Si/2 - No]: ";
            cin >> opc;
        } while(opc < 1 || opc > 2);
        if(opc == 1){
            do{
                cout << "Indique la cantidad de personas de tercera edad o discapacitados: ";
                cin >> valid;
                especiales = atoi(valid);
            } while(especiales < 1);
            num += especiales;
        }
    } while (num < 1);
    this->adulto = adultos;
    this->nino = ninos;
    this->especial = especiales;
    cout << "\nSeleccione los asientos: " << endl;
    this->sala[id-1].getSala();
    for(int i = 1; i <= num; i++){
        cout << "\nIngrese el asiento " << i << ": ";
        getline(cin>>ws, asiento);
        auxTamanio = asiento.length();
        fila = asiento.substr(0,1);
        columna = asiento.substr(1,1);
        cout << columna;
        cout << columna;
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
        this->boleto[cont].setColumna(col);
        this->boleto[cont].setFila(fil);
        this->boleto[cont].setSala(id);
        this->boleto[cont].setPelicula();
        while(this->sala[id-1].setAsiento() == false){
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
            this->boleto[cont].setColumna(col);
            this->boleto[cont].setFila(fil);
            this->boleto[cont].setSala(id);
            this->boleto[cont].setPelicula();
        }
        cont++;
        this->sala[id-1].setCapacidad();
    }
    cout << endl;
    system("pause");
}

void Cine::resumenCompra()
{
    if (cont > 0){
    float total;
        string auxNom, precio;
        string cedula;
        cout <<"\n\t= = DATOS DE FACTURACION = =" << endl;
        cout << "\nNombre del Cliente: ";
        getline (cin>>ws, auxNom);
        cout << "Numero de cedula: ";
        getline(cin>>ws, cedula);
        setCedula(cedula);
        while(getCedula() == false){
            cout << "Cedula no valida, ingrese nuevamente: ";
            getline(cin>>ws, cedula);
            setCedula(cedula);
        }
        char corneris = -55, vertical = -70, cornerii = -56, cornersd = -69, cornerid = -68, horizontal = -51;
        cout << endl;
        for(int i = 0; i < cont; i++){
            this->boleto[i].getBoleto();
            cout << endl;
        }
        cout << corneris;
        for(int i = 0; i < 50; i++){
            cout << horizontal;
        }
        cout << cornersd << endl;
        cout << vertical << "\t     COMPROBANTE DE TRANSACCION\t\t   " << vertical << endl;
        cout << vertical << "\t     CineMeowing de Ecuador S.A.\t   " << vertical << endl;
        cout << vertical << "Nombre: " << auxNom;
        for (int i = 0; i < 42 - auxNom.size(); i++){
            cout << " ";
        }
        cout << vertical << endl;
        cout << vertical << "Cedula: " << cedula;
        for (int i = 0; i < 42 - cedula.size(); i++){
            cout << " ";
        }
        cout << vertical << endl;
        time_t t = std::time(nullptr);
        tm* now = std::localtime(&t);
        cout << vertical << "Fecha: " << now->tm_mday << '/' << (now->tm_mon + 1) << '/'
             << (now->tm_year + 1900) << "\t\t\t\t   " << vertical << endl;
        cout << vertical << "--------------------------------------------------" << vertical << endl;
        cout << vertical << "Descripcion\t Cantidad\tPrecio\t Total";
        for (int i = 0; i < 5; i++){
            cout << " ";
        }
        cout << vertical << endl;
        if(this->adulto > 0){
            cout << vertical << "2D Adulto\t     " << this->adulto << "\t\t " << setprecision(2) << fixed << BoletoEstandar
                 << "\t " << setprecision(2) << fixed << this->adulto*BoletoEstandar << "\t   "<< vertical << endl;
        }
        if(this->nino > 0){
            cout << vertical << "2D Nino\t     " << this->nino << "\t\t " << BoletoNino
                 << "\t " << this->nino*BoletoNino << "\t   "<< vertical << endl;
        }
        if(this->especial > 0){
            cout << vertical << "2D Especial\t     " << this->especial << "\t\t " << BoletoEspecial
                 << "\t " << this->especial*BoletoEspecial << "\t   "<< vertical << endl;
        }
        cout << vertical << "--------------------------------------------------" << vertical << endl;
        total = this->adulto*BoletoEstandar + this->nino*BoletoNino + this->especial*BoletoEspecial;
        cout << vertical << "Sub Total: "<< "\t\t\t\t " << setprecision(2) << fixed << total;
        if(total < 10){
            for (int i = 0; i < 6; i++){
                cout << " ";
            }
        } else {
            for (int i = 0; i < 5; i++){
                cout << " ";
            }
        }
        cout << vertical << endl;
        cout << vertical << "IVA: " << "\t\t\t\t\t  " << this->IVA << "\t   " << vertical << endl;
        cout << vertical << "Total a Cancelar: " << "\t\t\t" << "$" << (total + (total*0.12)) << "\t   " << vertical << endl;
        cout << cornerii;
        for(int i = 0; i < 50; i++){
            cout << horizontal;
        }
        cout << cornerid << endl;
    } else {
        cout << "\tNo se han adquirido boletos.!!\n" << endl;
    }
        cout << endl;
    this->adulto = 0;
    this->nino = 0;
    this->especial = 0;
    cont = 0;
    system("pause");
}
