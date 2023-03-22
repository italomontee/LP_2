/*20230307_001 Escreva uma função que imprime os elementos de um vetor de float a partir de um endereço inicial (ponteiro) até um endereço final;
 A função recebe como parâmetros dois ponteiros para float (os endereços inicial e final) e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada com três vetores de tamanhos e conteúdos diferentes;
- A função main deve imprimir duas partes distintas de cada um dos três vetores, utilizando a função criada.*/

#include <stdio.h>
int i;
int imprimir(float *a, float *b){
    
    for ( i = 0; i < b-a; i++)
    {
        printf("%0.2f\n", *(a+i));
    }
    

}

int main(){
    int i1, f1, i2, f2, i3, f3;
    int t1,t2,t3;
    printf("Qual o tamanho do primeiro vetor: ");
    scanf("%d", &t1);

    float v1[t1];

    for (i = 0; i < t1; i++)
    {
       printf("Elemento %i do v1: ");
       scanf("%f", &v1[i]);
    }
    
    printf("Qual posicao vai ser o inicio: ");
    scanf("%d", &i1);
    
    printf("Qual posicao vai ser o final: ");
    scanf("%d", &f1);

    imprimir(&v1[i1], &v1[f1]+1);

    printf("Qual o tamanho do segundo vetor: ");
    scanf("%d", &t2);

    float v2[t2];

    for (i = 0; i < t2; i++)
    {
       printf("Elemento %i do v2: ");
       scanf("%f", &v2[i]);
    }
    
    printf("Qual posicao vai ser o inicio: ");
    scanf("%d", &i2);
    
    printf("Qual posicao vai ser o final: ");
    scanf("%d", &f2);

    imprimir(&v2[i2], &v2[f2]+1);

    float v3[t3];

    for (i = 0; i < t3; i++)
    {
       printf("Elemento %i do v2: ");
       scanf("%f", &v3[i]);
    }
    
    printf("Qual posicao vai ser o inicio: ");
    scanf("%d", &i3);
    
    printf("Qual posicao vai ser o final: ");
    scanf("%d", &f3);

    imprimir(&v3[i3], &v3[f3]+1);
}
