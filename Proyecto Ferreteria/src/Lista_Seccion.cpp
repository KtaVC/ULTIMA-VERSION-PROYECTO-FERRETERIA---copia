#include "Lista_Seccion.h"

Lista_Seccion::Lista_Seccion()
{
  primero = NULL;
}

void Lista_Seccion::InsertarEnXposicion(Seccion* miSe, int posicion)
{ /*Ingresa nuevos nodos segun la posicion que ingresen*/
	NodoSe* nuevo = new NodoSe;
	NodoSe *aux, *tmp;
	int x = 1;

	nuevo->Se = miSe;
	nuevo->sig = NULL;
	nuevo->anterior = NULL;

	if (ListaVacia())
		primero = nuevo;

	if(posicion == 1)
	{
		nuevo->sig = primero;
		primero->anterior = nuevo;
		primero = nuevo;
	}
	else {
		aux = primero;
		while (x < posicion && aux->sig != NULL) {
			tmp = aux;
			aux = aux->sig;
			x++;
		}
		tmp->sig = nuevo;
		nuevo->sig = aux;
		nuevo->anterior = tmp;
		aux->anterior = nuevo;
	}
}

void Lista_Seccion::Mostrar()
{
    NodoSe* aux = new NodoSe();
    aux=primero;

    if(primero!=NULL){
        do{
             cout<<"\n "<<aux->Se;
             aux=aux->sig;

        }while(aux!=primero);

    }else{
    cout<<"\nLa lista esta vacia";
    }
}

void Lista_Seccion::Buscar(Seccion* miSe)
{
    NodoSe* actual = new NodoSe();
    actual=primero;
    bool encontrado=false;
    int nodoBuscado=0;
    cout<<"Ingrese la Seccion a buscar : ";
    cin>>nodoBuscado;

    if(primero!=NULL){
    cout << "--------------------------- Secciones ---------------------------" << endl;
       while(actual!=NULL&& encontrado!=true){

        if(actual->Se->getId() == nodoBuscado){
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

void Lista_Seccion::Eliminar(Seccion* miSe)
{
    NodoSe* actual = new NodoSe();
    actual=primero;
    NodoSe* anterior= new NodoSe();
    anterior=NULL;
    bool encontrado=false;
    int nodoBuscado=0;
    cout<<"Ingrese la seccion a eliminar : ";
    cin>>nodoBuscado;

    if(primero!=NULL){
    cout << "--------------------------- Secciones ---------------------------" << endl;
       while(actual!=NULL&& encontrado!=true){

        if(actual->Se->getId()== nodoBuscado){
            cout<<"\nSeccion con el dato (" <<nodoBuscado<< ") Encontrado";

            if(actual==primero){
                    primero=primero->sig;
                    primero->anterior=NULL;
                }else if(actual==ultimo){
                   anterior->sig=NULL;
                   ultimo=anterior;
                }else{
                    anterior->sig=actual->sig;
                    actual->sig->anterior=anterior;
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


bool Lista_Seccion::ListaVacia() {
	if (primero == NULL)
		return true;
	return false;
}

Lista_Seccion::~Lista_Seccion()
{
    //dtor
}
