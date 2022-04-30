#include<iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

extern void agregarProducto(string descripcion,int cantidad,double precio);

void productosOptica(int opcion){
	HWND hwnd;
	int opcionProducto = 0;
    system("cls");

    switch(opcion){

        case 1:
	        cout << endl;
	        cout << "\t\t\t\tAROS" << endl;
	        cout << "\t\t\t\t-----" << endl;
	        cout << "\t\t\t\t1  - Lacoste" << endl;
	        cout << "\t\t\t\t2  - Tommy" << endl;
	        cout << "\t\t\t\t3  - Converse" << endl;
	        cout << "\t\t\t\t4  - Guess" << endl;
	        cout << "\t\t\t\t5  - Carolina Herrera" << endl;
	        cout << "\t\t\t\t6  - Gant" << endl;
	        cout << "\t\t\t\t7  - Oscar de la Renta" << endl;
	        cout << "\t\t\t\t8  - Van Heusen" << endl;
	        cout << "\t\t\t\t9  - Prada" << endl;
	        cout << "\t\t\t\t10 - Ssilhoete" << endl;
	        cout << "\t\t\t\t0 - Salir del Menu Aros" << endl;
	        cout << endl;
	        cout << "\t\t\tIngrese la opcion con el numero correspondiente = "; 
			cin >> opcionProducto;
        
	        switch (opcionProducto)
	        {
	            case 1:
	                agregarProducto("1 - Aro Lacoste  			LPS -> 5000",1,5000);
	                
	                break;
	            case 2:
	                agregarProducto("1 - Aro Tommy  				LPS -> 4500",1,4500);
	                break;
	            case 3:
	                agregarProducto("1 - Aro Converse  			LPS -> 4000",1,4000);
	                break;           
	            case 4:
	                agregarProducto("1 - Aro Guess  				LPS -> 3900",1,3900);
	                break;
	            case 5:
	                agregarProducto("1 - Aro Carolina Herrera  		LPS -> 3800",1,3800);
	                break;
	            
	            case 6:
	            	agregarProducto("1 - Gant  				LPS -> 3600",1,3600);
	                break;
	            
				case 7:
					agregarProducto("1 -Oscar de la Renta  			LPS -> 3500",1,3500);
	                break;
					
				case 8:
					agregarProducto("1 - Van Heusen  			LPS -> 3200",1,3200);
	                break;
				
				case 9:
					agregarProducto("1 - Prada  				LPS -> 3100",1,3100);
	                break;
				
				case 10:
					agregarProducto("1 - Ssilhoete  				LPS -> 3000",1,3000);
	                break;
				
				case 0 :
					
					break;
								    
	
	            default:
	            	cout << endl;
	            	cout << "\t\t\tOpcion Invalida!" << endl;
	            	getch();
	                break;
	        }
	        
			if (opcionProducto != 0 && opcionProducto <= 10){
				cout << endl;
				cout << endl;
			    cout << "\t\t\t\tProducto Agregado Con Exito!" << endl; 
			    cout << "\n";
			    getch();
						
			}
			
			break;
			
		case 2:
			opcionProducto = 0;
			cout << endl;
			
			cout << "\t\t\t\tLentes Graduados" << endl;
			cout << "\t\t\t\t-----------------------" << endl;
			cout << "\t\t\t\t1 - OD = 0.25, OI = 0.75 Monofocales" << endl;
			cout << "\t\t\t\t2 - OD = 1.50, OI = 2.75 , ADD = 3.00 Bifocales" << endl;
			cout << "\t\t\t\t3 - OD = 3.00, OI = 2.25 ADD = 2.50 , ALT = 60 Bifocales" << endl;
			cout << "\t\t\t\t4 - OD = 0.75, OI = 0.75 Monofocales" << endl;
			cout << "\t\t\t\t5 - OD = 2.50, OI = 2.50  Monofocales" << endl;
			cout << "\t\t\t\t0 - Salir del menu Lentes Graduados" << endl;
			cout << endl;
			cout << "\t\t\tIngrese la opcion con el numero correspondiente = ";
			cin >> opcionProducto;
			
			switch(opcionProducto){
				case 1:
					agregarProducto("1 - LTS 0.25 y 0.75 Monofocales 	LPS -> 90",1,90);
					break;
					
				case 2:
					agregarProducto("1 - LTS 1.50 y 2.75 add 3.00 Bifocales  LPS -> 120",1,120);
					break;
					
				case 3:
					agregarProducto("1 - LTS 3.00 y 2.25 add 2.50 Alt 60 BIF LPS -> 160",1,160);
					break;
					
				case 4:
					agregarProducto("1 - LTS 0.75 ambos ojos Monofocales 	LPS -> 90",1,90);
					break;
					
				case 5:
					agregarProducto("1 - LTS 2.50 ambos ojos Monofocales 	LPS -> 90",1,90);
					break;
					
				case 0:
					break;	
					
				default:
					cout << endl;
					cout << "\t\t\tOpcion Invalida!";
					getch();
					break;
										
			}
			if (opcionProducto != 0 && opcionProducto <= 5) {
				cout << endl;
			    cout << "\t\t\t\tProducto Agregado Con Exito!" << endl; 
			    cout << "\n";
			    getch();

			}
			
			break;
		
		case 3:
			opcionProducto = 0;
			cout << endl;
			cout << "\t\t\t\tEstuches" << endl;
			cout <<"\t\t\t\t-----------" << endl;
			cout << "\t\t\t\t1 - Color Rojo" << endl;
			cout << "\t\t\t\t2 - Color Azul" << endl;
			cout << "\t\t\t\t3 - Color Amarillo" << endl;
			cout << "\t\t\t\t4 - Color Verde" << endl;
			cout << "\t\t\t\t5 - Color Negro" << endl;
			cout << "\t\t\t\t0 - Salir del menu Estuches" << endl;
			cout << endl;
			cout << "\t\t\tIngrese la opcion con el numero correspondiente = ";
			cin >> opcionProducto;
			
			switch(opcionProducto){
				case 1:
					agregarProducto("1 - Estuche color Rojo 			LPS -> 100",1,100);
					break;
					
				case 2:
					agregarProducto("1 - Estuche color Azul 			LPS -> 120",1,120);
					break;
					
				case 3:
					agregarProducto("1 - Estuche color Amarillo 		LPS -> 80",1,80);
					break;
					
				case 4:
					agregarProducto("1 - Estuche color Verde 		LPS -> 170",1,170);
					break;
					
				case 5:
					agregarProducto("1 - Estuche color Negro 		LPS -> 200",1,200);
					break;
					
				case 0:
					break;	
					
				default:
					cout << endl;
					cout << "\t\t\tOpcion Invalida!" << endl;
					getch();
					break;						
			}
			
			if (opcionProducto != 0 && opcionProducto <= 5){
				cout << endl;
			    cout << "\t\t\t\tProducto Agregado Con Exito!" << endl; 
			    cout << "\n";
			    getch();

			}
            
            break;
            
        case 4:
        	opcionProducto = 0;
			cout << endl;
			cout << "\t\t\t\tLentes de Contacto" << endl;
			cout << "\t\t\t\t--------------------" << endl;
			cout << "\t\t\t\t1 - Lentes de Contacto Rojos" << endl;    
			cout << "\t\t\t\t2 - Lentes de Contacto Transparentes" << endl;    
			cout << "\t\t\t\t3 - Lentes de Contacto Azules" << endl;
			cout << "\t\t\t\t0 - Salir del menu Lentes de Contacto" << endl;
			cout << endl;
			cout << "\t\t\tIngrese la opcion con el numero correspondiente = ";
			cin >> opcionProducto;
			
			switch(opcionProducto){
				case 1:
					agregarProducto("1 - Lentes de contacto Rojos 		LPS -> 250",1,250);
					break;
				case 2:
					agregarProducto("1 - Lentes de contacto Transparentes 	LPS -> 500",1,500);
					break;
				case 3:
					agregarProducto("1 - Lentes de contacto Azules 		LPS -> 300",1,300);
					break;
					
				case 0:
					break;
						
				default:
					cout << endl;
					cout << "\t\t\tOpcion invalida!";
					getch();
					break;			
			}    
			if (opcionProducto != 0 && opcionProducto <= 3){
				cout << endl;
			    cout << "\t\t\t\tProducto Agregado Con Exito!" << endl; 
			    cout << "\n";
			    getch();

			}
			
			break;	

    }    
    

}
