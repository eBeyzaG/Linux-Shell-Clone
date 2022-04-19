/*
 ============================================================================
 Name        : cikar.c
 Author      : Beyza
 Version     :
 Copyright   : Copyrighted by Beyza
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
islem topla 3 4 | tekrar slm 3 4 | tekrar bye 4 6


*/
//str[0] = str[0] + sizeof(char) ;
int main(void) {
char input[200] = "";
char newInput[200] = "";
int index;
	int found = 0;
	char *commands[30];
	char *token;
	char *comToken;
	char *secToken;
	char *saveptr1;
	char saveptr2;
	int wordCount = 0;
	fgets(input, 200, stdin);
	if((strlen(input) > 0 ) && (input[strlen(input) -1] == '\n' )){
		input[strlen(input) - 1 ] = '\0';
	} 
	for(int i = 0; i < strlen(input); i++){
		if(input[i] == '|'){
			//printf("slm");
		}
	}
	char sd[30];
	token = strtok_r(input,"|", &saveptr1);
	for(int i = 0; token != NULL; i++){
		wordCount = 0;
		printf("%sbitti\n",token);
		if((strlen(token) > 0 ) && (token[strlen(token) -1] == '\n' || token[strlen(token) -1] == ' ')){
			token[strlen(token) - 1 ] = '\0';
		}
		
		printf("%sbitti\n",token);
		/*if((strlen(token) > 0 ) && (token[strlen(token) -1] == '\n')){
			input[strlen(input) - 1 ] = '\0';
		}*/
		
		char* temp;
		strcpy(temp, token);
		printf("temp: %s\n",temp);
		comToken = strtok_r(temp," ", &saveptr2);
		for(int i = 0; comToken != NULL; i++){
			commands[i]=comToken;
			comToken = strtok_r(NULL, " ", &saveptr2);
			wordCount++;
		}
		for(int j = 0; j < wordCount; j++){
			printf("commands[%d]: %sbitti\n",j,commands[j]);
		}
		printf("%sbitti\n",token);
		token =  strtok_r(NULL, "|",&saveptr1);
		printf("%sbitti\n",token);
	}
	//printf("%s\n",sd);
/*	while(1){
	fgets(input, 200, stdin);
	if((strlen(input) > 0 ) && (input[strlen(input) -1] == '\n' )){
		input[strlen(input) - 1 ] = '\0';
	}

	token = strtok(input," ");
	for(int i = 0; token != NULL; i++){
		commands[i]=token;
		token = strtok(NULL, " ");
		wordCount++;
	}
	for( index = 0; index < wordCount; index++){
		if(strcmp(commands[index], "|") == 0){
			printf("bulundu\n");
			found = 1;
			break;
		}
	}
		
	int f = 0;
	char *newStr;
	char *newCommands[30];
	memcpy(newCommands,commands,30 * sizeof(char*));
	//for(int a = index + 1; f <wordCount - index - 1; a++){
		//printf("secComands[a]: %s\n", secCommands[a]);
		//char newStr[strlen(commands[a])];
	
	//	printf("%s ", commands[a]);
	//	strcpy(newStr, commands[a]);
	//	printf("newStr: %s\n", newStr);
	//	printf("f: %d\n", f);
		//newCommands[f] = newStr;
	//	memcpy(newCommands[f], commands[a]);
	//	f++;
	//}
	memcpy(commands,newCommands,30 * sizeof(char*));
	
//	memcpy(commands[index],"\0", 2);
	for(int i = 0; i<wordCount - index - 1; i++){
		printf("%s ", commands[i]);
	}
			
}		*/

	return 0;
}
