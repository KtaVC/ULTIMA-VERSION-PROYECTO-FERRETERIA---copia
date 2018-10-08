#include "Seccion.h"


Seccion::Seccion()
{
	id = 0;
	nombre = "";
}

Seccion::Seccion(int id)
{
	this->id = id;
}
Seccion::Seccion(int id, string nombre)
{
	this->id = id;
	this->nombre = nombre;
}
void Seccion::setId(int id)
{
	this->id = id;
}
int Seccion::getId()
{
	return id;
}
void Seccion::setNombre(string nombre)
{
	this->nombre = nombre;
}
string Seccion::getNombre()
{
	return nombre;
}

/*void Seccion::CapturaDatos()
{
   cout << "Digite los datos de la seccion:\n";
   cout << "Id:\n";
   cin >> id;
   setId(id);
   cout << "Nombre:\n";
   cin >> nombre;
}
/*string Seccion::toString()
{
   stringstream datos;
   datos << "Id:"<< getId() << endl;
   datos << "Nombre:"<< getNombre() << endl;
   return datos.str();
}*/
