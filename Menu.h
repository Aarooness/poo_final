//
// Created by Usuario on 30/06/2019.
//

#ifndef POOFINAL2_MENU_H
#define POOFINAL2_MENU_H

#include <iostream>
#include <vector>
#include "Tierra.h"
#include "Objeto.h"
#include "Restaurante.h"
#include "Museo.h"
#include "Hotel.h"
template <typename T>
T input(string label) {
    T value;
    cout << label;
    cin >> value;
    cin.clear();

    return value;
}
class Menu {
private:
    int opcion;
    Tierra tierra;
    vector<Restaurante*> maximo;

    void imprimirMenu();
    void seleccionarOpcion();
    void agregarObjeto();
    //void adicionarMaximo(Restaurante* restaurante);

    void dibujarMapa();
public:
    Menu(): opcion{} {}
    void ejecutar();
    void sacar();
    void ultimo();
    void decir2();


    int x;
};

#endif //POOFINAL2_MENU_H
