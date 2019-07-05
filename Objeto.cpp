//
// Created by Usuario on 29/06/2019.
//

#include "Objeto.h"
//Objeto::Objeto(): tipo{}, calif{},dir_x{}, dir_y{}   {}

Objeto::Objeto(const string& _nombre, int _x, int _y,char _ti){
    nombre=_nombre;
    dir_x= _x;
    dir_y= _y;
    tipo=_ti;

}
//void Objeto::setNombre(const string& nombre) { this->nombre = nombre; }
                                                           //void Objeto::move(int x, int y) {}

string  Objeto::getNombre() { return nombre; }
                                            //int   Objeto::getcalif() {return calif;}
int   Objeto::getdir_x()    { return dir_x; }
int   Objeto::getdir_y()    { return dir_y; }
char Objeto::gettipo()  { return tipo; }

void Objeto::mostrarPosicion() {
    cout<<"nombre:  "<<nombre<<endl<< "direccion X = " << to_string(dir_x) << "   direccion  Y = " << to_string(dir_y)<<endl;
}
