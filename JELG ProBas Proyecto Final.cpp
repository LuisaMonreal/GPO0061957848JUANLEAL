//Avance proyecto FINAL de Programación Básica.
//DATOS DE IDENTIFICACIÓN.
//Grupo: 006 A2022.
//Nombre del Alumno: Juan Enrique Leal Gutiérrez.
//Matricula del alumno: 1957848.
//Nombre de la Maestra: Luisa Alejandra Monreal Mendez.
#include <iostream>
#include <math.h>
#include <conio.h>
#include <string>
#include <string.h>
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <cstring>
#include <cstdlib>
#include <stdlib.h>
#include <fstream> 

using namespace std;

int* numart, * fecha, registros;
string* nombrart, * descripcion, * clasificacion, * plataforma, * genero, * caracteristicas; //datos a registrar.
float* preuni, * iva, * total;

void alta();
void eliminar();
void modificar();
void lista();
void archivo();

int main()
{
	int opcion;
	printf("\t*******STARDUST GAMES*******\n");
	printf("\n Buenos dias, por favor ingrese una opcion valida:\n 1.-Agregar Articulos \n 2.-Modificar Articulos \n 3.-Eliminar Articulos \n 4.-Lista de articulos\n 5.-Limpiar pantalla \n 6.-Salir del programa\n");
	scanf_s("%d", &opcion);

	switch (opcion)
	{
	case 1://Agregar Articulos
		alta();
		system("pause");
		return main();
		break;

	case 2://Modificar Articulos
		modificar();
		system("pause");
		return main();
		break;

	case 3://Eliminar Articulos
		eliminar();
		system("pause");
		return main();
		break;

	case 4://Lista de Articulos
		lista();
		system("pause");
		return main();
		break;

	case 5://Limpiar pantalla
		system("cls");
		return main();
		break;

	case 6://Salir del programa
		archivo();
		exit(1);
		break;

	default:
		printf("\nPor favor ingrese una opcion valida :P\n");
		return main();
		break;
	}
}

void alta()
{
	printf("\n Cuantos registros desea dar de alta \n");
	scanf_s("%d", &registros);
	numart = new int[registros];
	fecha = new int[registros];
	nombrart = new string[registros];
	descripcion = new string[registros];
	clasificacion = new string[registros];
	plataforma = new string[registros];
	genero = new string[registros];
	caracteristicas = new string[registros];
	preuni = new float[registros];
	iva = new float[registros];
	total = new float[registros];

	//uso del arreglo
	for (int i = 0; i < registros; i++)
	{
		printf("\nIngrese el numero de articulo\n");
		scanf_s("%d", &numart[i]);
		int n = 1;
		do
		{

			if (numart[i] != numart[i - n])
			{
				n = n + 1;
			}
			else
			{
				printf("\nEl numero de articulo ya existe\n");
				printf("\nIngrese el numero de articulo\n");
				scanf_s("%d", &numart[i]);
				n = n + 1;
			}
		} while (n < registros);

		printf("\nIngrese el a%co de lanzamiento del articulo\n", 164);
		scanf_s("%d", &fecha[i]);
		printf("\nIngrese el nombre del articulo\n");
		cin.ignore();
		getline(cin, nombrart[i]);
		printf("\nIngrese la descripcion del articulo\n");
		getline(cin, descripcion[i]);
		printf("\nIngrese la clasificacion del articulo\n");
		getline(cin, clasificacion[i]);
		printf("\nIngrese la plataforma donde esta disponible el articulo\n");
		getline(cin, plataforma[i]);
		printf("\nIngrese el genero del articulo\n");
		getline(cin, genero[i]);
		printf("\nIngrese las caracteristicas del articulo\n");
		getline(cin, caracteristicas[i]);
		printf("\nIngrese el precio unitario del articulo\n");
		scanf_s("%f", &preuni[i]);
		iva[i] = preuni[i] * .16;
		total[i] = preuni[i] + iva[i];
		if ((registros - 1) == i)
		{
			int desicion;
			printf("\nDesea dar alta otro articulo \n 1-.Si\n 2.-No\n");
			scanf_s("%d", &desicion);
			switch (desicion)
			{
			case 1://Si
				registros = registros + 1;

			case 2://No
				break;

			default:
				printf("\nPor favor ingrese una opcion valida :P\n");

			}
		}
	}
}

void modificar()
{
	int modificar;
	//switch
	do
	{
		printf("ingrese el numero de articulo a modificar\n");
		scanf_s("%d", &modificar);
	} while (modificar < 0);

	for (int i = 0; i < registros; i++)
	{
		if (modificar == numart[i])
		{
			printf("\nIngrese el a%co de lanzamiento del articulo\n", 164);
			scanf_s("%d", &fecha[i]);
			printf("\nIngrese el nombre del articulo\n");
			cin.ignore();
			getline(cin, nombrart[i]);
			printf("\nIngrese la descripcion del articulo\n");
			getline(cin, descripcion[i]);
			printf("\nIngrese la clasificacion del articulo\n");
			getline(cin, clasificacion[i]);
			printf("\nIngrese la plataforma donde esta disponible el articulo\n");
			getline(cin, plataforma[i]);
			printf("\nIngrese el genero del articulo\n");
			getline(cin, genero[i]);
			printf("\nIngrese las caracteristicas del articulo\n");
			getline(cin, caracteristicas[i]);
			printf("\nIngrese el precio unitario del articulo\n");
			scanf_s("%f", &preuni[i]);
		}
	}
}

