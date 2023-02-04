/*
Criar e utilizar num programa uma função que receba uma sequência de n números e retorne outra sequência só com os números par (o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100)
*/


#include <stdio.h>

int sopares() {
    int n, i;

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);

    int numeros[n];

    printf("entre com %d elementos", n);
    for (i = 0; i<n; i++){
        printf("\n%d:", i);
        scanf("%d", &numeros[i]);
    }
    printf("Pares: ");
    for ( i = 0; i<n ; i++){
        if (numeros[i] %2 == 0)
        {
            printf("%d ", numeros[i]);
        }    
    }
    printf("\n");
    return 0;
}

int main(){
    sopares();
}
