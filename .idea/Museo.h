//
// Created by Usuario on 4/07/2019.
//

#ifndef POOFINAL2_MUSEO_H
#define POOFINAL2_MUSEO_H


#include "Objeto.h"
#include <string>
class Museo: public Objeto {
private:

    int califica;
    string expo;

public:
    Museo(const string& _nombre,int _x, int _y,char _ti,int ca, const string ex);
    void mostrarPosicion() override;

    int getcalifi();
    char getletra();

};


#endif //POOFINAL2_MUSEO_H
