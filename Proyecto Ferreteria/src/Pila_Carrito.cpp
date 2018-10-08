#include "Pila_Carrito.h"

Pila_Carrito::Pila_Carrito()
{
   cima=NULL;
}



bool Pila_Carrito::PilaVacia(void){
    if(cima==NULL)
        return true;
    else
        return false;
}

void Pila_Carrito::Apilar(Producto miProducto){

    Puntero p_aux;
    p_aux=new(struct nodo);
    p_aux->miProducto=miProducto;
    p_aux->sgte=cima;
    cima=p_aux;

}

void Pila_Carrito::Cima() {
	Producto miProducto;
	if (cima == NULL)
		cout << "\n\nPila Vacia...!";

	else {
		miProducto = cima->miProducto;
		cout << "\nLa Cima es :" << miProducto.toString()<< endl;
	}
}

void Pila_Carrito::Desapilar(void){
    Producto miProducto;
    Puntero p_aux;
    if(cima==NULL)
        cout<<"\n\n\tPila Vacia...!!";
    else{
        p_aux=cima;
        miProducto=p_aux->miProducto;
        cima=cima->sgte;
        delete(p_aux);
    }
}

void Pila_Carrito::MostrarPila(void){
    Puntero p_aux;
    p_aux=cima;

    while(p_aux!=NULL){
        cout<<p_aux->miProducto.toString()<<endl;
        p_aux=p_aux->sgte;
    }
}

void Pila_Carrito::DestruirPila(void){
    Puntero p_aux;

    while(cima!=NULL){
            p_aux=cima;
            cima=cima->sgte;
            delete(p_aux);
    }
}

Pila_Carrito::~Pila_Carrito()
{
    //dtor
}
