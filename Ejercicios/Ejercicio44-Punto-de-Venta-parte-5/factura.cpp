#include<iostream>

using namespace std;

double subtotal;
double impuestos = 0.15;
double totalImpuestos = 0;
double totalPagar = 0;
string listaProductos;


void agregarProducto(string descripcion ,int cantidad,double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    totalImpuestos = subtotal * impuestos;
    totalPagar = subtotal + totalImpuestos;
   
}

void imprimirFactura()
{
    system("cls");

    cout << "*******" << endl;
    cout << "Factura " << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos: " << endl;
    cout << listaProductos;

    cout << endl;
    cout << "subtotal: " << subtotal;
    cout << endl;
    cout << endl;

    cout << "Impuestos a pagar: " << totalImpuestos;
    cout << endl;
    cout << endl;

    cout << "Total a pagar :" << totalPagar;
    cout << endl;
    cout << endl;

    system("pause");
}