#include "Interfaz.h"


/////aqui va el metodo guardar archivo



void Interfaz::Menu_Principal()
{
char OpcionMenuP = 0;

	while (OpcionMenuP != '4')
	{
		cout << "*************************** Bienvenidos a Ferreteria Trebol **************************" << endl;
		cout << "*  [1] Gestion de Sucursales\n*  [2] Gestion de Secciones\n*  [3] Gestion de Productos\n*  [4] Salir\n*";
		cout << "*************************************************************************************************************" << endl;
		cin >> OpcionMenuP;
		system("cls");
		switch (OpcionMenuP)
		{
		case '1': // case menu principal
			Menu_Sucursal();
			system("cls");
			break;
		case '2': // case menu principal
			Menu_Seccion();
			system("cls");
			break;

        case '3':
            Menu_Tipo_Producto();
            system("cls");
            break;

		case '4'://menu principal
			//se sale por completo del programa
			exit(0);
			break;

		default:
			break;
		}
	}
}

void Interfaz::Menu_Sucursal()
{
Lista_Sucursal l;
Sucursal *s = new Sucursal;
int id,posicion;
string ubicacion;
char opcionC = 0;

while(opcionC != '6')
{
    cout << "********************* Ferreteria Trebol ***********************" << endl;
    cout << "   Cual opcion desea elegir:\n*  [1] Agregar Sucursal\n*  [2] Buscar Sucursal\n*  [3] Eliminar Sucursal \n*  [4] Modificar Sucursal \n*  [5] Mostrar Sucursal\n*  [6] Salir\n";
    cin>>opcionC;
    system("cls");
    switch(opcionC)
    {
    case '1':
            cout << "En que posicion desea ingresar la sucursal: " << endl;
            cin>>posicion;
		    cout << "Ingrese la informacion que se le solicita:\n" << endl;
			cout << "Identificacion de la sucursal: " << endl;
            cin >> id;
            try
            {
                if(cin.fail())
                {
                    throw 5;
                }
            }
            catch(int error)
            {
                if(error==5)
                {
                cout<<"Solo se permiten numeros"<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                system("pause");
                system("cls");
                cout<<"Ingrese el id  : "<<endl;
                cin>>id;

                }

            }

            cin.ignore();
            cout << "Ubicacion de la sucursal: " << endl;
            getline(cin,ubicacion);


            s = new Sucursal(id,ubicacion);
            l.InsertarEnXposicion(s,posicion);
            system("cls");
            break;

    case '2':
        s=new Sucursal(id);
        l.Buscar(s);
        l.Mostrar();
        system("pause");
        system("cls");
        break;


    case '3':
        cout<<"Ingrese el id de la sucursal que desea borrar: "<<endl;
        cin>>id;
        s=new Sucursal(id);
	    l.Eliminar(s);
	    l.Mostrar();
	    system("pause");
	    system("cls");
	    break;

	case '4':
	    /*c=new Carrera(id);
        l.modificar(c);
        l.mostrar_carrera();*/
        system("pause");
        system("cls");
        break;

    case '5':
        l.Mostrar();
        system("pause");
        system("cls");
        break;

    case '6':
        Menu_Principal();
        system("cls");
        break;
    default:
        break;

		}
}
}

void Interfaz::Menu_Seccion()
{

}
void Interfaz::Menu_Tipo_Producto()
{

}
