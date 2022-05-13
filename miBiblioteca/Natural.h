#ifndef NATURAL_H
#define NATURAL_H


#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <fstream>
using namespace std;

class Natural{
private:
    int iValor;
    string sValor;
    void verificaSValor(void);
public:
    Natural(void);
    Natural(int iValor);
    Natural(string sValor);
    Natural(char cValor);
    ~Natural(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    void guardaTusDatos(ofstream& ASalida);
    void cargaTusDatos(ifstream& AEntrada);
    int dameTuIValor(void);
    void modificaTuIValor(int iValor);
    void modificaTuIValor(char cValor);
    string dameTuSValor(void);
    void modificaTuSValor(string sValor);
};

#endif // NATURAL_H
