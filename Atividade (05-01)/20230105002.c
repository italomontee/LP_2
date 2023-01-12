#include<stdio.h>
int pesosemanas()
{
    int peso, semanas;
    printf("Peso em gramas: ");
    scanf("%d", &peso);
    printf("Tempo em semanas: ");
    scanf("%d", semanas);
}




int algoritmo()
{
    int meses, semanas, peso;
    
    if(peso<100 && semanas<28)
    {
        printf("Parto não deverá ser realizado, reavaliar clinicamente");
    }
    else
    {
        meses=semanas/4;
        
        if(peso>2500 && meses>7)
        {
            printf("parto normal");
        }
        else if(peso>2500 && meses<=7)
        {
           printf("parto cesariana"); 
        }
        else if(1500<peso<2000 && meses>9)
        {
            printf("parto normal");
        }
        else
        {
            printf("parto cesariana");
        }
    }
}
int main()
{
    int x, y, peso, semanas, meses;
    x=pesosemanas(peso, semanas);
    y=algoritmo(peso, semanas, meses);
}