//Primer Avance proyecto de Programación Básica.
//DATOS DE IDENTIFICACIÓN.
//Grupo: 006 A2022.
//Nombre del Alumno: Juan Enrique Leal Gutiérrez.
//Matricula del alumno: 1957848.
//Nombre de la Maestra: Luisa Alejandra Monreal Mendez.
#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>

using namespace std;

struct tienda
{
	int numart;
	float preuni, iva, total;
	string articulo, descripcion, fecha, clasi, plataforma, genero, carater; //datos a registrar.
};

int main()
{
	tienda compras[3];
	int opcion, busqueda;

	do
	{
		printf("\t******STARDUST GAMES******\n");
		printf("\n Buenos dias, por favor seleccione una opcion valida:\n 1.-Agregar Articulo.\n 2.-Modificar Articulo.\n 3.-Eliminar Articulo\n 4.-Lista de articulos pendientes\n 5.-Limpiar pantalla\n 6.-Salir del programa\n");
		scanf_s("d", &opcion);
		switch (opcion)
		{
		case 1://Agregar Articulo
			for (int i = 0; i < 3; i++)
			{
				do
				{
					printf("\ningrese el numero del articulo \n");
					scanf_s("%d", &compras[i].numart);
				} while (compras[i].numart == compras[i - 1].numart || compras[i].numart == compras[i - 2].numart);
				{
					printf("\nPor favor ingrese el nombre del articulo\n");
					cin.ignore();
					getline(cin, compras[i].articulo);
					printf("\nPor favor ingrese la fecha de lanzamiento del articulo\n");
					cin.ignore();
					getline(cin, compras[i].fecha);
					printf("\nPor favor ingrese la clasificacion del articulo\n");
					cin.ignore();
					getline(cin, compras[i].clasi);
					printf("\nPor favor ingrese las caracteristicas del articulo\n");
					cin.ignore();
					getline(cin, compras[i].carater);
					printf("\nPor favor ingrese la descripcion del articulo\n");
					cin.ignore();
					getline(cin, compras[i].descripcion);
					printf("\nPor favor ingrese el genero del articulo\n");
					cin.ignore();
					getline(cin, compras[i].genero);
					printf("\nPor favor ingrese las plataformas en las que esta disponible el articulo\n");
					cin.ignore();
					getline(cin, compras[i].plataforma);
					printf("\nPor favor ingrese el precio unitario del articulo\n");
					scanf_s("%f", &compras[i].preuni);
					compras[i].iva = compras[i].preuni * .16;
					compras[i].total = compras[i].preuni + compras[i].iva;
				}
				return main();
				break;

		case 2://Modificar Articulo (Aun no disponible)
			return main();
			break;

		case 3://Eliminar Articulo (Aun no disponible)
			return main();
			break;

		case 4://Lista de Articulos Vigentes
			int opcion2;
			printf("\nBuscar por:\n1.-Numero de articulo\n 2.-Mostrar Todo\n");
			scanf_s("%d", &opcion2);
			if (opcion2 == 1)
			{
				printf("\ningrese Numero de articulo\n");
				scanf_s("%d", &busqueda);

				//Se van a imprimir los datos por posicion. 
				for (int i = 0; i < 3; i++)
				{
					if (busqueda == compras[i].numart)
					{
						printf("\nEl Numero de articulo es:%d\n", compras[i].numart);
						printf("\nEl Nombre del articulo es:%s\n", compras[i].articulo.c_str());
						printf("\nLa fecha de salida del articulo es:%s\n", compras[i].fecha.c_str());
						printf("\nLa clasificacion del articulo es:%s\n", compras[i].clasi.c_str());
						printf("\nLas caracteristicas del articulo son:%s\n", compras[i].carater.c_str());
						printf("\nLa descripcion del articulo es:%s\n", compras[i].descripcion.c_str());
						printf("\nEl genero del articulo es:%s\n", compras[i].genero.c_str());
						printf("\nLas plataformas en las que esta disponible el articulo son:%s\n", compras[i].plataforma.c_str());
						printf("\nEl precio unitario del articulo es:%f\n", compras[i].preuni);
						printf("\nEl iva del precio del articulo es:%f\n", compras[i].iva);
						printf("\nEl precio total del articulo es:%f\n", compras[i].total);
					}
				}
			}
			else
			{
				for (int i = 0; i < 3; i++)
				{
					if (compras[i].numart != 0)
					{
						printf("\nEl Numero de articulo es:%d\n", compras[i].numart);
						printf("\nEl Nombre del articulo es:%s\n", compras[i].articulo.c_str());
						printf("\nLa fecha de salida del articulo es:%s\n", compras[i].fecha.c_str());
						printf("\nLa clasificacion del articulo es:%s\n", compras[i].clasi.c_str());
						printf("\nLas caracteristicas del articulo son:%s\n", compras[i].carater.c_str());
						printf("\nLa descripcion del articulo es:%s\n", compras[i].descripcion.c_str());
						printf("\nEl genero del articulo es:%s\n", compras[i].genero.c_str());
						printf("\nLas plataformas en las que esta disponible el articulo son:%s\n", compras[i].plataforma.c_str());
						printf("\nEl precio unitario del articulo es:%f\n", compras[i].preuni);
						printf("\nEl iva del precio del articulo es:%f\n", compras[i].iva);
						printf("\nEl precio total del articulo es:%f\n", compras[i].total);
					}
				}
			}
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
	} while (opcion != 5);
	system("pause");
}