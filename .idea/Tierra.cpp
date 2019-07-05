//
// Created by Usuario on 29/06/2019.
//

#include "Tierra.h"
#include <string>
#include <iomanip>
#include <algorithm>
#include "Restaurante.h"
#include "Menu.h"
using namespace std;

Tierra::Tierra() {
    plano.resize(ALTURA);
    for (auto& item: plano)
        item.resize(ANCHO);
}

Tierra::Tierra(int altura, int ancho) {
    plano.resize(altura);
    for (auto& item: plano)
        item.resize(ancho);
}
void Tierra::adicionarObjeto1(Restaurante *restaurante) {
    objetos.emplace_back(restaurante);

}
void Tierra::adicionarObjeto2(Hotel *hotel) {
    objetos1.emplace_back(hotel);

}
void Tierra::adicionarObjeto3(Museo *museo) {
    objetos2.emplace_back(museo);

}

void Tierra::maximo() {
    int max=-1;
    int x = -1;

    for (int i=0; i < objetos.size(); i++) {
        int cal = objetos[i]->getcalifi();

        if (cal > max) {
            max = cal;
            x = i;
        }
    }

    cout<<"el Restaurante con la mayor calificacion es: "<<endl<<"Nombre: "<<objetos[x]->getNombre()<<endl<<"calificacion: "<<objetos[x]->getcalifi()<<endl;

    int max2=-1;
    int y=-1;
    for (int j=0; j < objetos1.size(); j++) {
        int cal2 = objetos1[j]->getcalifi();

        if (cal2 > max2) {
            max2 = cal2;
            y = j;
        }
    }
    cout<<endl;
    cout<<"el Hotel con la mayor calificacion es: "<<endl<<"Nombre: "<<objetos1[y]->getNombre()<<endl<<"calificacion: "<<objetos1[y]->getcalifi()<<endl;

    int max3=-1;
    int z=-1;
    for (int k=0; k < objetos2.size(); k++) {
        int cal3 = objetos2[k]->getcalifi();

        if (cal3 > max3) {
            max3 = cal3;
            z = k;
        }
    }
    cout<<endl;
    cout<<"el Museo con la mayor calificacion es: "<<endl<<"Nombre: "<<objetos2[z]->getNombre()<<endl<<"calificacion: "<<objetos2[z]->getcalifi()<<endl;

}

void Tierra::todos(){
    int max=-1;
    int x = -1;
    for (int i=0; i < objetos.size(); i++) {
        int cal = objetos[i]->getcalifi();

        if (cal > max) {
            max = cal;
            x = i;
        }
    }
    int max2=-1;
    int y=-1;
    for (int j=0; j < objetos1.size(); j++) {
        int cal2 = objetos1[j]->getcalifi();

        if (cal2 > max2) {
            max2 = cal2;
            y = j;
        }
    }
    int max3=-1;
    int z=-1;
    for (int k=0; k < objetos2.size(); k++) {
        int cal3 = objetos2[k]->getcalifi();

        if (cal3 > max3) {
            max3 = cal3;
            z = k;
        }
    }
    cout<<endl;
    if(objetos.size()<=1 || objetos1.size()<=1 || objetos2.size()<=1) {
        if(objetos.size()<=1 && objetos1.size()<=1 && objetos2.size()<=1) {
            if (objetos[x]->getcalifi() > objetos1[y]->getcalifi() && objetos[x]->getcalifi() > objetos2[z]->getcalifi()) {
                cout << "Mejor lugar opcion 1: " << objetos[x]->getNombre() << " Su calificacion: " << endl<< objetos[x]->getcalifi() << endl;
                cout << "Mejor lugar opcion 2: " << objetos1[y]->getNombre() <<" Su calificacion: "<< endl << objetos1[y]->getcalifi() << endl;
                cout << "Mejor lugar opcion 3: " << objetos2[z]->getNombre() <<" Su calificacion: "<< endl << objetos2[z]->getcalifi() << endl;
            } else {
                if (objetos1[y]->getcalifi() > objetos[x]->getcalifi() && objetos1[y]->getcalifi() > objetos2[z]->getcalifi()) {
                    cout << "Mejor lugar opcion 1: " << objetos1[y]->getNombre() <<" Su calificacion: "<< endl << objetos1[y]->getcalifi() << endl;
                    cout << "Mejor lugar opcion 2: " << objetos2[z]->getNombre() <<" Su calificacion: "<< endl << objetos2[z]->getcalifi() << endl;
                    cout << "Mejor lugar opcion 3: " << objetos[x]->getNombre() << " Su calificacion: " << endl<< objetos[x]->getcalifi() << endl;
                } else {
                    cout << "Mejor lugar opcion 1: " << objetos1[y]->getNombre() <<" Su calificacion: "<< endl << objetos1[y]->getcalifi() << endl;
                    cout << "Mejor lugar opcion 2: " << objetos2[z]->getNombre() <<" Su calificacion: "<< endl << objetos2[z]->getcalifi() << endl;
                    cout << "Mejor lugar opcion 3: " << objetos[x]->getNombre() << " Su calificacion: " << endl<< objetos[x]->getcalifi() << endl;
                }
            }
        }
    }

//    if(objetos[x+1]->getcalifi() > objetos1[y+1]->getcalifi() && objetos[x+1]->getcalifi() >objetos2[z+1]->getcalifi() ){
  //      cout<<"el numero mayor es: "<<objetos[x+1]->getcalifi();
    //}else{
      //  if(objetos1[y+1]->getcalifi() > objetos[x+1]->getcalifi() && objetos1[y+1]->getcalifi() > objetos2[z+1]->getcalifi()){
        //    cout<<"El numero mayor es "<<objetos1[y+1]->getcalifi();
        //}else{
         //   cout<<"El numero mayor es "<<objetos2[z+1]->getcalifi();
        //}
  //  }
    if(objetos.size()==2 || objetos1.size()==2 || objetos2.size()==2) {
        if (objetos[x]->getcalifi() > objetos1[y]->getcalifi() && objetos[x]->getcalifi() > objetos2[z]->getcalifi()) {
            cout << "Mejor lugar 1: " << objetos[x]->getNombre() << " Su calificacion: " << endl<< objetos[x]->getcalifi() << endl;
        } else {
            if (objetos1[y]->getcalifi() > objetos[x]->getcalifi() &&
                objetos1[y]->getcalifi() > objetos2[z]->getcalifi()) {
                cout << "Mejor lugar 1:  " << objetos1[y]->getNombre() << endl << objetos1[y]->getcalifi() << endl;
            } else {
                cout << "Mejor lugar 1: " << objetos2[z]->getNombre() << endl << objetos2[z]->getcalifi() << endl;
            }
        }

        if (objetos[x + 1]->getcalifi() > objetos1[y + 1]->getcalifi() &&
            objetos[x + 1]->getcalifi() > objetos2[z + 1]->getcalifi()) {
            cout << "Mejor lugar 2: " << objetos[x - 1]->getNombre() << endl << objetos[x - 1]->getcalifi() << endl;
        } else {
            if (objetos1[y + 1]->getcalifi() > objetos[x + 1]->getcalifi() &&
                objetos1[y + 1]->getcalifi() > objetos2[z + 1]->getcalifi()) {
                cout << "Mejor lugar 2: " << objetos1[y + 1]->getNombre() << endl << objetos1[y + 1]->getcalifi()
                     << endl;
            } else {
                cout << "Mejor lugar 2: " << objetos2[z + 1]->getNombre() << endl << objetos2[z + 1]->getcalifi()
                     << endl;
            }
        }

        cout << "Mejor lugar 3: " << objetos2[z - 1]->getNombre() << endl << objetos2[z - 1]->getcalifi()
             << endl;
    }

}


