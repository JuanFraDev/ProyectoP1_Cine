#include "sala.h"

int Sala::getNumero() const
{
    return numero;
}

void Sala::setNumero(int newNumero)
{
    numero = newNumero;
}

char Sala::getFila() const
{
    return fila;
}

void Sala::setFila(char newFila)
{
    fila = newFila;
}

void Sala::setSala()
{
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            sala[i][j] = 'O';
        }
    }
}

void Sala::getSala()
{
    char aux = 65;
    char pant = -51;
    cout << "\t\t    PANTALLA" << endl;
    cout << "\t\t";
    for(int i = 0; i < 17; i++){
        cout << pant;
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << aux << "\t";
        for (int j = 0; j < 5; j++){
            cout << sala[i][j] << "\t";
        }
        cout << endl;
        aux ++;
    }
    cout << " \t";
    for(int i = 1; i < 6; i++){
        cout << i << "\t";
    }
    cout << endl;
    cout << endl;
}

bool Sala::setAsiento()
{
    switch(fila){
    case 'A':
        if(this -> sala[0][numero-1] == 'X'){
            cout << "El asiento " << fila << numero << " ya se encuentra ocupado" << endl;
            return false;
        } else {
            this -> sala[0][numero-1] = 'X';
            cout << "Asiento reservado!!" << endl;
            return true;
        }
        break;
    case 'B':
        if(this -> sala[1][numero-1] == 'X'){
            cout << "El asiento " << fila << numero << " ya se encuentra ocupado" << endl;
            return false;
        } else {
            this -> sala[1][numero-1] = 'X';
            cout << "Asiento reservado!!" << endl;
            return true;
        }
        break;
    case 'C':
        if(this -> sala[2][numero-1] == 'X'){
            cout << "El asiento " << fila << numero << " ya se encuentra ocupado" << endl;
            return false;
        } else {
            this -> sala[2][numero-1] = 'X';
            cout << "Asiento reservado!!" << endl;
            return true;
        }
        break;
    case 'D':
        if(this -> sala[3][numero-1] == 'X'){
            cout << "El asiento " << fila << numero << " ya se encuentra ocupado" << endl;
            return false;
        } else {
            this -> sala[3][numero-1] = 'X';
            cout << "Asiento reservado!!" << endl;
            return true;
        }
        break;
    case 'E':
        if(this -> sala[4][numero-1] == 'X'){
            cout << "El asiento " << fila << numero << " ya se encuentra ocupado" << endl;
            return false;
        } else {
            this -> sala[4][numero-1] = 'X';
            cout << "Asiento reservado!!" << endl;
            return true;
        }
        break;
    }
}

Sala::Sala()
{

}
