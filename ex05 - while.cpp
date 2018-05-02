#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

	int main (){
	
	setlocale(LC_ALL,"");

	char palavra [30];
	int i;
	int tamanho=0;
	
		printf("Digite uma palavra:\n");
		gets(palavra) ;
		printf("\n");
		tamanho = strlen(palavra);
			while(i<=tamanho)
			{ 
			printf("%c", palavra[i]);
			printf(" ");
			tamanho++;
						
			}
			printf("\n");
			
	system("pause");
		
}
