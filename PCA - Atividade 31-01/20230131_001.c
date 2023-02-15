#include <stdio.h>
#include <string.h>
#include <ctype.h>
void string(char s[50]){
	int i;
	for(i = strlen(s)-1 ; i >= 0 ; i--){
		printf("%c", s[i]);
	}	
	printf("\n");
}

void vogal(char s[50]){
	int i;
	for(i = 0 ; i <= strlen(s)-1 ; i+=1){
		if(a[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U'){
			printf("%c", s[i]);
		}
	}
	printf("\n");		
}

void maiuscula(char s[50]){
	int i; 
	for(i = 0 ; i <= strlen(s)-1 ; i+=1){
	s[i] = toupper(s[i]);	
  }
	printf("%s", s);
	printf("\n");
}

void volta(char s[50]){
	int i, cont = 0;
	char l;
	printf("qual a letra a procurar?\n");
	scanf(" %c", &l);
	for(i=0 ; i<=strlen(s) ; i+=1){
		if (s[i] == l){
			cont+=1;			
		}
	}
	printf("a letra %c apareceu %d vezes", l, cont);
}	
void apagar(char s[50]){
	int i, cont=0;
	char carac;
	printf("qual caractere a ser apagado?\n");
	scanf(" %c", &carac);
	
	for(i = 0 ; i <= strlen(a)-1 ; i+=1){
		if (s[i] != carac && s[i] != toupper(carac)){
			printf("%c", s[i]);
		} 	
	}
	printf("%c", s[i]);
}		


int main(){
	char s[50];
	int i, j;
	printf("escreva: ");
	scanf("%s", s);
	string(s);	
	vogal(s);
	maiuscula(s);
	volta(s);
	apagar(s);
}
