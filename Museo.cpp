//
// Created by Usuario on 4/07/2019.
//

#include "Museo.h"
Museo::Museo(const string& _nombre,int _x, int _y,char _ti,int ca, const string ex):Objeto(_nombre,_x,_y,_ti) {
    califica=ca;
    expo=ex;
}




void Museo::mostrarPosicion() {
    Objeto::mostrarPosicion();
    cout << "La calificacion es: " << califica << endl;
    cout << "Exposicion Anual: " << expo << endl;


}

int Museo::getcalifi() {
    return califica;
}