#include "Lista_Tipo_Producto.h"

Lista_Tipo_Producto::Lista_Tipo_Producto()
{
    //ctor
}

/*void Lista_Tipo_Producto::Insertar(Tipo_Producto* miTp)
{
    Nodo* nuevoTp= new Nodo();
    cout<<"Ingrese el dato que contendra el nuevo Nodo: ";
    cin>>nuevoTp->Tp->getId();

    if(primeroTp==NULL){
        primeroTp=nuevoTp;
        ultimoTp=nuevoTp;
        primeroTp->sigTp=primeroTp;
        primeroTp->atrasTp=ultimoTp;
    }else{
    ultimoTp->sigTp=nuevoTp;
    nuevoTp->atrasTp=ultimoTp;
    nuevoTp->sigTp=primeroTp;
    ultimoTp=nuevoTp;
    primeroTp->atrasTp=ultimoTp;

    }
}*/

void Lista_Tipo_Producto::InsertarEnXposicion(Tipo_Producto* miTp, int posicionTp) //hay que hacer que al final apunte al inicio
{
    /*Ingresa nuevos nodos segun la posicion que ingresen*/
	Nodo* nuevoTp = new Nodo;
	Nodo *auxTp, *tmpTp;
	int xTp = 1;

	nuevoTp->Tp = miTp;
	nuevoTp->sigTp = nullptr;
	nuevoTp->atrasTp = nullptr;

	if (ListaVacia())
		inicioTp = nuevoTp;

	if(posicionTp == 1)
	{
		nuevoTp->sigTp = inicioTp;
		inicioTp->atrasTp = nuevoTp;
		inicioTp = nuevoTp;
	}
	else {
		auxTp = inicioTp;
		while (xTp < posicionTp && auxTp->sigTp != nullptr) {
			tmpTp = auxTp;
			auxTp = auxTp->sigTp;
			xTp++;
		}
		tmpTp->sigTp = nuevoTp;
		nuevoTp->sigTp = auxTp;
		nuevoTp->atrasTp = tmpTp;
		auxTp->atrasTp = nuevoTp;
	}
}

void Lista_Tipo_Producto::Mostrar()
{
    Nodo* actualTp=new Nodo();
    actualTp=primeroTp;
    if(primeroTp!=NULL){
        do{

           actualTp=actualTp->sigTp;
          }while(actualTp!=primeroTp);

    }else{
       cout<<"\nLa lista esta vacia\n\n";
    }
}

bool Lista_Tipo_Producto::ListaVacia() {
	if (inicioTp == nullptr)
		return true;
	return false;
}

Lista_Tipo_Producto::~Lista_Tipo_Producto()
{
    //dtor
}
