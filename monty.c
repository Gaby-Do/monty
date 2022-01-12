#include "monty.h"

/**
 *main - interpreter for Monty ByteCodes files
 *@argc: number of arguments
 *@argv: vector of arguments
 *Return: integer
 */
int main(int argc, char *argv[])
{
	FILE file;
	char *str = NULL, **tok = NULL;
	size_t len = 0; /**size para getline*/

/**chequear cantidad de argumentos y si es distinto de 2 devolver error*/
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
/**abrir el argumento y chequear: que sea valido y que todo el contenido sea valido (.m)*/
	file = argv[1];
	o_file = fopen(file);
	status = stat("o_file")/* opcion para validar apertura*/
	if (o_file = NULL) /**SI NO LO PUDO ABRIR*/
	{
		fprintf(stderr, "Error: Can't open file %s\n",file);
	i	exit(EXIT_FAILURE);
	}
/** en el caso que se pueda abrir queremos ver el contenido chequearlo y/o ejecutarlo*/
	getline(&str , &len, o_file);
	if ((int)str == -1)
	{
		free(str);
		perror("error");
		exit(EXIT_FAILURE);
	}
/**TOKENIZAMOS CON LOS SALTOS DE LINEA LA SALIDA DE LA LECTURA*/
	tok = strtok(str, "\n");
/**VALIDAMOS SI TOK[0] ESTA EN NUESTRA ESTRUCTURA DE PUNTERO A FUNCIONES*/
	if (tok[0] in structure que tenemos que armar)
		
	/* EN EL PRIMER TOKEN QUE ENCUENTRE ALGO QUE NO ESTA EN LA ESTRUCTURA - ERROR*/
	/*SI ESTA TIENE QUE DARLE EL PARAMETRO (EN OTRO TOK) Y EJECUTAR*/
	/**lista de funciones a armar SI o SI*/
		/*-PUSH, PALL, PINT, POP. SWAP, ADD, NOP*/
	/** lista de funciones avanzadas*/
		/**SUB , DIV, MUL, , MOD*/
return (0);
}
