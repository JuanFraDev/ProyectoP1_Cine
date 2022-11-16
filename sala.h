#ifndef SALA_H
#define SALA_H
#include <iostream>

using namespace std;

class Sala
{
private:
    int numero;
    char fila;
    char sala[5][5];
public:
    Sala();
    int getNumero() const;
    void setNumero(int newNumero);
    char getFila() const;
    void setFila(char newFila);
    void setSala();
    void getSala();
    bool setAsiento();
};

#endif // SALA_H
