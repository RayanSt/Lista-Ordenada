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
	/*
	int pos = 1, inf;
	char letra;
	lista<int> a;
	lista<float> b;
	*/ 
	lista<char> c;
	/*
	lista<persona> d;
	persona per, perso;
	a.insertar_inicio(8);
	a.insertar_final(18);
	a.insertar(12,2);
	a.insertar(12,3);
	
	b.insertar_inicio(5.5);
	b.insertar_final(186.3);
	b.insertar(5.8,2);
	b.insertar(6.1,3);
	*/
	//c.insertar_inicio('a');
	//c.insertar_final('z');
	c.insertar(1245,'c');
	c.insertar(3,'f');
	c.insertar(12,'g');
	cout<<c.buscar(3).Dato<<endl;
	cout<<c.pertenece(15)<<endl;
	/*
	per.codigo = 1000;
	per.nombre = "juan";
	d.insertar_inicio(per);
	per.codigo = 1500;
	per.nombre = "pedro";
	d.insertar_final(per);
	per.codigo = 1100;
	per.nombre = "maria";
	d.insertar(per,2);
	per.codigo = 1200;
	per.nombre = "ana";
	d.insertar(per,3);
	
	a.cambiar(2,15);
	a.borrar(3);
	while(pos<=a.get_tam()){
		a.buscar(pos,&inf);
		cout<<inf<<" ";
		pos++;
	}
	*/
	c.recorrer();
	c.borrar(3);
	cout<<endl;
	c.recorrer();
	/*
	pos=1;
	cout<<endl;
	while(pos<=c.get_tam()){
		d.buscar(pos,&per);
		cout<<per.codigo<<" ";
		cout<<per.nombre<<" ";
		cout<<endl;
		pos++;
	}
	*/
		
	return 0;
}
