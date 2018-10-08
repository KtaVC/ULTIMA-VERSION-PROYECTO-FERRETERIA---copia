#ifndef LISTA_TIPO_PRODUCTO_H
#define LISTA_TIPO_PRODUCTO_H
#include <iostream>
#include "Tipo_Producto.h"
#include "Pila_Producto.h"
using namespace std;

/*******************************Lista Doblemente Enlazada Circular ***************/

struct NodoTp
{
    //Tipo_Producto* Tp;
    NodoTp* anterior;
	NodoTp* sig;
	Pila_Producto dato;

};//*primero;// *ultimo;

class Lista_Tipo_Producto
{
private:


    //Pila_Producto *primero = NULL;
    //Pila_Producto *ultimo = NULL;

    //
    Pila_Producto miPila;
    public:
        NodoTp* primero = NULL;
        NodoTp* ultimo = NULL;
        Lista_Tipo_Producto();
        void InsertarEnXposicion(Tipo_Producto* miTp, int posicionTp);
        void Buscar(Tipo_Producto* miTp);
        void Eliminar(Tipo_Producto* Tp);
        void Mostrar();
        bool ListaVacia();

        ~Lista_Tipo_Producto();

        //***************Pila*************
        void InsertarPilaEnXposicion(Pila_Producto, int);


};

#endif // LISTA_TIPO_PRODUCTO_H
