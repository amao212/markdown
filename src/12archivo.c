#include <stdio.h>
#include <stdlib.h>

void writeletra()
{
    FILE *pf;
	char letra='a';

	if (!(pf=fopen("datos.txt","w"))) /* otra forma de controlar si se produce un error */
	{
		printf("Error al abrir el fichero");
		exit(0); /* abandonamos el programa */
	}
	else fputc(letra,pf);
	fclose(pf);
	// fgetc( puntero_fichero );
}

void writeFraseArchivo()
{
    FILE *pf;
	char *cad="Me llamo Vicente";
	if (!(pf=fopen("datos.txt","w"))) /* controlamos si se produce un error */
	{
		printf("Error al abrir el fichero");
		exit(0); /* abandonamos el programa */
	}
	else 
	{
		fputs(cad,pf); /* o también así: fputs("Me llamo Vicente",pf); */
		fclose(pf);
	}
	// fgets( variable_array, variable_entera, puntero_fichero );

}

void main()
{
    writeFraseArchivo();

}