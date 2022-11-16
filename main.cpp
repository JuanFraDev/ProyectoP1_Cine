#include <iostream>
#include "cine.h"

using namespace std;

int main()
{
    Cine cine;
    cine.setPeliculas();
    cine.setSala();
    int selec;
    cout << "\t\t= = = = C I N E  M E O W I N G = = = =\n" << endl;
    do{
        cout << "\t= = MENU PRINCIPAL = =" << endl;
        cout << "1. Mostrar Cartelera" << endl;
        cout << "2. Mostrar Sala" << endl;
        cout << "3. Comprar Boletos" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> selec;
        switch(selec){
        case 1:
            cout << endl;
            cine.mostrarCartelera();
            cout << endl;
            break;
        case 2:
            cine.mostrarSala();
            break;
        case 3:
            cine.comprarBoleto();
            break;
        case 4:
            cout << endl;
            cout << "Gracias por visitar Cine Meowing!" << endl;
            cout << "\tVuelva Pronto!"<< endl;
            cout << endl;
            break;
        }
    } while (selec != 4);

    //Para impresion de boletos
    /*char corneris = -55, vertical = -70, cornerii = -56, cornersd = -69, cornerid = -68, horizontal = -51;
    string saludo = "Hello Wordl!", despedida = "Nos vemos mijin!";
    cout << corneris;
    for(int i = 0; i < 70; i++){
        cout << horizontal;
    }
    cout << cornersd << endl;
    cout << vertical << saludo;
    for(int i = 0; i <= 70 - saludo.size(); i++){
        cout << " ";
    }
    cout << vertical << endl;
    cout << vertical << despedida;
    for(int i = 0; i <= 70 - despedida.size(); i++){
        cout << " ";
    }
    cout << vertical << endl;
    cout << cornerii;
    for(int i = 0; i < 70; i++){
        cout << horizontal;
    }
    cout << cornerid << endl;*/
    return 0;
}
