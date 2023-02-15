#include <stdio.h>

void funcao(int tam){
	int v[tam], i, j, menor, a;
	for(i=0;i<tam;i+=1){
		printf("o %d valor serah: ", i+1);
		scanf("%d", &v[i]);
	}
	for(i = 0 ; i < (tam-1); i += 1){
        menor = i;
		for (j = i+1 ; j < tam ; j += 1){
		    if(v[j]<v[menor]){
                menor = j;
		    }
		}
			if (i != menor){
				a = v[i];
				v[i] = v[menor];
				v[menor] = a;
			}
		}
		printf("Do menor para o maior: ");
		for (i = 0; i < tam-1; i++){;
            printf("%d-", v[i]);
		}
		printf("%d", v[tam-1]);
	}
int main(){
	int tam;
	printf("quantos numeros serao colocados?\n");
	scanf("%d", &tam);
	funcao(tam);
}
