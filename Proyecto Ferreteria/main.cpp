#include "Interfaz.h"
#include <iostream>
#include"Lista_Sucursal.h"
#include "Pila_Producto.h"
#include "Tipo_Producto.h"
#include "Lista_Tipo_Producto.h"
#include "Lista_Seccion.h"
#include "Lista_Sucursal.h"
using namespace std;

int main()
{
    //Interfaz i;
    //i.Menu_Principal();
   /* Sucursal *su1= new Sucursal(123, "Alajuela2");
    Sucursal *su2= new Sucursal(456, "Chep");
    Lista_Sucursal l;
    l.InsertarEnXposicion(su1,0);
    l.InsertarEnXposicion(su2,1);
    l.Mostrar();*/
    Tipo_Producto a(123, "Clavo");
    Tipo_Producto b(567, "Puerta");
    Tipo_Producto c(207, "Goma");
    Tipo_Producto d(852, "escoba");
    Tipo_Producto f(159, "gato");
    Pila_Producto pg;
    Pila_Producto pi;
    Pila_Producto pa;

    pa.Apilar(c);
    pa.Apilar(d);
    pg.Apilar(f);


    pi.Apilar(a);
    pi.Apilar(b);
    //pi.Mostrar();
    Lista_Tipo_Producto miLista;
    miLista.InsertarPilaEnXposicion(pi,1);
    miLista.InsertarPilaEnXposicion(pg,2);
    miLista.InsertarPilaEnXposicion(pa,3);
    miLista.Mostrar();
    //miLista.Mostrar(pa);

    /*Pila_Producto *pi = new Pila_Producto();
    pi->Apilar(a);
    pi->Apilar(b);
    pi->Mostrar();*/

    /*Pila_Producto pi;
    pi.Apilar(a);
    pi.Apilar(b);
    //pi.Mostrar();

    miLista.InsertarPilaEnXposicion(pi, 1);
    miLista.Mostrar(pi);*/
    /*Sucursal *miSucursal = new Sucursal(123, "Alajuela");
    Lista_Sucursal miLista;
    miLista.InsertarEnXposicion(miSucursal,152);
    miLista.Mostrar();*/



//   miLista.InsertarPilaEnXposicion(pi, 0);



    return 0;
}