void eliminar()
{
	int eliminar2;
	printf("ingrese el numero de articulo a eliminar\n");
	scanf_s("%d", &eliminar2);

	for (int i = 0; i < registros; i++)
	{
		if (eliminar2 == numart[i])
		{
			numart[i] = 0;
		}
	}
}

void lista()
{
	int opc2;
	string busqueda1, busqueda2;
	printf("\nBuscar por:\n1.- clasificacion\n 2.- genero\n");
	scanf_s("%d", &opc2);
	switch (opc2)
	{
	case 1://Buscar por clasificacion
		printf("ingrese la clasificacion a buscar\n");
		cin.ignore();
		getline(cin, busqueda1);
		for (int i = 0; i < registros; i++)
		{
			if (clasificacion[i] == busqueda1)
			{
				printf("\nEl Numero de articulo es:%d\n", numart[i]);
				printf("\nEl Nombre del articulo es:%s\n", nombrart[i].c_str());
				printf("\nLa fecha de salida del articulo es:%d\n", fecha[i]);
				printf("\nLa clasificacion del articulo es:%s\n", clasificacion[i].c_str());
				printf("\nLas caracteristicas del articulo son:%s\n", caracteristicas[i].c_str());
				printf("\nLa descripcion del articulo es:%s\n", descripcion[i].c_str());
				printf("\nEl genero del articulo es:%s\n", genero[i].c_str());
				printf("\nLas plataformas en las que esta disponible el articulo son:%s\n", plataforma[i].c_str());
				printf("\nEl precio unitario del articulo es:%f\n", preuni[i]);
				printf("\nEl iva del precio del articulo es:%f\n", iva[i]);
				printf("\nEl precio total del articulo es:%f\n", total[i]);
			}
		}

		break;

	case 2://Buscar por genero
		printf("ingrese el genero a buscar\n");
		cin.ignore();
		getline(cin, busqueda2);
		for (int i = 0; i < registros; i++)
		{
			if (genero[i] == busqueda2)
			{
				printf("\nEl Numero de articulo es:%d\n", numart[i]);
				printf("\nEl Nombre del articulo es:%s\n", nombrart[i].c_str());
				printf("\nLa fecha de salida del articulo es:%d\n", fecha[i]);
				printf("\nLa clasificacion del articulo es:%s\n", clasificacion[i].c_str());
				printf("\nLas caracteristicas del articulo son:%s\n", caracteristicas[i].c_str());
				printf("\nLa descripcion del articulo es:%s\n", descripcion[i].c_str());
				printf("\nEl genero del articulo es:%s\n", genero[i].c_str());
				printf("\nLas plataformas en las que esta disponible el articulo son:%s\n", plataforma[i].c_str());
				printf("\nEl precio unitario del articulo es:%f\n", preuni[i]);
				printf("\nEl iva del precio del articulo es:%f\n", iva[i]);
				printf("\nEl precio total del articulo es:%f\n", total[i]);
			}
		}

	default:
		printf("\nPor favor ingrese una opcion valida :P\n");
		lista();
		break;
	}
}

void archivo()
{
	ofstream archivo; //clase ifstream para leer archivos
	string nombrearchivo;
	int texto;
	float decimal;
	string texto2;

	nombrearchivo = "Articulosprueba";

	archivo.open(nombrearchivo.c_str(), ios::out);

	if (archivo.fail())
	{
		printf("ERROR NO SE PUDO CREAR EL ARCHIVO");
		system("pause");
		exit(1);
	}

	archivo << "Numero de articulo" << "\t";
	archivo << "Nombre del articulo" << "\t";
	archivo << "año" << "\t";
	archivo << "descripcion" << "\t";
	archivo << "clasificacion" << "\t";
	archivo << "plataforma" << "\t";
	archivo << "genero" << "\t";
	archivo << "caracteristicas" << "\t";
	archivo << "precio unitario" << "\t";
	archivo << "iva" << "\t";
	archivo << "total" << "\n";

	for (int i = 0; i < registros; i++)
	{
		if (numart[i] == 0)
		{
			texto = numart[i];
			archivo << texto << "\t" << "\n";
		}
		else
		{
			texto = numart[i];
			archivo << texto << "\t";
			texto2 = nombrart[i];
			archivo << texto2 << "\t";
			texto = fecha[i];
			archivo << texto << "\t";
			texto2 = descripcion[i];
			archivo << texto2 << "\t";
			texto2 = clasificacion[i];
			archivo << texto2 << "\t";
			texto2 = plataforma[i];
			archivo << texto2 << "\t";
			texto2 = genero[i];
			archivo << texto2 << "\t";
			texto2 = caracteristicas[i];
			archivo << texto2 << "\t";
			decimal = preuni[i];
			archivo << decimal << "\t";
			decimal = iva[i];
			archivo << decimal << "\t";
			decimal = total[i];
			archivo << decimal << "\n";
		}
	}

	archivo.close();
}