/*  Criar um programa que  dada uma sequência de n números a imprima na ordem inversa à da leitura. (o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100)*/
#include <stdio.h>
#define LIM 101

int main() {
    int n, i;
    int numeros[LIM];

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);

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
