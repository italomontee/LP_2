#include<stdio.h>

int main()
{
    float soma;
    float n1;
    float n2;

    printf("numero 1: ");
    scanf("%f", &n1);

    printf("numero 2: ");
    scanf("%f", &n2);

    soma = n1 + n2;

    printf("Soma: %0.1f ", soma);
    return 0;
}
