//
// Created by Usuario on 30/06/2019.
//


#include "Menu.h"
#include "Tierra.h"
#include "Hotel.h"
#include <iostream>
#include <string>
#include <cstdio>
#include "Restaurante.h"
#include "Museo.h"
using namespace std;

enum class Opciones { Agregar=1, Mostrar=2, Sacar=3,Ultimo=4,Decir=5};


void esperar() {
    char w;
    do {
        w = input<char>("Presione C y Enter para continuar...");
    }while (toupper(w) != 'C');
}

void Menu::imprimirMenu() {

    cout << "MENU\n";
    cout << string(4, '-') << "\n\n";
    cout << "1. Agregar un nuevo objeto\n";
    cout << "2. Dibujar Mapa\n";
    cout << "3. Ubicar los 3 mejores lugares por tipo(segun calificacion)\n";
    cout << "4. Ubicar los 3 lugares con mayor calificacion\n";
    cout << "5. Escoger la direccion X Y para encontrar los lugares mas cercanos\n\n";
    cout << "0. Para Salir\n\n";
}


void Menu::agregarObjeto() {
    do {
        cout << "Seleccione el tipo(NUMERO) de lugar a crear " << endl;
        cout << " 1 : restaurante (R) \n";
        cout << " 2 : hotel (H) \n";
        cout << " 3 : museo (M) \n";
        cout << "Ingresa el tipo : ";
        cin >> opcion;
    } while (opcion < 1 || opcion > 3);
    if (opcion==1) {

        auto _ti='R';
        auto _nombre =input<string>("nombre: ");
        auto _x =input<int>("dir x: ");
        auto _y =input<int>("dir y: ");
        auto cal =input<int>("calificacion (un digito): ");
        auto t=input<string>("tipo comida: ");
        auto e =input<string>("especialidad: ");

        vector <int> max;
        int cero=0;
        for(int i=0;i<max.size();i++){
            max[i]=cal;

            if(max[i]>cero){
                cero=max[i];
                x=i;
            }
        }

        tierra.adicionarObjeto1(new Restaurante(_nombre,_x,_y,_ti,cal,t,e));

        //break;
    }
    if (opcion==2) {

        auto _ti='H';
        auto _nombre =input<string>("nombre: ");
        auto _x =input<int>("dir x: ");
        auto _y =input<int>("dir y: ");
        auto es =input<int>("estrellas del hotel(max 6): ");
        auto cali=input<int>("calificacion del huesped(un digito): ");
        auto dis =input<string>("disponibilidad del hotel: ");

        tierra.adicionarObjeto2(new Hotel(_nombre,_x,_y,_ti,es,cali,dis));


        //break;
    }
    if (opcion==3) {

        auto _ti='M';
        auto _nombre =input<string>("nombre: ");
        auto _x =input<int>("dir x: ");
        auto _y =input<int>("dir y: ");
        auto ca =input<int>("calificacion del Museo(un digito): ");

        auto ex =input<string>("Exposicion Anual del Museo: ");

        tierra.adicionarObjeto3(new Museo(_nombre,_x,_y,_ti,ca,ex));

        //break;
    }
}

//void Menu::adicionarMaximo(Restaurante *restaurante){
  //  maximo.emplace_back(restaurante);}
void Menu::sacar() {
    tierra.maximo();
}
void Menu::ultimo(){
    tierra.todos();

}

void Menu::decir2() {
    tierra.decir();
}
void Menu::dibujarMapa() {

    tierra.actualizarTierra();
    tierra.dibujarTierra();
    cout << '\n';
    tierra.imprimirObjetos();
    cout << '\n';
    esperar();
}

void Menu::ejecutar() {
    do {
        imprimirMenu();
        cin >> opcion;
        seleccionarOpcion();
    } while (opcion != 0);
    cout << "Fin del programa...\n";
}

void Menu::seleccionarOpcion() {

    switch(Opciones(opcion)) {
        case Opciones ::Decir:
            decir2();
            break;
        case Opciones ::Sacar:
            sacar();
            break;
        case Opciones::Agregar:  // Agregar Objeto
            agregarObjeto();
            break;

        case  Opciones::Mostrar: // Dibujando Tierra
            dibujarMapa();
            break;

        case  Opciones::Ultimo: // Dibujando Tierra
            ultimo();
            break;



    }
}


