/*
Criar e utilizar num programa uma função que receba
uma sequência de n números e a imprima na ordem inversa.
(o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100)
*/


#include <stdio.h>

int inverter() {
    int n, i;

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);

    int numeros[n];

    printf("entre com %d elementos", n);
    for (i = 0; i<n; i++){
        printf("\n%d:", i);
        scanf("%d", &numeros[i]);
    }
    printf("Ordem inversa: ");
    for ( i = n-1; i >= 0; i--){
      printf("%d", numeros[i])  ;
    }
    printf("\n");
    return 0;
}

int main(){
    inverter();
}
