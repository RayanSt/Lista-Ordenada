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
class lista{nodo <T> *cab;
			int tam;
			
	public: lista(){cab=NULL;}
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
{if(cab==NULL)
    return true;
 else
 	return false;
}

template <class T>
void lista <T>::insertar(int Clave, T info)
{
    nodo<T> *nuevo = new nodo<T>;
    nuevo->clave = Clave;
    nuevo->Dato = info;
    nuevo->sig = NULL;
    if (cab == NULL) 
    {cab = nuevo;
    }
    else 
    {
        if (Clave<cab->clave) 
        {
            nuevo->sig = cab;
            cab = nuevo;
        }
        else 
        {
            nodo<T> *aux = cab;
            nodo<T> *atras = cab;
            while (Clave >= aux->clave && aux->sig != NULL) 
            {
                atras = aux;
                aux = aux->sig;
            }if (Clave >= aux->clave){
                aux->sig = nuevo;
            }else{
                nuevo->sig = aux;
                atras->sig = nuevo;
            }
        }
    }
}

template <class T>
bool lista<T>::pertenece(int Clave){
	nodo<T> *aux;
	aux = cab;
	bool resultado = false;
	while(aux != NULL){
		if(Clave == aux->clave){
			resultado = true;
			break;
		}else{
			aux = aux->sig;
		}
	}
	return resultado;
}

template <class T>
void lista<T>::borrar(int Clave){ 
    nodo <T> *temp, *atras;
    temp = cab;
	if(Clave == cab->clave){
		cab = temp->sig;
        delete temp;
	}else
	{
    while(Clave != temp->sig->clave){
			temp = temp->sig;
			}          
    nodo <T> *aux;
	aux = temp->sig;
    temp->sig = aux->sig;
    delete aux;
	tam--;
	}
}

template <class T>
nodo<T> lista<T>::buscar(int Clave)
{   nodo <T> *aux=cab, *salida=NULL;
	    while(aux != NULL)
    		{
    		if(Clave == aux->clave){
    			salida = aux;
    			cout<<"dato encontrado: ";
    			break;
    		}else{
    			cout<<"No existe el dato";
				aux = aux->sig;
			}
		
		}
	return *salida;
}

template <class T>
void lista<T>::recorrer()
{   nodo <T> *aux=cab;
	    while(aux != NULL)
    		{cout<<"Clave: "<<aux->clave<<" ";
    		cout<<"Dato: "<<aux->Dato<<endl;
			aux = aux->sig;
			}

}

template <class T>
void lista<T>::asignarInfo(int Clave, T infoNueva){
   nodo <T> *temp;
    temp = cab;
    while(Clave != temp->clave){
			temp = temp->sig;
			}          
	temp->Dato = infoNueva;
	}

	

#endif
