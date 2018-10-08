#ifndef LISTA_TIPO_PRODUCTO_H
#define LISTA_TIPO_PRODUCTO_H
#include <iostream>
#include "Tipo_Producto.h"
using namespace std;

/*******************************Lista Doblemente Enlazada Circular ***************/

struct Nodo{
Tipo_Producto* Tp;
Nodo* sigTp;
Nodo* atrasTp;
}*primeroTp,*ultimoTp;

class Lista_Tipo_Producto
{
private:
    Nodo* inicioTp;
    public:
        Lista_Tipo_Producto();
        //void Insertar(Tipo_Producto* miTp);
        void InsertarEnXposicion(Tipo_Producto* miTp, int posicionTp);
        void Mostrar(); //debe ser insertar en x posicion
        bool ListaVacia();
        virtual ~Lista_Tipo_Producto();


};

#endif // LISTA_TIPO_PRODUCTO_H
