#ifndef SECCION_H
#define SECCION_H
#include<iostream>
using namespace std;


class Seccion
{
    private:
	int id;
	string nombre;
    public:
	Seccion();
	Seccion(int);
	Seccion(int, string);
	void setId(int);
	int getId();
	void setNombre(string);
	string getNombre();
	//void CapturaDatos();
	//string toString();
};

#endif // SECCION_H
