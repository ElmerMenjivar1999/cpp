#include<iostream>
#include <stdlib.h>

using namespace std;

extern void menu();
extern void bienvenida();
extern void login();


int main(int argc, char const *argv[])
{
	
	system("color F1");
	bienvenida();
	login();
	menu();
   	
    return 0;
}
