#ifndef LISTA_SUCURSAL_H
#define LISTA_SUCURSAL_H
#include "Sucursal.h"
#include<iostream>
using namespace std;

/*******************************Lista Simple ***************/

struct Nodo
{
	Sucursal* Su;
	Nodo *sigSu;


}*primeroSu,*ultimoSu; //globales, si dejo el ultimo aqui da problemas, si lo pongo dentro de struct tengo que declararlo de nuevo



class Lista_Sucursal
{
    private:
	Nodo * inicioSu;
	Nodo * auxSu;

public:
    Lista_Sucursal();
	void InsertarEnXposicion(Sucursal* miSu, int posicionSu);
	void Buscar(Sucursal* miSu);
	void Eliminar(Sucursal* miSu);
	//Lista_Sucursal* UnirListas(const Lista, const Lista);
	void Mostrar();
	bool ListaVacia();
	~Lista_Sucursal();
};

#endif // LISTA_SUCURSAL_H
