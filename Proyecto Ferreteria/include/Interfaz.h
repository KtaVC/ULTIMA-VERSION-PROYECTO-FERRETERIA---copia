#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "Lista_Sucursal.h"
#include "Lista_Seccion.h"
#include "Lista_Tipo_Producto.h"
#include<stdlib.h>
#include <limits>
#include <exception>
#include <windows.h>
#include<iostream>
#include <string>
#include<bits/stdc++.h>
#include <fstream>
#include <stdio.h>
#include <time.h>
using namespace std;


class Interfaz
{
    public:

        void Menu_Principal();
        void MenuPrincipalAdministrador();
	    void Menu_Administrador_Sucursal();
	    //void Menu_Administrador_Seccion();
	    //void Menu_Administrador_Tipo_Producto();
	    //void Menu_Cliente();
        void Menu_Sucursal();
        void Menu_Seccion();
        void Menu_Tipo_Producto();
        void leerArchivo();
};

#endif // INTERFAZ_H
