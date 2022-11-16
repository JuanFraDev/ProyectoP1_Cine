#include <iostream>
#include "cine.h"

using namespace std;

int main()
{
    Cine cine;
    cine.setPeliculas();
    cine.mostrarCartelera();
    cine.setSala();
    cine.mostrarSala();
    cine.comprarBoleto();
    cine.mostrarSala();

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
