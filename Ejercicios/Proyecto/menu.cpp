#include <iostream>
#include <stdlib.h>

using namespace std;

extern void productosOptica(int opcion);
extern void imprimirFactura();

void menu(){
	system("color F2");
	cout << endl;
    cout << "\t\t\t\t===============================" << endl;
    cout << "\t\t\t\t\tOPTICA OMEGA VISION" << endl;
    cout << "\t\t\t\t===============================" << endl;
	
	cout << "Bienvenido al menu de opciones. Por favor elegir una opcion. " << endl;
	
    int opcion = 0;

    cout << endl;
    
    while(true){
        system("cls");
        cout << endl;
        cout << "\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t1- Aros." << endl;
        cout << "\t\t\t\t2- Lentes Graduados." << endl;
        cout << "\t\t\t\t3- Estuches." << endl;
        cout << "\t\t\t\t4- Lentes de Contacto." << endl;
        cout << "\t\t\t\t5- Pedir Factura." << endl;
        cout << "\t\t\t\t6- Salir del sistema." << endl;
        cout << "\t\t\t\t-----------------------------" << endl;
        cout << endl;
        cout << "\t\t\tDigite la opcion con su numero correspondiente = "; cin >> opcion;
        cout << endl;
        
        if (opcion == 5){
        	imprimirFactura();
        	break;
		}

        if(opcion == 6){
        	cout << "Gracias Por Visitarnos! Por Favor Vuelva Pronto :D" << endl;
            break;
        }
        else{
        	productosOptica(opcion);
		}

    }
    
}

