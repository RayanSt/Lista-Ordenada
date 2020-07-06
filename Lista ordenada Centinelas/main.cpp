#include <cstdlib>
#include <iostream>
#include "lista.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	
	lista<char> c('z');
	c.insertar(1245,'c');
	c.insertar(3,'f');
	c.insertar(12,'b');
	c.insertar(72,'f');
	c.insertar(24,'k');
	if(c.pertenece(3)){
	cout<<c.buscar(3).Dato<<endl;
	}
	c.recorrer();
	c.asignarInfo(72,'x');
	c.borrar(3);
	cout<<endl;
	c.recorrer();
	
	lista<int> b(13);
	b.insertar(14,1);
	b.insertar(2,2);
	b.insertar(3,3);
	b.insertar(27,4);
	b.insertar(24,5);
	if(b.pertenece(3)){
	cout<<b.buscar(3).Dato<<endl;
	}
	b.recorrer();
	b.asignarInfo(3,17);
	b.borrar(24);
	cout<<endl;
	b.recorrer();		
	return 0;
}
