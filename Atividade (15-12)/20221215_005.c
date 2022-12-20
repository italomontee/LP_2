#include <stdio.h>

int main()
{
     float lado, area;

     printf(" medida do lado do quadrado para calculo da area: ");
     scanf("%f", lado);

     area= (lado)*(lado);

     printf( "O dobro da medida da area eh: %2.f", area);

     return 0;
}
