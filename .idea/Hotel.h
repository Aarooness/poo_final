//
// Created by Usuario on 4/07/2019.
//

#ifndef POOFINAL2_HOTEL_H
#define POOFINAL2_HOTEL_H

#include "Objeto.h"
#include <string>
class Hotel: public Objeto {
private:
    int estrellas;
    int califi;
    string dispo;

public:
    Hotel(const string& _nombre,int _x, int _y,char _ti,int es, int cali, const string& dis);
    void mostrarPosicion() override;
    char getletra();
    int getcalifi();

};



#endif //POOFINAL2_HOTEL_H
