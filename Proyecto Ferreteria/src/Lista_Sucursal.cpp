#include "Lista_Sucursal.h"

Lista_Sucursal::Lista_Sucursal()
{
	primero = NULL;

}

void Lista_Sucursal::InsertarEnXposicion(Sucursal *miSu, int posicion)
{
	//Ingresa nuevos nodos segun la posicion que ingresen
	NodoSu* nuevo = new NodoSu;
	NodoSu *aux, *tmp;
	int x = 1;

	nuevo-> Su = miSu;
	nuevo->sig = NULL;

	if (ListaVacia())
		primero = nuevo;
	if (posicion == 1)
	{
		nuevo->sig = primero;
		primero = nuevo;
	}
	else {
		aux = primero;
		while (x < posicion && aux->sig != NULL)
		{
			tmp = aux;
			aux = aux->sig;
			x++;
		}
		tmp->sig = nuevo;
		nuevo->sig = aux;


	}
}

void Lista_Sucursal::Eliminar(Sucursal* miSu)
{
    NodoSu* actual = new NodoSu();
    actual=primero;
    NodoSu* anterior= new NodoSu();
    anterior=NULL;
    bool encontrado=false;
    int nodoBuscado=0;
    cout<<"Ingrese la seccion a eliminar : ";
    cin>>nodoBuscado;

    if(primero!=NULL){
    cout << "--------------------------- Secciones ---------------------------" << endl;
       while(actual!=NULL&& encontrado!=true){

        if(actual->Su->getId()== nodoBuscado){
            cout<<"\nSeccion con el dato (" <<nodoBuscado<< ") Encontrado";

            if(actual==primero){
                    primero=primero->sig;
                }else if(actual==ultimo){
                   anterior->sig=NULL;
                   ultimo=anterior;
                }else{
                    anterior->sig=actual->sig;
                }
            }
            cout<<"\n Seccion eliminada";
            encontrado=true;
        }
        anterior=actual;
        actual=actual->sig;
       }
       if(!encontrado){
        cout<<"\nSeccion no encontrada\n\n";
       }else{
    cout<<"\nLa lista esta vacia";
}

}

/*Lista_Sucursal* Lista_Sucursal::UnirListas(const Lista l1, const Lista l2)//Recibe dos listas
{//Metodo de tipo lista para retonar la nueva lista
	Lista l3;
	int dato = 0;
	aux = l1.inicio; //Para lista 1
	Nodo* tmp;
	tmp = l2.inicio; //Para lista 2

	while (aux != nullptr) {
		miSucursal = aux->s;
		l3.insertarElemento(dato);
		aux = aux->sig;
	}
	while (tmp != nullptr) {
		dato = tmp->s;
		l3.insertarElemento(dato);
		tmp = tmp->sig;
	}
	l3.Mostrar();
	return &l3; //retorna referencia de la nueva
}*/

void Lista_Sucursal::Buscar(Sucursal* miSu)
{
	NodoSu* actual = new NodoSu();
    actual=primero;
    bool encontrado=false;
    int nodoBuscado=0;
    cout<<"Ingrese la Seccion a buscar : ";
    cin>>nodoBuscado;

    if(primero!=NULL){
    cout << "--------------------------- Secciones ---------------------------" << endl;
       while(actual!=NULL&& encontrado!=true){

        if(actual->Su->getId() == nodoBuscado){
            cout<<"\nSeccion con el dato (" <<nodoBuscado<< ") Encontrado\n\n";
            encontrado=true;
        }else{
            encontrado=false;
        }
        actual=actual->sig;
       }
       if(!encontrado){
        cout<<"\nSeccion no encontrada\n\n";
       }
}else{
    cout<<"\nLa lista esta vacia";
}

}
/*
void Lista_Sucursal::Mostrar() //*************************
{
    //*****************************************************
    /*NodoSu* aux = new NodoSu();
    aux=primero;

    if(primero!=NULL){
        do{
             cout<<"\n "<<aux->Su;
             aux=aux->sig;

        }while(aux!=primero);

    }else{
    cout<<"\nLa lista esta vacia";
    }*/ //****************************************************
    /*Nodo* actual= new Nodo();
	actual = primero;
    if (primero == NULL){
		cout << "No hay sucursales registradas" << endl;
	}
	else{
		int i = 1;
		actual = primero;
		cout << "--------------------------- Sucursales ---------------------------" << endl;
		while (actual!= NULL){ //primero no se mueve
			cout << "Sucursal " << i << " :\n" << actual->dato() << endl;
			cout << "--------------------------------------------------------------------------\n";
			actual = actual->sig();
			i++;
		}
	}*/
	/*NodoSu* actual= new NodoSu();
	actual = primero;
	if (primero != NULL) {
        cout << "--------------------------- Sucursales ---------------------------" << endl;
		while (actual != NULL) {
			cout << " " << actual->Su
			 << endl; //aqui tiene que impimir la pila
			actual = actual->sig;
		}
	}
	else {
		cout << "La lista esta vacia \n\n";
	}*/


	/*NodoSu* aux = new NodoSu();
    aux=primero;

    if(primero!=NULL){
        do{
             cout<<"\n "<<aux->Su;
             aux=aux->sig;

        }while(aux!=primero);

    }else{
    cout<<"\nLa lista esta vacia";
    }
}*/
void Lista_Sucursal::Mostrar()
{
    NodoSu *actual = new NodoSu();
     NodoSu *temp = actual;    //copiamos el primer nodo a un auxiliar y lo recorremos con un while e imprimimos
        while(temp != NULL){
              cout<< temp->Su<<"->";
              temp = temp->sig;
        }
        cout<<"NULL"<<endl;
}

/*void Lista_Sucursal::MostrarPrueba()
{
   /* NodoSu *aux=new NodoSu();
      aux=primero;
      if(primero!=NULL)
      {
          while(aux!=NULL)
          {
              aux->marca.mostrarPila();
              aux=aux->siguiente;
          }
      }
      else
      {
          cout<<"Lista vacia\n";
      }*/
//}

bool Lista_Sucursal::ListaVacia() {
	if (primero == NULL)
		return true;
	return false;
}




Lista_Sucursal::~Lista_Sucursal()
{
}

