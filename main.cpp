#include <iostream>
#include "PilaGen.h"
using namespace std;

int main() {
    PilaGen<int> *pilaI = new PilaGen<int>;
    PilaGen<int> *pilaJ = new PilaGen<int>;
//    pilaI->insertar_cabeza(10);
//    pilaJ->insertar_cabeza(20);
//    pilaI->insertar_cabeza(20);
//    pilaI->insertar_cabeza(-10);
//    pilaJ->insertar_cabeza(0);
//    pilaJ->eliminar_cabeza();
//    pilaI->insertar_cabeza(0);
//    pilaJ->insertar_cabeza(100);
//    cout << "Espera aca" ;
    bool condicion = true;
    int opcionMenu , i , j;
    cout << "Bienvenido a nuestro programa, dependiendo de un par de número enteros (i,j) ingregado podremos realizaer diferentes tareas" << endl;
    while ( condicion ){
        cout << "Opciones Menu: \n1. Añadir par de números  \n2. Terminar programa" << endl;
        cin >> opcionMenu;
        switch ( opcionMenu ) {
            case 1:
            {
                cout << "Introduzca i: " << endl;
                cin >> i;
                pilaI->insertar_cabeza( i );
                cout << "Introduzca j: " << endl;
                cin >> j;
                pilaJ->insertar_cabeza( j );
                if ( i > 0 ){ //i es positivo
                    pilaI->insertar_cabeza( j );
                }else if ( i == 0 ){ //i igual menos q  cero
                    cout << "------------- PILA i -------------------" << endl;
                    for(int k = 0 ; k < pilaI->size() ; k++ ){
                        cout << pilaI->pop( k ) << endl;
//                        cout << pilaI->quitar() << endl;
                    }
                    cout << "------------- PILA j -------------------" << endl;
                    for(int m = 0 ; m < pilaJ->size() ; m++ ){
                        cout << pilaJ->pop( m ) << endl;
                    }
                    break;
                }else if( i < 0 ){ //i es 0
                    pilaJ->eliminar_cabeza();
                }
                break;
            }
            case 2:
            {
                condicion = false;
                break;
            }
            default :
            {
                cout << "ERROR, introduzca una opcion valida porfavor" << endl;
            }
        }
    }
    return 0;
}
