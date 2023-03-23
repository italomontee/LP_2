#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int i, j;
    int l, c;
    int **matriz;

    printf("quantas linhas tera: ");
    scanf("%d", &i);
    printf("quantas colunas tera: ");
    scanf("%d",&j);

    *matriz = (int **)malloc(i*sizeof(int *));
    for(l=0; l<0; l++){
        *(matriz+l) = (int*)malloc(j*sizeof(int));
    }
    

    for (l = 0; l < i; l++)
    {
        for(c=0; c<j; c++)
        {
            printf("valor da matriz[%d][%d]: ", l, c);
            scanf("%d", *(matriz+l)+c);
        }
    }
    
    for ( l = 0; l < i; l++)
    {
        for(c=0; c<j; c++){
            printf("%d ", **(matriz+l)+c);
        }
        printf("\n");
    }
    
    for ( l = 0; l < i; l++)
    {
        for(c=0; c<j; c++){
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }

    for (l = 0; l< i; l++)
    {
        free(matriz+l);
    }
    
}
