/*
 ============================================================================
 Name        : myshell.c
 Author      : Beyza
 Version     :
 Copyright   : Copyrighted by Beyza
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char input[200];
	int run = 1;

	char *commands[30];


	int pid = 832746;
	int i,j,k;
	int wordCount = 0;

	char *str1, *str2, *token, *subtoken;
	char *saveptr1=NULL;
	char *saveptr2 = NULL;

	int pidIslem=532;
	while(run){
		if(pid != 0)
		printf("myshell>> ");

		fgets(input, 200, stdin);
		if((strlen(input) > 0 ) && (input[strlen(input) -1] == '\n')){
			input[strlen(input) - 1 ] = '\0';
		} //kullanıcıdan input al ve sondaki yeni satırı sil

	    for(i = 1, str1=input; ;i++, str1=NULL){ // | ile ayrılan komutları bölme
	    	wordCount = 0;
	    	token = strtok_r(str1, "|", &saveptr1);
	    	 if (token == NULL)
	            break;
	         if(token[0] == ' '){
	           	token += sizeof(char);
	         }

	        if((strlen(token) > 0 ) && (token[strlen(token) -1] == ' ')){//sonda varsa boşluk silme
	        	token[strlen(token) - 1 ] = '\0';
	        }
	        for ( j = 0, str2 = token; ;j++, str2 = NULL) { //komutları boşluklara göre bölme
	            subtoken = strtok_r(str2, " ", &saveptr2);

	            if (subtoken == NULL)
	                break;

	            if((strlen(subtoken) > 0 ) && (subtoken[strlen(subtoken) -1] == ' ')){ //sonda varsa boşluk silme
	            			subtoken[strlen(subtoken) - 1 ] = '\0';
	            }
	            commands[j] = subtoken;
	            wordCount++;
	        }

	    //girilen komuta göre işlem seçme
		if(strcmp(commands[0], "islem") == 0){
			if(strcmp(commands[1], "topla") != 0 && strcmp(commands[1], "cikar") != 0){
				printf("Yanlış bir komut girdiniz.\n");
				continue;
				}//işlem komutundan sonra beklenen komut bulunmadığında devam etme

			commands[4] = NULL;

			pidIslem= fork();//islem programını çağırmak için forklama

			if(pidIslem == 0){
				k = execve("islem", commands, NULL);//child process te istenen işlem programını çalıştırma

			}else{
				wait(&pidIslem);
				strtok(commands[3], "\n");

				if(strcmp(commands[1], "topla") == 0){//programa göre çıktıyı ekrana yazdırma
					printf("%s + %s = %d\n", commands[2], commands[3],WEXITSTATUS(pidIslem));
				}
				else{
					printf("%s - %s = %d\n",commands[2], commands[3], WEXITSTATUS(pidIslem));
				}
				k = 4654;
			}
		}
		else if(strcmp(commands[0], "tekrar") == 0){

			commands[3] = NULL; //komut sonlandırma
			pid = fork();

			if(pid == 0){
				int j = execve("tekrar", commands, NULL);//tekrar programını çalıştırma
			}else{
				wait(&pid);
			}
			pid = 3435;


		}else if(strcmp(commands[0], "cat") == 0){
			int w;
			w= fork();
			if(w == 0){
				char str[40] ="";
					strcat(str, "echo cat: ");//cat ile okuyabilmek için girdileri dosyaya yazma
					for(int i = 1; i < wordCount; i++ ){
						strcat(str, commands[i]);
						strcat(str, " ");
					}
					strcat(str, "> tempFile.txt");
			    	char* argv[] = {"/bin/sh","-c",str, NULL};
			    	execve("/bin/sh", argv, NULL);

			}else{
				wait(&w);
				int u;
				u = fork();
				if(u == 0){
					char* argv[3] = {"/bin/cat", "tempFile.txt", NULL};//dosyaya yazılanları cat ile okuma
					 execve("/bin/cat", argv, NULL);

				}else{
					wait(&u);
				}

			}

		}
		else if(strcmp(commands[0], "exit") == 0){
			run = 0;//programı sonlandırma
		}else if(strcmp(commands[0], "clear") == 0){
			system("clear");
	        //printf("\e[1;1H\e[2J");//ekran temizleme
		}
		else{
			printf("Yanlış bir komut girdiniz.\n");
		}
	    }

}
	return 0;
}