void Tierra::imprimirObjetos() {
    int i=0;


    for (auto& item: objetos) {

        cout << "* * * * * * [" << i << "] "<<endl;
        cout<< "Tipo = " << item->gettipo() << '\n';
        item->mostrarPosicion() ;

        i++;
    }
    int cont=i;
    for (auto& item: objetos1) {
        cout << "* * * * * * [" << cont << "] "<<endl;
        cout<< "Tipo = " << item->gettipo() << '\n';
        item->mostrarPosicion() ;
        cont++;
    }
    for (auto& item: objetos2) {
        cout << "* * * * * * [" << cont << "] "<<endl;
        cout<< "Tipo = " << item->gettipo() << '\n';
        item->mostrarPosicion() ;
        cont++;
    }
}


void Tierra::decir() {
    int x;int y;
    cout<<"direccion x: "<<endl;
    cin>>x;
    cout<<"direccion y: "<<endl;
    cin>>y;
    for(auto& item: objetos) {
        for (int i = 0; i < 17; i++) {
            if (plano[x - i][y - i] ==objetos[i]->getletra()) {
                cout<<"objeto encontrado  "<<objetos[i]->getNombre();
            }


        }
    }
    for(auto& item: objetos) {
        for (int i = 0; i < 17; i++) {
            if (plano[x + i][y + i] == objetos[i]->getletra()) {
                cout<<"objeto encontrado  "<<objetos[i]->getNombre();
            }


        }
    }

    for(auto& item: objetos1) {
        for (int i = 0; i < 17; i++) {
            if (plano[x - i][y - i] ==objetos1[i]->getletra()) {
                cout<<"objeto encontrado  "<<objetos1[i]->getNombre();
            }


        }
    }
    for(auto& item: objetos1) {
        for (int i = 0; i < 17; i++) {
            if (plano[x + i][y + i] == objetos1[i]->getletra()) {
                cout<<"objeto encontrado  "<<objetos1[i]->getNombre();
            }


        }
    }

    for(auto& item: objetos2) {
        for (int i = 0; i < 17; i++) {
            if (plano[x - i][y - i] ==objetos2[i]->getletra()) {
                cout<<"objeto encontrado  "<<objetos2[i]->getNombre();
            }


        }
    }
    for(auto& item: objetos2) {
        for (int i = 0; i < 17; i++) {
            if (plano[x + i][y + i] == objetos2[i]->getletra()) {
                cout << "objeto encontrado  " << objetos2[i]->getNombre();
            }

        }
    }

}

void Tierra::actualizarTierra() {
    for (auto &row: plano)
        for (auto &cell: row)
            cell = tipo;

    for (auto& item: objetos)
        plano[item->getdir_x()][item->getdir_y()]
                = item->gettipo();
    for (auto& item: objetos1)
        plano[item->getdir_x()][item->getdir_y()]
                = item->gettipo();
    for (auto& item: objetos2)
        plano[item->getdir_x()][item->getdir_y()]
                = item->gettipo();
}

void Tierra::dibujarTierra() {
    cout << '\n';
    cout << setw(3) << ' ';
    for (auto j = 0; j < getAncho(); ++j)
        cout << setw(3) << j;
    cout << '\n';

    for (auto i = 0; i < getAltura(); ++i) {
        cout << setw(3) << i;
        for (auto j = 0; j < getAncho(); ++j) {
            cout << setw(3) << plano[i][j];
        }
        cout << '\n';
    }
}

int Tierra::getAltura() {
    return plano.size();
}

int Tierra::getAncho(){
    return plano[0].size();
}
