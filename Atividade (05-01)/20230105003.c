#include<stdio.h>
int x;

int scanparimpar(int x)
{
    do
    {
        printf("Apenas numeros pares: ");
        scanf("%d", &x);
    }while(x%2!=0);
    return x;
}


int numeroperfeito()
{
    int x, count=1, soma=0;
    for(count=1; count<=x; count++)
    {
        if(x%count==0)
        {
            soma+=count;
        }
    }
    
    if(soma/2==x)
    {
        printf("numero perfeito \n");
    }
    else
    {
        printf("nao perfeito \n");
    }
}


int main()

{
    int y, w, z, num;
    y=scanparimpar(x);
    
    num=numeroperfeito(x, w, z);
}