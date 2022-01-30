#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Datos

    int a = 0;
    int b = 0;
    int resultadoSuma = 0;
    int resultadoResta = 0;
    int resultadoMultiplicacion = 0;
    float resultadoDivision = 0;

    cout << endl;

    cout << "Digite el valor de a: ";
    cin >> a;

    cout << "Digite el valor de b: ";
    cin >> b;

    //Calculos
    resultadoSuma = a + b;
    resultadoResta = a - b;
    resultadoMultiplicacion = a * b;
    resultadoDivision = a / b;

    //Salida

    cout << endl;

    cout << "La suma de los dos numeros es: " << resultadoSuma << endl;
    cout << "La resta de los dos numeros es: " << resultadoResta << endl;
    cout << "La multiplicacion de los dos numeros es: " << resultadoMultiplicacion << endl;
    cout << "La division de los dos numeros es: " << resultadoDivision << endl;

    cout << endl;
    system("pause");
    return 0;
}

