#include "Lista_Tipo_Producto.h"

Lista_Tipo_Producto::Lista_Tipo_Producto()
{
    primero = NULL;
}


/*void Lista_Tipo_Producto::InsertarEnXposicion(Tipo_Producto* miTp, int posicion) //hay que hacer que al final apunte al inicio
{
    /*Ingresa nuevos nodos segun la posicion que ingresen*/
	/*NodoTp* nuevo = new NodoTp;*/
	/*NodoTp *aux, *tmp;
	int x = 1;

	nuevo->Tp = miTp;

	if (ListaVacia()){
		primero = nuevo;
        primero->sig=primero;
        primero->anterior=primero;
        ultimo=primero; //aqui hace el enlace
    }

	if(posicion == 1)
	{
        ultimo->sig=nuevo;
		nuevo->sig = primero;
		nuevo->anterior=ultimo;
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
		//Ojo
	}
}*/

void Lista_Tipo_Producto::Mostrar()
{
   //miPila.Mostrar();

   NodoTp* aux = new NodoTp();
    aux=primero;

    if(primero!=NULL){
        do{
            //cout<<aux->dato.getId();
            aux->dato.Mostrar();
             aux=aux->sig;

        }while(aux!=primero);

    }else{
    cout<<"\nLa lista esta vacia";
    }
}

/*

void Lista_Tipo_Producto::Buscar(Tipo_Producto* miTp)
{
    NodoTp* actual = new NodoTp();
    actual=primero;
    bool encontrado=false;
    int nodoBuscado=0;
    cout<<"Ingrese el producto a buscar : ";
    cin>>nodoBuscado;

    if(primero!=NULL){
    cout << "--------------------------- Productos ---------------------------" << endl;
       while(actual!=NULL&& encontrado!=true){

        if(actual->Tp->getId() == nodoBuscado){
            cout<<"\nProducto con el dato (" <<nodoBuscado<< ") Encontrado\n\n";
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
void Lista_Tipo_Producto::Eliminar(Tipo_Producto* Tp)
{
    NodoTp* actual = new NodoTp();
    actual=primero;
    NodoTp* anterior= new NodoTp();
    anterior=NULL;
    bool encontrado=false;
    int nodoBuscado=0;
    cout<<"Ingrese el producto a eliminar : ";
    cin>>nodoBuscado;

    if(primero!=NULL){
    cout << "--------------------------- Secciones ---------------------------" << endl;
       while(actual!=NULL&& encontrado!=true){

        if(actual->Tp->getId()== nodoBuscado){
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
*/
bool Lista_Tipo_Producto::ListaVacia() {
	if (primero == NULL)
		return true;
	return false;
}

Lista_Tipo_Producto::~Lista_Tipo_Producto()
{
    //dtor
}

//****************Pila_Producto////
void Lista_Tipo_Producto::InsertarPilaEnXposicion(Pila_Producto pila, int posicion)
 {

    NodoTp* nuevo = new NodoTp;
	NodoTp *aux, *tmp;
	int x = 1;
    nuevo->dato=pila;
	if (ListaVacia()){
		primero = nuevo;
        primero->sig=primero;
        primero->anterior=primero;
        ultimo=primero; //aqui hace el enlace
    }

	if(posicion == 1)
	{
        ultimo->sig=nuevo;
		nuevo->sig = primero;
		nuevo->anterior=ultimo;
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
		//Ojo
	}

 }

