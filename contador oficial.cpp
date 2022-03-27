#include <iostream>
#include<cstdlib>
#include<fstream>
#include<string.h>
#include <math.h>
#include <stdio.h>
using namespace std;
string linea;
string texto;

int contarpalabras( string );

int main()
{
    int n, opcion;

    do
    {
        printf( "\n   CONTADOR DE PALABRAS DE UN ARCHIVO TXT", 163 );
        printf( "\n   1. Iniciar conteo del texto selecionado", 163 );
        printf( "\n   2. Salir." );
        printf( "\n\n   Introduzca opci%cn : ", 162 );

        scanf( "%d", &opcion );

        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1: ifstream archivo ("C://Users//rvale//Desktop//programacion//Lab 4//lady-gaga.txt");
	
					while(getline(archivo,linea)){
					texto=texto+linea+ " ";	
					}

    				archivo.close();
					cout<<"el numero de palabras es: "<<contarpalabras(texto)<<endl;
					ofstream archivo2 ("C://Users//rvale//Desktop//programacion//Lab 4//lady-gaga.txt");
					archivo2 << "El archivo de texto tiene "<<contarpalabras(texto) << " palabras";
					system("pause");
	
					return EXIT_SUCCESS;
         }

         /* Fin del anidamiento */

    } while ( opcion != 2 );

    return 0;
}
int contarpalabras(string text){
	int palabras=0;
	for(int i=1; text[i]!='\0' ;i++){
	if (text[i-1]==' '&& isalpha(text[i]))
	  ++palabras;	
	}
	if(isalpha(text[0])) {
		++palabras;
	}
	return palabras;
}