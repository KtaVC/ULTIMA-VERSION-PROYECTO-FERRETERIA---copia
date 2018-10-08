#include "Cliente.h"

Cliente::Cliente()
{
   id=0;
   nombre="";
}

Cliente::Cliente(int id,string nombre)
{
    this->id = id;
    this->nombre = nombre;
}

void Cliente::leerListaAComprar()
{
    string contenido;
    contenido += "clienteLista.txt";
    ifstream fs(contenido.c_str(), ios:: in );
    char linea[128];
    long contador = 0L;
    if (fs.fail())
      cerr << "El fichero no existe" << endl;
    else
      while (!fs.eof()) {
        fs.getline(linea, sizeof(linea));
        cout << linea << endl;
        if ((++contador % 24) == 0) {
          cout << "continuar...";
          cin.get();
        }
      }
    fs.close();
}
void Cliente::setId(int id)
{
    this->id = id;
}

int Cliente::getId()
{
    return id;
}

void Cliente::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Cliente::getNombre()
{
    return nombre;
}

Cliente::~Cliente()
{
    //dtor
}
