//
// Created by Usuario on 29/06/2019.
//

#ifndef POOFINAL2_TIERRA_H
#define POOFINAL2_TIERRA_H

#include <iostream>
#include <vector>
#include <string>

#include "Objeto.h"
#include "Restaurante.h"
#include "Hotel.h"
#include "Museo.h"
using namespace std;

const int ALTURA = 17;
const int ANCHO  = 17;
const char tipo ='.';


class Tierra{
private:
    vector<vector<char>> plano;
    vector<int> gg;
    vector<Restaurante*> objetos;
    vector<Hotel*>objetos1;
    vector<Museo*>objetos2;

public:
    Tierra();
    Tierra(int altura, int ancho);
    int getAltura();
    int getAncho();
    void adicionarObjeto3(Museo* museo);
    void adicionarObjeto2(Hotel* hotel);
    void adicionarObjeto1(Restaurante* restaurante);//CON ESTA FUNCION TE PODRA SALIR PARA ESCRIBIR ALGO
    //void adicionarObjeto(Objeto* objeto);
    void imprimirObjetos();
    void dibujarTierra();
    void actualizarTierra();

    void maximo();

    void todos();

    void decir();


};



#endif //POOFINAL2_TIERRA_H
