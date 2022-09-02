//Primer Avance proyecto de Programación Básica.
//DATOS DE IDENTIFICACIÓN.
//Grupo: 006 A2022.
//Nombre del Alumno: Juan Enrique Leal Gutiérrez.
//Matricula del alumno: 1957848.
//Nombre de la Maestra: Luisa Alejandra Monreal Mendez.
#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;

int main()
{
	int numart, opcion;
	float preuni, iva, total;
	string articulo, descripcion, fecha, clasi, plataforma, genero, carater; //datos a registrar.

	cout << "\n" << "\t ******STARDUST GAMES******    \n";
	cout << "\n" << "\n Buenos dias, por favor seleccione una opcion valida:\n 1.-Agregar Articulo.\n 2.-Modificar Articulo.\n 3.-Eliminar Articulo\n 4.-Lista de articulos pendientes\n 5.-Limpiar pantalla\n 6.-Salir del programa\n";
	cin >> opcion;
	switch (opcion)
	{
	case 1://Agregar Articulo
		cout << "\n" << "Por favor ingrese el numero del articulo\n";
		cin >> numart;
		cout << "\n" << "Por favor ingrese el nombre del articulo\n";
		cin.ignore();
		getline(cin, articulo);
		cout << "\n" << "Por favor ingrese la fecha de lanzamiento del articulo\n";
		cin.ignore();
		getline(cin, fecha);
		cout << "\n" << "Por favor ingrese la clasificacion del articulo\n";
		cin.ignore();
		getline(cin, clasi);
		cout << "\n" << "Por favor ingrese las caracteristicas del articulo\n";
		cin.ignore();
		getline(cin, carater);
		cout << "\n" << "Por favor ingrese la descripcion del articulo\n";
		cin.ignore();
		getline(cin, descripcion);
		cout << "\n" << "Por favor ingrese el genero del articulo\n";
		cin.ignore();
		getline(cin, genero);
		cout << "\n" << "Por favor ingrese las plataformas en las que esta disponible el articulo\n";
		cin.ignore();
		getline(cin, plataforma);
		cout << "\n" << "Por favor ingrese el precio unitario del articulo\n";
		cin >> preuni;
		iva = (preuni * 0.16);
		total = (preuni + iva);
		cout << "\n" << "El impuesto aplicado al articulo sera:\n" << iva << "\n";
		cout << "\n" << "El precio total del articulo sera:\n" << total << "\n";
		return main();
		break;

	case 2://Modificar Articulo (Aun no disponible)
		return main();
		break;

	case 3://Eliminar Articulo (Aun no disponible)
		return main();
		break;

	case 4://Lista de Articulos Vigentes (Aun no disponible)
		return main();
		break;

	case 5://Limpiar Pantalla
		system("cls");
		return main();
		break;

	case 6://Salir
		cout << "\n" << "Muchas gracias por utilizar este programa :D\n";
		break;

	default:
		cout << "\n" << "Por favor ingrese una opcion valida :P\n";
		return main();
	}
	system("pause");//Por si acaso
}