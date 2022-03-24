#include <iostream>
#include <math.h>


using namespace std;


float raizCuadrada(float numero,float resultado)
{
    return resultado = sqrt(numero);
}

int main(int argc, char const *argv[])
{
    float numero = 0;
    float resultado = 0;

    cout << endl;

    cout << "Digite un numero para calcular su raiz cuadrada: ";
    cin >> numero;

    cout << "La raiz cuadrada de " << numero <<" es: " << raizCuadrada(numero,resultado);

    cout << endl;
    cout << endl;

    return 0;
}
