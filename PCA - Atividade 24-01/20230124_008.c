#include <stdio.h>

void produto_escalar(int tam){
    int i, pe=0;
	int vum[tam], vdois[tam];
	for(i=0; i<tam; i+=1){
		printf("digite os valores do vetor 1: ");
		scanf("%d", &vum[i]);
		while(vum[i]<1){
			printf("numero invalido! digite um numero positivo: ");
			scanf("%d", &vum[i]);
		}
	}
	for(i=0; i<tam; i+=1){
		printf("digite os valores do vetor 2: ");
		scanf("%d", &vdois[i]);
		while(vdois[i]<1){
			printf("numero invalido! digite um numero positivo: ");
			scanf("%d", &vdois[i]);
		}
		}
	for(i=0; i<tam; i+=1){
		pe += vum[i] * vdois[i];
	} 
	printf("\no produto escalar dos vetores eh %d", pe);
}
int main(){
	int tam;
	printf("digite o tamanho dos vetores: ");
	scanf("%d", &tam);
	while(tam<1){
		printf("numero invalido! digite um numero positivo: ");
		scanf("%d", &tam);
	}		
	produto_escalar(tam);
	return 0;
}
