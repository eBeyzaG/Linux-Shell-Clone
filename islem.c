/*
 ============================================================================
 Name        : islem.c
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

	if(strcmp(argv[1], "topla") != 0 && strcmp(argv[1], "cikar") != 0){
		return -1;
	}


/*	int pipefd[2];
	if(pipe(pipefd) < 0){
		perror("Pipe Error");
		return -1;
	}
	char readStr[1000];
*/

		int pid = fork();
		int j;
		int res;
		if(pid == 0){
			if(strcmp(argv[1], "topla") == 0)
				j= execve("topla", argv, NULL);
			else
				j= execve("cikar", argv, NULL);
		//	close(pipefd[1]);
		}else{
			wait(&j);
			//int count = read(3, readStr, 2000);
			//readStr[count] = "\0";
			res = WEXITSTATUS(j);
		}


//	write(4, readStr, strlen(readStr));

	return res;
}
