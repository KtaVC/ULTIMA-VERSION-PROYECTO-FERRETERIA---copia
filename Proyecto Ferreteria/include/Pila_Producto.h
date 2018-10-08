#ifndef PILA_PRODUCTO_H
#define PILA_PRODUCTO_H
#include "Tipo_Producto.h"


 struct nodo {
		Tipo_Producto miProducto;
		struct nodo *sgte;
	};

	typedef struct nodo *Puntero;
class Pila_Producto
{


public:

    Pila_Producto();
	void Apilar(Tipo_Producto);
	void Desapilar();
	void Cima();
	bool PilaVacia();
	void Mostrar();
	void Destruir();
	int getId();
	string getNombre();
	~Pila_Producto();

private:
	Puntero cima;
	Tipo_Producto miProducto;
};

#endif // PILA_PRODUCTO_H
