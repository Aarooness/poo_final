//
// Created by Usuario on 2/07/2019.
//

#ifndef POOFINAL2_RESTAURANTE_H
#define POOFINAL2_RESTAURANTE_H

#include "Objeto.h"
#include <string>
#include <vector>
class Restaurante: public Objeto {
private:
    int calificacion;
    string tipocomida;
    string especialidad;


public:

    Restaurante(const string& _nombre,int _x, int _y,char _ti,int cal, const string& t, const string& e);
    void mostrarPosicion() override;
    //
    int getcalifi();
//



};





#endif //POOFINAL2_RESTAURANTE_H
