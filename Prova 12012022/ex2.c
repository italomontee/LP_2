#include<stdio.h>
#include<math.h>
int inteiro(){
    int n;
    do{
        printf("Numero inteiro positivo: ");
        scanf ("%d",&n);
    }while(n < 0);
    return n;
}

int hiperfatorial(int num){
    int i, hiper=1;

    for (i=0; i <=num; i++){
        hiper *= pow (i,i);
    }
    return hiper;
}

imprimir (int hp){
    printf ("Hiperfactorial= %d", hp);
}

int main(){
    int a, b;
    a = inteiro();
    b = hiperfatorial(a);
    imprimir(b);
}