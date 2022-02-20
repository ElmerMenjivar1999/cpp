#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Datos de entrada
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;

    cout << endl;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    //proceso
    total = subtotal + (subtotal * impuesto);

    //Salida

    cout << "total a pagar es: " << total << endl;

    cout << endl;

    return 0;
}
