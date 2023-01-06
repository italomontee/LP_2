#include <stdio.h>

int fib(int n){
	int i, termo;
	int penultimo =1, ultimo =1;
	for (i = 1; i <= n; i++)
	{
		if (i == 1 || i ==2)
		{
		    termo = i;
            
		}
	    else {
			termo = penultimo + ultimo;
			penultimo = ultimo;
			ultimo = termo;
            
		}
        
	}
    printf("\n%d", termo);
	return("cabou");
}

int main(){
	int n;
	printf("escreva um numero: ");
	scanf("%d", &n);
	fib(n);
}