#include "Sucursal.h"

Sucursal::Sucursal()
{
	id = 0;
	ubicacion = "";
}

Sucursal::Sucursal(int id)
{
	this->id = id;
}
Sucursal::Sucursal(int id, string ubicacion)
{
	this->id = id;
	this->ubicacion = ubicacion;
}
void Sucursal::setId(int id)
{
	this->id = id;
}
int Sucursal::getId()
{
	return id;
}
void Sucursal::setUbicacion(string ubicacion)
{
	this->ubicacion = ubicacion;
}
string Sucursal::getUbicacion()
{
	return ubicacion;
}

/*void Sucursal::CapturaDatos()
{
   cout << "Digite los datos de la sucursal:\n";
   cout << "Id:\n";
   cin >> id;
   setId(id);
   cout << "Ubicacion:\n";
   cin >> ubicacion;
}
/*string Sucursal::toString()
{
   stringstream datos;
   datos << "Id:"<< getId() << endl;
   datos << "Ubicacion:"<< getUbicacion() << endl;
   return datos.str();
}*/

Sucursal::~Sucursal()
{
}
