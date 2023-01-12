#include<stdio.h>
int x, y, maior, menor; 
 

int scanintintervalox()
{
    while(x>1000 || x<1)
    {
        printf("apenas valores maiores que 1 e menores que 1000: ");
        scanf("%d", &x);
    }
    
    return x;
}

int scanintintervaloy()
{
    while(y>1000 || y<1)
    {
        printf("apenas valores maiores que 1 e menores que 1000: ");
        scanf("%d", &y);
    }
    
    return y;
}

float percentual(float maior, float menor)
{
    float percentual;
    percentual=100*menor/maior;
    return percentual;
}

int absdif()
{
    int dif;
    dif=maior-menor;
    return dif;
}

int main()
{
    int x, y, dife=0;
    float perc, maior, menor;
    
    printf("numero entre 1 e 1000: ");
    scanf("%d", &x); 
    printf("numero entre 1 e 1000: ");
    scanf("%d", &y);
    
    if(1>x>1000 || 1>y>1000)
    {
        x=scanintintervalox();
        y=scanintintervaloy();
    }
    
    
    if(x>y)
    {
        maior=x;
        menor=y;
    }
    else if(y>x)
    {
        menor=x;
        maior=y;
    }
    
    dife=absdif();
    perc=percentual(maior, menor);
    
    printf("menor %d \n", menor);
    printf("maior %d \n", maior);
    printf("percentual %2.f \n", percentual);
    printf("diferenca %d \n", absdif);
}