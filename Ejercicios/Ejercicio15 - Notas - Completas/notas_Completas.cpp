#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout << endl;

    cout << "Ingrese la nota que obtuvo: ";
    cin >> nota;

    if (nota > 100 || nota < 0){
        cout << "Ingrese una nota entre 0 y 100";
    }
    else{
        
        if(nota >= 96 && nota <= 100){
            cout << "Obtuviste una A++" << endl;
        }
        if(nota >= 91 && nota <= 95){
            cout << "Obtuviste una A+" << endl;
        }
        if(nota >= 86 && nota <= 90){
            cout << "Obtuviste una A" << endl;
        }
        if(nota >= 81 && nota <= 85){
            cout << "Obtuviste una A-" << endl;
        }
        if(nota >= 76 && nota <= 80){
            cout << "Obtuviste una B+" << endl;
        }
        if(nota >= 71 && nota <= 75){
            cout << "Obtuviste una B" << endl;
        }
        if(nota >= 65 && nota <= 70){
            cout << "Obtuviste una B-" << endl;
        }
        if(nota >= 60 && nota <= 64){
            cout << "Obtuviste una C" << endl;
        }
        if(nota >= 55 && nota <= 59){
            cout << "Obtuviste una C-" << endl;
        }
        if(nota >= 50 && nota <= 54){
            cout << "Obtuviste una D+" << endl;
        }
        if(nota >= 45 && nota <= 49){
            cout << "Obtuviste una D" << endl;
        }
        if(nota >= 40 && nota <= 44){
            cout << "Obtuviste una D-" << endl;
        }
        if(nota >= 35 && nota <= 39){
            cout << "Obtuviste una E+" << endl;
        }
        if(nota >= 30 && nota <= 34){
            cout << "Obtuviste una E" << endl;
        }
        if(nota >= 25 && nota <= 29){
            cout << "Obtuviste una E-" << endl;
        }
        if(nota >= 20 && nota <= 24){
            cout << "Obtuviste una F+" << endl;
        }
        if(nota >= 10 && nota <= 19){
            cout << "Obtuviste una F" << endl;
        }
        if(nota >= 5 && nota <= 9){
            cout << "Obtuviste una F-" << endl;
        }
        if(nota >= 0 && nota <= 4){
            cout << "Obtuviste una F--" << endl;;
        }

    }

    
    cout << endl;
    return 0;
}