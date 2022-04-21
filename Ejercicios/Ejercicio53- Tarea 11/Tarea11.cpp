#include<iostream>
#include<stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int arregloBidimensional[5][5];
    int sumaTotal = 0;

    srand(time(NULL));
    
    cout << endl;
    cout << "Mostrando los Elementos del arreglo bidimensional" << endl;
    cout << endl;
    for(int i = 0; i < 5; i++){
        
        for(int j = 0; j < 5; j++){
            arregloBidimensional[i][j] = rand() % 100 + 1;
            sumaTotal += arregloBidimensional[i][j];
            cout << "  " << arregloBidimensional[i][j];
        }
        cout << "\n";
    }
    cout << endl;
    cout << "La suma total del los elmenetos del arreglo bidimensional es: " << sumaTotal << endl;
    cout << endl;

    return 0;
}
