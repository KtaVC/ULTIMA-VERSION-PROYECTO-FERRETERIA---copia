#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include <sstream>
using namespace std;


class Producto
{       public:
        Producto();
        Producto(int,string);
        void setNomProd(string);
        string getNomProd();
        void setIdProd(int);
        int getIdProd();
        string toString();
        virtual ~Producto();

    private:
        string nomProd;
        int idProd;
};

#endif // PRODUCTO_H
