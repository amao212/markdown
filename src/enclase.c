#include <stdio.h>



int main()

{

    int nroFrutas=0;

    char seleccion[10];

    char *futasSeleccionadas[5];

    char *frutas[] = {"pina","banana","coco","fresa","manzana"};

                //indice:  0      1        2       3       4



    printf("\n\n Seleciona las frutas para tu ensalada: ");

    for(int indice = 0; indice < 5 ; indice++)

        printf("\n %i. %s ",indice+1, frutas[indice]);

   

    printf("\n\n Ingresa tus frutas para un batido : ");

    fgets(seleccion, 10 , stdin);   //  "1" "2" "4"
for(int i = 0; i < 10 ; i++)

    {

        switch(seleccion[i])

        {

            case '1' :  futasSeleccionadas [nroFrutas++] = frutas[0];   break;

            case '2' :  futasSeleccionadas [nroFrutas++] = frutas[1];   break;

            case '3' :  futasSeleccionadas [nroFrutas++] = frutas[2];   break;

            case '4' :  futasSeleccionadas [nroFrutas++] = frutas[3];   break;

            case '5' :  futasSeleccionadas [nroFrutas++] = frutas[4];   break;

        }

    }



    printf("\n\n Ud. selecciono %i frutas : %s \n ", nroFrutas, seleccion );

    for(int i = 0; i < nroFrutas ; i++)

        printf("%s ", futasSeleccionadas[i]);

    return 0;

}