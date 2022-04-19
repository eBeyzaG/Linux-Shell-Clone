/*
 ============================================================================
 Name        : topla.c
 Author      : Beyza
 Version     :
 Copyright   : Copyrighted by Beyza
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
		int n1 = atoi(argv[2]);
		int n2 = atoi(argv[3]);
	/*	int result = n1 + n2;
		char resInstr[10];
		snprintf(resInstr, 10 , "%d", result);
		char res[20];
		memset(res, '\0', sizeof(res));
		strcpy(res, argv[2]);

		char res2[20];
		memset(res2, '\0', sizeof(res2));
		strcpy(res2, argv[3]);

		strtok(res2, "\n");

		strcat(res, " + ");
		strcat(res, res2);
		strcat(res, " = ");
		strcat(res, resInstr);
		strcat(res,"\n");
		//write(4, res, strlen(res));*/
	return n1 + n2;

}
