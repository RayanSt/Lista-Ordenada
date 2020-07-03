#include <cstdlib>
#include <iostream>
#include "lista.h"
using namespace std;

struct persona{
	string nombre;
	int codigo;
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	lista<char> c;
	c.insertar(1245,'c');
	c.insertar(3,'f');
	c.insertar(12,'g');
	if(c.pertenece(3)){
	cout<<c.buscar(3).Dato<<endl;
	}
	c.recorrer();
	c.borrar(3);
	cout<<endl;
	c.recorrer();
		
	return 0;
}
