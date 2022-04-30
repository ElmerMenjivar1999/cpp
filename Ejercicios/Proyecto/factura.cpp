#include<iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

extern char login(char usuario);

double subtotal;
double impuestos = 0.15;
double totalImpuestos = 0;
double totalPagar = 0;
string listaProductos;
string usuario;





void agregarProducto(string descripcion ,int cantidad,double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    totalImpuestos = subtotal * impuestos;
    totalPagar = subtotal + totalImpuestos;
   
}

void login(){
	
    
    cout << endl;
    cout << "\t\t\tPor favor ingrese un usuario o su nombre = ";
    cin >> usuario;

    cout << endl;
    cout << "\t\t\tBIENVENIDO " << usuario <<" al sistema de Optica Omega Vision !."<< endl;
    cout << endl;
    getch();
    

}

void imprimirFactura()
{

	system("color F4");
    system("cls");


    
    if (listaProductos.empty()){
    	
    	cout << endl;
    	cout << "Todavia no tiene Productos para pedir la Factura !" << endl;
    	cout << endl;
	}
	
	else{
		cout << "FACTURA" << endl;
		cout << endl;
		cout << "Nombre del Cliente = " << usuario << endl;
	    
	    cout << endl;
	    cout << "Productos----------------------------------- Precio" << endl;
	    cout << endl;
		cout << listaProductos << endl;	
		cout << endl;
		cout << "---------------------------------------------------" << endl;
		cout << "Subtotal = " << subtotal << endl;
		cout << "Total de Impuestos = " << totalImpuestos << endl;
		cout << "Total a Pagar = " << totalPagar << endl;
		
	}
    
    

    getch();
}


