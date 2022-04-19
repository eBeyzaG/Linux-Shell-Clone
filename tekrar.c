/*
 ============================================================================
 Name        : tekrar.c
 Author      : Beyza
 Version     :
 Copyright   : Copyrighted by Beyza
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[] ) {
	printf("\n");
	int n = atoi(argv[2]);
	for(int i = 0; i < n; i++){
		printf("%s\n", argv[1]);
	}

	return 0;
}
