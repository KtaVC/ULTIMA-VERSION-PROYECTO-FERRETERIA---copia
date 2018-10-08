#include "Interfaz.h"


/////aqui va el metodo guardar archivo

void Interfaz::leerArchivo()
{
    string contenido;
    contenido += "productos.txt";
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

void Interfaz::Menu_Principal() //Este menú muestra las formas de entrada al sistema
{                               //si entra como administrador o como cliente.
	char OpcionMenuP = 0;

	while (OpcionMenuP != '3')
	{
		cout << "*************************** Ferreteria Trebol **************************" << endl;
		cout << "*      Ingresar como:\n*      [1] Administrador\n*      [2] Cliente\n*      [3] Salir\n";
		cout << "********************************************************************" << endl;
		cin >> OpcionMenuP;
		system("cls");
		switch (OpcionMenuP)
		{
		case '1': // case menu principal
			MenuPrincipalAdministrador(); //Para administrador
			system("cls");
			break;
		case '2': // case menu principal
			//Menu_Cliente(); //Para cliente
			system("cls");
			break;

		case '3'://menu principal
			//se sale por completo del programa
			exit(0);
			break;

		default:
			break;
		}
	}
}

/*------------------------------------------------Menu para Administrador----------------------------------*/
void Interfaz::MenuPrincipalAdministrador(){
	char OpcionMenu = 0;
	//char clave = '1214';
	/*cout << "Digite su codigo de ingreso al sistema o presione cero (0) para regresar al menu:\n";
	cin >> clave;
	if (clave != '1214')
	{
     cout << "Acceso denegado" << endl;
	}
	system("pause");
	system("cls");

		switch (clave)
		{
		case '1214':*/

			while (OpcionMenu != '4')
			{
				cout << "*************************** Aerolinea XYZ ***************************\n";
				cout << "*   Digite la opcion que desea:\n*    [1] Administrar Sucursales\n*    [2] Administrar Secciones\n*    [3] Administrar Productos\n*    [4] Salir\n";
				cout << "*********************************************************************\n";
				cin >> OpcionMenu;
				system("cls");
				switch (OpcionMenu)
				{
				case '1': // case menu administrador
					Menu_Administrador_Sucursal(); //Para agregar sucursales
					system("cls");
					break;
				case '2': // case menu administrador
					//Menu_Administrador_Seccion(); //Para agregar secciones
					system("cls");
					break;
                case '3':// case menu administrador
                    //Menu_Administrador_Tipo_Producto();//Para agregar tipos de productos
                    system("cls");
					break;

				case '4'://menu administrador
					Menu_Principal(); //En lugar de salir, regresa al Menu Principal
					break;

				default:
					break;
				}
			}
			//break; /*Fin case 1214*/

		/*case '0':
			Menu_Principal();
			break;

		default:
			cout << "Acceso denegado" << endl;
			system("pause");
			Menu_Principal();
			break;
		}*/
}

void Interfaz::Menu_Administrador_Sucursal()
{
Lista_Sucursal l;
Sucursal *s = new Sucursal;
int id,posicion;
string ubicacion;
char opcionC = 0;

while(opcionC != '5')
{
    cout << "********************* Ferreteria Trebol ***********************" << endl;
    cout << "   Cual opcion desea elegir:\n*  [1] Agregar Sucursal\n*  [2] Buscar Sucursal\n*  [3] Eliminar Sucursal \n*  [4] Mostrar Sucursal\n*  [5] Salir\n";
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
	    l.Mostrar();
        system("pause");
        system("cls");
        break;

    case '5':
        Menu_Principal();
        system("cls");
        break;
    default:
        break;

		}
}
}

/*void Interfaz::Menu_Principal()
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
	    c=new Carrera(id);
        l.modificar(c);
        l.mostrar_carrera();
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
}*/

void Interfaz::Menu_Seccion()
{

}
void Interfaz::Menu_Tipo_Producto()
{

}
