#include "Tipo_Producto.h"

Tipo_Producto::Tipo_Producto()
{
    id = 0;
	nombre = "";
}
Tipo_Producto::Tipo_Producto(int id)
{
    this->id = id;
}
Tipo_Producto::Tipo_Producto(int id, string nombre)
{
    this->id = id;
	this->nombre = nombre;
}
void Tipo_Producto::setId(int)
{
    this->id = id;
}
int Tipo_Producto::getId()
{
    return id;
}
void Tipo_Producto::setNombre(string)
{
    this->nombre = nombre;
}
string Tipo_Producto::getNombre()
{
    return nombre;
}

/*void Tipo_Producto::CapturaDatos()
{
   cout << "Digite los datos del tipo de producto:\n";
   cout << "Id:\n";
   cin >> id;
   setId(id);
   cout << "Nombre:\n";
   cin >> nombre;
}*/
/*string Tipo_Producto::toString()
{
   stringstream datos;
   datos << "Id:"<< getId() << endl;
   datos << "Nombre:"<< getNombre() << endl;
   return datos.str();
}*/
Tipo_Producto::~Tipo_Producto()
{
    //dtor
}



