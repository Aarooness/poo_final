//
// Created by Usuario on 2/07/2019.
//

#include "Restaurante.h"
Restaurante::Restaurante(const string& _nombre,int _x, int _y,char _ti,int cal, const string& t, const string& e):Objeto(_nombre,_x,_y,_ti) {
    calificacion=cal;
    tipocomida=t;
    especialidad=e;
}




void Restaurante::mostrarPosicion() {
    Objeto::mostrarPosicion();
    cout<<  "El tipo de comida es: " << tipocomida <<endl<<"Especialidad del dia: "<< especialidad<<endl<<"calificacion: " << calificacion<<endl;


}

int Restaurante::getcalifi() {
    return calificacion;
}