#ifndef LISTA_SECCION_H
#define LISTA_SECCION_H
#include <iostream>
#include "Seccion.h"

using namespace std;

/*******************************Lista Doblemente Enlazada ***************/

struct NodoSe
{
	Seccion* Se;
	NodoSe* anterior;
	NodoSe* sig;


};

class Lista_Seccion
{
    private:
	NodoSe* primero = NULL;
    NodoSe* ultimo = NULL;

    public:
        Lista_Seccion();
        void InsertarEnXposicion(Seccion *miSe, int posicionSe);
        //void insertarTodo(Seccion, )
        void Buscar(Seccion* miSe);
        void Eliminar(Seccion* miSe);
        void Mostrar();
	    bool ListaVacia();
	    ~Lista_Seccion();

};

#endif // LISTA_SECCION_H
