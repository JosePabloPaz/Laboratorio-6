//============================================================================
// Name        : Laboratorio.cpp
// Author      : Jose Pablo Paz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "CCadena.h"
#include "ListaAb.h"
using namespace std;

// Plantilla de funci�n que incrementa el valor del objeto
// dado como par�metro aplicando el operador ++
template<class DATO>
void Incrementar(DATO &d)
{
   d++;
}

// Plantilla de funci�n que mustra el valor del objeto
// dado como par�metro formando una lista separada con comas
template<class DATO>
void Mostrar(DATO &d)
{
   cout << d << ", ";
}

int main() {
	// Declaraci�n de una lista de enteros:
	   Lista<int> ListaInt;
	   int a = 1, valor;
	   string valorA;

	   cout << "Ingrese 1 para ingresar un dato o 0 para seguir" << endl;
	   cin >> a;

	   while (a==1){
		   cout << "Ingrese valor a insertar"<<endl;
		   cin>> valor;
		   ListaInt.Insertar(valor);
		   cout << "Ingrese 1 para ingresar un dato o 0 para seguir" << endl;
		   cin >> a;
	   }

	   // Mostrar lista:
	   cout << "---listado enteros---" << endl;
	   ListaInt.ParaCada(Mostrar); // Aplicamos la funci�n Mostrar a cada elemento
	   cout << endl << "-------------" << endl;


	   // Declaraci�n de una lista de floats:
	   Lista<string> ListaFloat;

	   // Inserci�n de algunos valores:
	   cout << "Ingrese 1 para ingresar un dato o 0 para seguir" << endl;
	   cin >> a;

	   while (a==1){
		   cout << "Ingrese valor a insertar"<<endl;
		   cin>> valorA;
		   ListaFloat.InsertarFinal(valorA);
		   cout << "Ingrese 1 para ingresar un dato o 0 para seguir" << endl;
		   cin >> a;
	   }


	   // Mostrar lista:
	   cout << "---listado strings---" << endl;
	   ListaFloat.ParaCada(Mostrar);
	   cout << endl << "-------------" << endl;

	   system("pause");
	   return 0;;
}
