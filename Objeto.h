//
// Created by Usuario on 29/06/2019.
//

#ifndef POOFINAL2_OBJETO_H
#define POOFINAL2_OBJETO_H

#include <iostream>
#include <string>
using namespace std;
class Objeto {
protected:
    string nombre;
    //int calif;
    int dir_x;
    int dir_y;
    char tipo;

public:
    Objeto();
    Objeto(const string& _nombre,int _x, int _y,char _ti);


    //void setNombre(const string& nombre);
    string getNombre();
    int getdir_x();
    int getdir_y();
    char gettipo();
    void move(int x, int y);
    virtual void mostrarPosicion();

};


#endif //POOFINAL2_OBJETO_H
