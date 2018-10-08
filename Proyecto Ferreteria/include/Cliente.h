#ifndef CLIENTE_H
#define CLIENTE_H
#include "Lista_Tipo_Producto.h"
#include <iostream>
#include <fstream>

using namespace std;

class Cliente
{
    public:
        Cliente();
        Cliente(int);
        Cliente(int,string);
        void leerListaAComprar();
        void setId(int);
        int getId();
        void setNombre(string);
        string getNombre();

        virtual ~Cliente();


    private:
        Lista_Tipo_Producto* miListaProducto;
        string nombre;
        int id;
};
#endif // CLIENTE_H

