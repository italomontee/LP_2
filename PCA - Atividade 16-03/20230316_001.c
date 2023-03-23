#include<stdio.h>
#include<stdlib.h>
int i;
int ler(int *inicio,int *n)
{
    printf("Qual o tamanho do vetor: ");
    scanf("%d", n);

    *inicio = (malloc(*n * sizeof(int)));

    for (i=0; i<*n; i++)
    {
        printf("Elemento [%d]: ", i);
        scanf("%d", inicio+i);
    }


}

void maiormenor(int *maior, int *menor, int *inicio, int* n)
{
    *maior = *inicio;
    *menor = *inicio;
    for(i=0; i<*n;i++)
    {
        if (*(inicio+i) > *maior)
        {
            *maior = *(inicio+i);
        }
        else if (*(inicio+i) < *menor)
        {
            *menor = *(inicio+i);
        }        
    }

   
}

int main()
{
    int inicio, maior, menor, n;
    ler(&inicio, &n);
    maiormenor(&maior, &menor,&inicio, &n);
    printf("O Maior: %d \nO Menor: %d", maior, menor);

}
