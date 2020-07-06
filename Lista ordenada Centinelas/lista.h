#ifndef LISTA_H
#define LISTA_H
#include <iostream>

using namespace std;

template <class T>
struct nodo {
	int clave;
	T Dato;
    nodo<T> * sig;};
    

template <class T>
class lista{nodo <T> *cab, *fin;
			int tam;
			
	public: lista(T datoMax){cab= new nodo<T>; fin= new nodo<T>;
					cab->sig = fin;
					fin->Dato = datoMax;
					fin->sig = fin;
					tam = 0;
					}
			bool lista_vacia();
			void insertar(int Clave, T info);
			void recorrer();
			void borrar(int Clave);
			bool pertenece(int Clave);
			nodo<T> buscar (int Clave);
			void asignarInfo(int Clave, T infoNueva);	
};

template <class T>
bool lista<T>::lista_vacia()
{if(tam==0)
    return true;
 else
 	return false;
}

template <class T>
void lista <T>::insertar(int Clave, T info){
    nodo<T> *ant, *pos, *nuevo;
    nuevo = new nodo <T>;
    nuevo->clave = Clave;
    nuevo->Dato = info;
    ant = cab;
    pos = cab->sig;
    while(nuevo->clave>pos->clave){
		ant = pos;
		pos = ant->sig;
	}
	ant->sig = nuevo;
	nuevo->sig = pos;
	tam++;
}

template <class T>
bool lista<T>::pertenece(int Clave)
{   nodo <T> *aux = cab->sig;
		int p = 1;
		bool res = false;
	    while(Clave != aux->clave && p<tam){
				aux = aux->sig;	
				p++;
		}
		if(Clave == aux->clave)
			res = true;
			
		return res;
}

template <class T>
void lista<T>::borrar(int Clave){ 
    nodo <T> *temp;
    temp = cab;
	int p = 1;
	while(Clave != temp->sig->clave && p<tam){
			temp = temp->sig;	
			p++;
	}
	if(Clave == temp->sig->clave){
		nodo <T> *aux;
		aux = temp->sig;
    	temp->sig = aux->sig;
    	delete aux;
		tam--;
		}     
}

template <class T>
nodo<T> lista<T>::buscar(int Clave)
{   nodo <T> *aux = cab->sig, *salida=NULL;
		int p = 1;
	    while(Clave != aux->clave && p<tam){
				aux = aux->sig;	
				p++;
		}
		if(Clave == aux->clave){
			cout<<"Informacion encontrada ";
			salida = aux;
		}else{
			cout<<"Informacion no encontrada: ";
		}
		
	return *salida;
}

template <class T>
void lista<T>::recorrer()
{   nodo <T> *aux=cab->sig;
	    for(int i = 1; i<=tam;i++)
    		{cout<<"Clave: "<<aux->clave<<" ";
    		cout<<"Dato: "<<aux->Dato<<endl;
			aux = aux->sig;
			}

}

template <class T>
void lista<T>::asignarInfo(int Clave, T infoNueva)
{   nodo <T> *aux = cab->sig;
		int p = 1;
	    while(Clave != aux->clave && p<tam){
				aux = aux->sig;	
				p++;
		}
		if(Clave == aux->clave){
			aux->Dato = infoNueva;
		}
}

#endif
