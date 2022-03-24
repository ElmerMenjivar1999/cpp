#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;



int main(int argc, char const *argv[])
{
    int dado1 = 0;
    int dado2 = 0;
    string tirarDado1 = "";
    string tirarDado2 = "";

    srand(time(NULL));

    cout << "Bienvenido a Juego de Dados !" << endl;
    cout << "Quiere tirar el Primer dado?(Si/No): ";
    cin >> tirarDado1;

    if (tirarDado1 == "Si" || tirarDado1 == "si")
    {
        dado1 = rand() % 6 + 1;

        cout << "Su primer dado ha sacado un: " << dado1 << endl;
        cout << endl;
    }
    else if(tirarDado1 == "No" || tirarDado1 == "no")
    {
        cout << "Entendido....Procederemos con el segundo dado.." << endl;
    }
  
    cout << "Quiere tirar el Segundo dado?(Si/No): ";
    cin >> tirarDado2;

    if (tirarDado2 == "Si" || tirarDado2 == "si" )
    {
        dado2 = rand() % 6 + 1;

        cout << "Su segundo dado ha sacado un: " << dado2 << endl;
        cout << endl;
    }
    else if(tirarDado2 == "No" || tirarDado2 == "no")
    {
        cout << "Entendido!...Cuando desee jugar es mas que Bienvenido!" << endl;
    }


    return 0;
}
