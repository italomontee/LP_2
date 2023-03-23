#include<stdio.h>
#include<stdlib.h>
int i;
int ler(int *n, int *inicio)
{
    
    printf("Quantos valores tera o vetor");
    scanf("%d", n);
    
    *inicio =  (malloc(*n * sizeof(int)));

    for ( i = 0; i < *n; i++)
    {
        printf("Valor do elemento %d: ", i);
        scanf("%d", inicio+i);
    }

    
    
}

void maiormenor(int *inicio,int *maior,int *menor,int *n){
    *maior = *inicio;
    *menor = *inicio;
    for ( i = 0; i < *n; i++)
    {
        if (*(inicio+i)>*maior)
        {
            *maior = *(inicio+i);
        }
        else if(*(inicio+i)< *menor){
            *menor = *(inicio+i);
        }
        
    }
    
}

int main(){
    int n, inicio, maior, menor;
    ler(&n, &inicio);
    maiormenor(&inicio, &maior, &menor, &n);
    printf("o maior: %d e o menor: %d", maior, menor);
}