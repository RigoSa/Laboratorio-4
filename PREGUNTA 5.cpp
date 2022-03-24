#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <cstdlib>

using namespace std;
int main()
{
    int n, opcion;

    do
    {
        printf( "\n        TIENDA DE ZAPATOS SALOMON", 163 );
		printf( "\n   1. Nueva Operacion.", 163 );
        printf( "\n   2. Salir." );
        printf( "\n\n   Introduzca opci%cn: ", 162 );

        scanf( "%d", &opcion );

        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1: float descuento, numero_de_zapatos, subtotal, total;
					cout << "Ingrese la cantidad de zapatos: ";
   					cin >> numero_de_zapatos;
    				cin.get();
    				subtotal=numero_de_zapatos*80;
    				descuento=0;
    				if(numero_de_zapatos>10&&numero_de_zapatos<=20)
        			descuento=subtotal*0.1;
    				if(numero_de_zapatos>20&&numero_de_zapatos<=30)
        				descuento=subtotal*0.2;
    				if(numero_de_zapatos>30)
        				descuento=subtotal*0.4;
    				total=subtotal-descuento;
    				cout << "Descuento Promocion: " << descuento << endl;
    				cout << "Precio total sin decuento: " << subtotal << endl;
    				cout << "PRECIO TOTAL A PAGAR: " << total << endl;
    				cout << endl;
    				cout << "GRACIAS POR LA COMPRA";
    				
    				return EXIT_SUCCESS;
         }

         /* Fin del anidamiento */

    } while ( opcion != 2 );

    return 0;
}