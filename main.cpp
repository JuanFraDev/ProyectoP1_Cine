#include <iostream>
#include <stdlib.h>
#include "cine.h"

using namespace std;

int main()
{
    char valid[1];
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
        cout << "4. Resumen compra" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> valid;
        selec = atoi(valid);
        while(selec < 1 || selec > 5){
            cout << "Opcion no valida, ingrese nuevamente: ";
            cin >> valid;
            selec = atoi(valid);
        }
        switch(selec){
        case 1:
            system("cls");
            cine.mostrarCartelera();
            system("cls");
            break;
        case 2:
            system("cls");
            cine.mostrarSala();
            system("cls");
            break;
        case 3:
            system("cls");
            cine.comprarBoleto();
            system("cls");
            break;
        case 4:
            system("cls");
            cine.resumenCompra();
            system("cls");
            break;
        case 5:
            cout << endl;
            cout << "Gracias por visitar Cine Meowing!" << endl;
            cout << "\tVuelva Pronto!"<< endl;
            cout << endl;
            break;
        }
    } while (selec != 5);
    return 0;
}
