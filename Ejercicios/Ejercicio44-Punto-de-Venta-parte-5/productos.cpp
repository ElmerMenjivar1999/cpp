#include<iostream>

using namespace std;

extern void agregarProducto(string descripcion,int cantidad,double precio);

void productos(int opcion)
{
    int opcionProducto = 0;
    system("cls");

    switch (opcion){
        case 1:
            cout << "BEBIDAS CALIENTES" << endl;
            cout << "*******************" << endl;
            cout << "1 - Capuccino" << endl;
            cout << "2 - Expresso" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;
            
            
                switch(opcionProducto){
                    case 1:
                        agregarProducto("1 Capuccino - L 40.00",1,40);
                        break;

                     case 2:
                        agregarProducto("1 Expresso - L 30.00",1,30);
                        break;

                    default:
                    {
                        cout << "Opcion no valida";
                        return;
                        break; 
                    }
                           
                }

            cout << endl;
            cout << "Producto Agregado" << endl; 
            cout << "\n";
            system("pause");


            break;
        case 2:
            opcionProducto = 0;
            cout << "BEBIDAS FRIAS" << endl;
            cout << "*************" << endl;
            cout << "1 - Coca Cola" << endl;
            cout << "2 - Pepsi" << endl;
            cout << "3 - Granita" << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch(opcionProducto)
            {
                case 1:
                    agregarProducto("1 Coca Cola - L 20.00",1,20);
                    break;

                case 2:
                    agregarProducto("1 Pepsi - L 15.00",1,15);
                    break;

                case 3:
                    agregarProducto("1 Granita - L 25.00",1,25);
                    break;

                default:
                {
                    cout << "Opcion no valida" << endl;
                    return;
                    break;
                }            
            }

            cout << endl;
            cout << "Producto Agregado" << endl; 
            cout << "\n";
            system("pause");

            break;

        case 3:
            opcionProducto = 0;
            cout << "REPOSTERIA" << endl;
            cout << "**********" << endl;
            cout << "1 - Yogurt" << endl;
            cout << "2 - Ice Cream" << endl;
            cout << "3 - Helado de chocolate" << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch(opcionProducto)
            {
                case 1:
                    agregarProducto("1 Yogurt - L 25.00",1,25);
                    break;

                case 2:
                    agregarProducto("1 Ice Cream - L 60.00",1,60);
                    break;

                case 3:
                    agregarProducto("1 Helado de chocolate - L 30.00",1,30);
                    break;    

                default:
                {
                    cout << "Opcion no valida" << endl;
                    return;
                    break;
                }        
            }

            cout << endl;
            cout << "Producto Agregado" << endl; 
            cout << "\n";
            system("pause");


            break;    

    }
}