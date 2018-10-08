#include "Pila_Producto.h"

Pila_Producto::Pila_Producto() {
	cima = NULL;
}

bool Pila_Producto::PilaVacia() {
	if (cima == NULL)
		return true;
	else
		return false;
}

void Pila_Producto::Apilar(Tipo_Producto miProducto) {

	Puntero p_aux;
	p_aux = new(struct nodo);
	p_aux->miProducto = miProducto;
	p_aux->sgte = cima;
	cima = p_aux;

}

void Pila_Producto::Cima() {
	Tipo_Producto miProducto;
	if (cima == NULL)
		cout << "\n\nPila Vacia...!";

	else {
		miProducto = cima->miProducto;
		cout << "\nLa Cima es :" << miProducto.toString()<< endl;
	}
}

void Pila_Producto::Desapilar() {
	Tipo_Producto miProducto;
	Puntero p_aux;
	if (cima == NULL)
		cout << "\n\n\tPila Vacia...!!";
	else {
		p_aux = cima;
		miProducto = p_aux->miProducto;
		cima = cima->sgte;
		delete(p_aux);
	}
}

void Pila_Producto::Mostrar() {
	Puntero p_aux;
	p_aux = cima;
	cout <<"*************************************************" << endl;
	while (p_aux != NULL) {
		cout << p_aux->miProducto.getId() << endl;
		cout<< p_aux->miProducto.getNombre() << endl;
		cout<<"---------------"<<endl;
		p_aux = p_aux->sgte;
	}
	cout << "*************************************************\n" << endl;
}

void Pila_Producto::Destruir() {
	Puntero p_aux;

	while (cima != NULL) {
		p_aux = cima;
		cima = cima->sgte;
		delete(p_aux);
	}
}

int Pila_Producto::getId()
{
	return miProducto.getId();
}

string Pila_Producto::getNombre()
{
    return miProducto.getNombre();

}
Pila_Producto::~Pila_Producto()
{


}
