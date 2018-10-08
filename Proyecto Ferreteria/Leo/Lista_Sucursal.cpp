#include "Lista_Sucursal.h"

Lista_Sucursal::Lista_Sucursal()
{
	inicioSu = NULL;

}

void Lista_Sucursal::InsertarEnXposicion(Sucursal *miSu, int posicionSu)
{
	//Ingresa nuevos nodos segun la posicion que ingresen
	Nodo* nuevoSu = new Nodo;
	Nodo *auxSu, *tmpSu;
	int xSu = 1;

	nuevoSu-> Su = miSu;
	nuevoSu->sigSu = NULL;

	if (ListaVacia())
		inicioSu = nuevoSu;
	if (posicionSu == 1)
	{
		nuevoSu->sigSu = inicioSu;
		inicioSu = nuevoSu;
	}
	else {
		auxSu = inicioSu;
		while (xSu < posicionSu && auxSu->sigSu != NULL)
		{
			tmpSu = auxSu;
			auxSu = auxSu->sigSu;
			xSu++;
		}
		tmpSu->sigSu = nuevoSu;
		nuevoSu->sigSu = auxSu;


	}
}

void Lista_Sucursal::Eliminar(Sucursal* miSu)
{
    //Nodo *ultimo;
    Nodo* actualSu = new Nodo();
	actualSu = primeroSu;
	Nodo* anteriorSu=new Nodo();
	anteriorSu=NULL;
	bool encontradoSu = false;
	int nodoBuscadoSu = 0;
	cout << "Ingrese el id de la Sucursal a eliminar: ";
	cin >> nodoBuscadoSu;

	if (primeroSu != NULL) {
		while (actualSu != NULL && encontradoSu != true) {
			if (actualSu->Su->getId() == nodoBuscadoSu) {
				cout<<"\nSucursal con el dato "<< nodoBuscadoSu << "Encontrado\n\n";
				if(actualSu== primeroSu){
                    primeroSu=primeroSu->sigSu;
				}else if(actualSu==ultimoSu){
				anteriorSu->sigSu=NULL;
				ultimoSu=anteriorSu;
				}else{
				   anteriorSu->sigSu=actualSu->sigSu;
				}
				cout<<"Sucursal eliminada\n\n";

				encontradoSu = true;
			}
			anteriorSu=actualSu;
			actualSu = actualSu->sigSu;
		}
		if (!encontradoSu) {
			cout << "\nSucursal no encontrada\n\n";
		}
	}else {
		cout << "\nLa lista esta vacia\n\n";
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
	Nodo* actualSu = new Nodo();
	actualSu = primeroSu;
	bool encontradoSu = false;
	int nodoBuscadoSu = 0;
	cout << "Ingrese el id de la Sucursal a buscar: ";
	cin >> nodoBuscadoSu;

	if (primeroSu != NULL) {
		while (actualSu != NULL && encontradoSu != true) {
			if (actualSu->Su->getId() == nodoBuscadoSu) {
				cout<<"\nSucursal con el dato "<< nodoBuscadoSu << "Encontrado\n\n";
				encontradoSu = true;
			}
			actualSu = actualSu->sigSu;
		}
		if (!encontradoSu) {
			cout << "\nSucursal no encontrada\n\n";
		}
	}else {
		cout << "\nLa lista esta vacia\n\n";
	}

}

void Lista_Sucursal::Mostrar()
{
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
	Nodo* actualSu= new Nodo();
	actualSu = primeroSu;
	if (primeroSu != NULL) {
        cout << "--------------------------- Sucursales ---------------------------" << endl;
		while (actualSu != NULL) {
			cout << " " << actualSu->Su << endl; //aqui tiene que impimir la pila
			actualSu = actualSu->sigSu;
		}
	}
	else {
		cout << "La lista esta vacia \n\n";
	}

}

bool Lista_Sucursal::ListaVacia() {
	if (inicioSu == nullptr)
		return true;
	return false;
}




Lista_Sucursal::~Lista_Sucursal()
{
}

