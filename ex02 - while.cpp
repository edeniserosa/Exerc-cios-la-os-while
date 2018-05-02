#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int tamanho=0;
	int i=0;
	char palavra[100];
	
	printf("Olá, digite uma palavra: ");
	gets(palavra);
	printf("\n");
	tamanho=strlen(palavra);
	
	while(i<tamanho)
	{
		i++;
		if(i%2==0){
			palavra[i]=toupper(palavra[i]);
			printf("%c",palavra[i]);
		}
		else if(i%2!=0)
		{
		palavra[i]=tolower(palavra[i]);
		printf("%c",palavra[i]);
		}
	}
return 0;
}
