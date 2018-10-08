#ifndef SUCURSAL_H
#define SUCURSAL_H
#include<iostream>
using namespace std;


class Sucursal
{
    private:
	int id;
	string ubicacion;
    public:
	Sucursal();
	Sucursal(int);
	Sucursal(int, string);
	void setId(int);
	int getId();
	void setUbicacion(string);
	string getUbicacion();
	//void CapturaDatos();
	//string toString();
	~Sucursal();
};

#endif // SUCURSAL_H
