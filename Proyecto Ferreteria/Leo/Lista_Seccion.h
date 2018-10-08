#ifndef LISTA_SECCION_H
#define LISTA_SECCION_H
#include <iostream>
#include "Seccion.h"

using namespace std;

/*******************************Lista Doblemente Enlazada ***************/

struct Nodo
{
	Seccion* Se;
	Nodo* anteriorSe;
	Nodo* sigSe;
	Nodo* atrasSe;

}*primeroSe,*ultimoSe;

class Lista_Seccion
{
    private:
	Nodo* inicioSe;

    public:
        Lista_Seccion();
        void InsertarEnXposicion(Seccion *miSe, int posicionSe);
        void Buscar(Seccion* miSe);
        void Eliminar(Seccion* miSe);
        void Mostrar();
	    bool ListaVacia();
	    ~Lista_Seccion();

};

#endif // LISTA_SECCION_H
