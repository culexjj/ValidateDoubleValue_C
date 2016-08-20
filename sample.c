/************************** main.c ******************************
        Source file. Funcion principal
*****************************************************************/

#include <stdio.h>
#include <stdlib.h>


/* Function declaration */

int doubleOK( char cadena[]);

/* MAIN */

int main()
{
    system("cls"); // delete screen

	/* Test Function  doubleOK */

	char val[21];// Max size number for reading = 20
	int check;

	printf("Value for checking : ");
	scanf("%s", val);
	fflush(stdin);



	check = doubleOK(val);

	if (check == 1){
		printf("Value OK");
	} else {
		printf("Value KO");
		}
}
