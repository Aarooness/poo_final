//
// Created by Usuario on 4/07/2019.
//

#include "Hotel.h"
Hotel::Hotel(const string& _nombre,int _x, int _y,char _ti,int es,int cali, const string& dis):Objeto(_nombre,_x,_y,_ti) {
    estrellas=es;
    califi=cali;
    dispo=dis;
}




void Hotel::mostrarPosicion() {
    Objeto::mostrarPosicion();
    cout << "Estrellas del hotel: " << estrellas << endl <<
         "Calificacion del huesped(1 a 5) " << califi << endl << "disponibilidad : " << dispo << endl;
}
int Hotel::getcalifi() {
    return califi;
}