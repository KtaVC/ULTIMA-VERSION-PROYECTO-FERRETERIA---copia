#include "Lista_Seccion.h"

Lista_Seccion::Lista_Seccion()
{
  inicioSe = nullptr;
}

void Lista_Seccion::InsertarEnXposicion(Seccion* miSe, int posicionSe)
{ /*Ingresa nuevos nodos segun la posicion que ingresen*/
	Nodo* nuevoSe = new Nodo;
	Nodo *auxSe, *tmpSe;
	int xSe = 1;

	nuevoSe->Se = miSe;
	nuevoSe->sigSe = nullptr;
	nuevoSe->anteriorSe = nullptr;

	if (ListaVacia())
		inicioSe = nuevoSe;

	if(posicionSe == 1)
	{
		nuevoSe->sigSe = inicioSe;
		inicioSe->anteriorSe = nuevoSe;
		inicioSe = nuevoSe;
	}
	else {
		auxSe = inicioSe;
		while (xSe < posicionSe && auxSe->sigSe != nullptr) {
			tmpSe = auxSe;
			auxSe = auxSe->sigSe;
			xSe++;
		}
		tmpSe->sigSe = nuevoSe;
		nuevoSe->sigSe = auxSe;
		nuevoSe->anteriorSe = tmpSe;
		auxSe->anteriorSe = nuevoSe;
	}
}

void Lista_Seccion::Mostrar()
{
    Nodo* actualSe = new Nodo();
    actualSe=primeroSe;
    if(primeroSe!=NULL){
    cout << "--------------------------- Secciones ---------------------------" << endl;
       while(actualSe!=NULL){
        cout<<"\n "<<actualSe->Se;
        actualSe=actualSe->sigSe; //cuando trae dato no se si es Se o el nuevo miSe
       }
}else{
    cout<<"\nLa lista esta vacia";
}
}

void Lista_Seccion::Buscar(Seccion* miSe)
{
    Nodo* actualSe = new Nodo();
    actualSe=primeroSe;
    bool encontradoSe=false;
    int nodoBuscadoSe=0;
    cout<<"Ingrese la Seccion a buscar : ";
    cin>>nodoBuscadoSe;

    if(primeroSe!=NULL){
    cout << "--------------------------- Secciones ---------------------------" << endl;
       while(actualSe!=NULL&& encontradoSe!=true){

        if(actualSe->Se->getId()== nodoBuscadoSe){
            cout<<"\nSecion con el dato (" <<nodoBuscadoSe<< ") Encontrado\n\n";
            encontradoSe=true;
        }
        actualSe=actualSe->sigSe;
       }
       if(!encontradoSe){
        cout<<"\nSeccion no encontrada\n\n";
       }
}else{
    cout<<"\nLa lista esta vacia";
}
}

void Lista_Seccion::Eliminar(Seccion* miSe)
{
    Nodo* actualSe = new Nodo();
    actualSe=primeroSe;
    Nodo* anteriorSe= new Nodo();
    anteriorSe=NULL;
    bool encontradoSe=false;
    int nodoBuscadoSe=0;
    cout<<"Ingrese la Seccion a eliminar : ";
    cin>>nodoBuscadoSe;

    if(primeroSe!=NULL){
    cout << "--------------------------- Secciones ---------------------------" << endl;
       while(actualSe!=NULL&& encontradoSe!=true){

        if(actualSe->Se->getId()== nodoBuscadoSe){
            cout<<"\nSeccion con el dato (" <<nodoBuscadoSe<< ") Encontrado";

            if(actualSe==primeroSe){
                    primeroSe=primeroSe->sigSe;
                    primeroSe->atrasSe=NULL;
                }else if(actualSe==ultimoSe){
                   anteriorSe->sigSe=NULL;
                   ultimoSe=anteriorSe;
                }else{
                    anteriorSe->sigSe=actualSe->sigSe;
                    actualSe->sigSe->atrasSe=anteriorSe;
                }
            }
            cout<<"\n Seccion eliminada";
            encontradoSe=true;
        }
        anteriorSe=actualSe;
        actualSe=actualSe->sigSe;
       }
       if(!encontradoSe){
        cout<<"\nSeccion no encontrada\n\n";
       }else{
    cout<<"\nLa lista esta vacia";
}
}


bool Lista_Seccion::ListaVacia() {
	if (inicioSe == nullptr)
		return true;
	return false;
}

Lista_Seccion::~Lista_Seccion()
{
    //dtor
}
