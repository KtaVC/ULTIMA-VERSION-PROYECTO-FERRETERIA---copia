#include "Producto.h"

Producto::Producto()
{
    idProd=0;
    nomProd="";
}


Producto::Producto(int idProd,string nomProd)
{
    this->idProd=idProd;
    this->nomProd=nomProd;

}
void Producto::setIdProd(int idProd)
{
    this->idProd=idProd;
}

int Producto::getIdProd()
{
    return idProd;
}


string Producto::getNomProd()
{
    return nomProd;
}

void Producto::setNomProd(string nomProd)
{
    this->nomProd=nomProd;
}


string Producto::toString()
{
    stringstream datos;
        datos << ", Id: " << idProd <<endl;
        datos << "Nombre: " << nomProd ;


    return datos.str();
}



Producto::~Producto()
{
    //dtor
}
