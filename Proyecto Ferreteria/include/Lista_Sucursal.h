#ifndef LISTA_SUCURSAL_H
#define LISTA_SUCURSAL_H
#include "Sucursal.h"
#include<iostream>
using namespace std;

/*******************************Lista Simple ***************/

struct NodoSu
{
	Sucursal* Su;
	NodoSu *sig;



};
class Lista_Sucursal
{
private:
    NodoSu* primero = NULL;
    NodoSu* ultimo = NULL;


public:
    Lista_Sucursal();
    MostrarPrueba();
	void InsertarEnXposicion(Sucursal* miSu, int posicionSu);
	void Buscar(Sucursal* miSu);
	void Eliminar(Sucursal* miSu);
	//Lista_Sucursal* UnirListas(const Lista, const Lista);
	void Mostrar();
	bool ListaVacia();
	~Lista_Sucursal();
};

#endif // LISTA_SUCURSAL_H
