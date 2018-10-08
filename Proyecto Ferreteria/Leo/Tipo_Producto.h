#ifndef TIPO_PRODUCTO_H
#define TIPO_PRODUCTO_H
#include<iostream>
using namespace std;


class Tipo_Producto
{

    private:
	int id;
	string nombre;
    public:
	Tipo_Producto();
	Tipo_Producto(int);
	Tipo_Producto(int, string);
	void setId(int);
	int getId();
	void setNombre(string);
	string getNombre();
	//void CapturaDatos();
	//string toString();
	~Tipo_Producto();
};

#endif // TIPO_PRODUCTO_H
