/*20230307_001 Escreva uma função que imprime os elementos de um vetor de float a partir de um endereço inicial (ponteiro) até um endereço final;
 A função recebe como parâmetros dois ponteiros para float (os endereços inicial e final) e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada com três vetores de tamanhos e conteúdos diferentes;
- A função main deve imprimir duas partes distintas de cada um dos três vetores, utilizando a função criada.*/

#include <stdio.h>
int i;
void imprimir(float *ptr1, float *ptr2, int tamanho){
    for ( i = 0; i < tamanho; i++)
    {
        printf("%0.2f \n4", *(ptr1+i));
    }
    
    
}
int main() {
    int t1, t2, t3;
    int i1, i2, i3, f1, f2, f3;

    printf("Qual o tamanho do primeiro vetor? ");
    scanf("%d", &t1);
    float v1[t1];
    for (i = 0; i < t1; i++) {
        printf("Qual o %d valor do primeiro vetor? ", i + 1);
        scanf("%f", &v1[i]);
    }
    printf("qual a posicao do vetor deve ser o inicio? ");
    scanf("%d", &i1);
    printf("e final? ");
    scanf("%d", &f1);
    imprimir(&v1[i1], &v1[f1], f1 - i1 + 1);

    printf("Qual o tamanho do segundo vetor? ");
    scanf("%d", &t2);
    float v2[t2];
    for (i = 0; i < t2; i++) {
        printf("Qual o %d valor do segundo vetor? ", i + 1);
        scanf("%f", &v2[i]);
    }
    printf("qual a posicao do vetor deve ser o inicio? ");
    scanf("%d", &i2);
    printf("e final? ");
    scanf("%d", &f2);
    imprimir(&v2[i2], &v2[f2], f2 - i2 + 1);

    printf("Qual o tamanho do terceiro vetor? ");
    scanf("%d", &t3);
    float v3[t3];
    for (i = 0; i < t3; i++) {
        printf("Qual o %d valor do terceiro vetor? ", i + 1);
        scanf("%f", &v3[i]);
    }
    printf("qual a posicao do vetor deve ser o inicio? ");
    scanf("%d", &i3);
    printf("e final? ");
    scanf("%d", &f3);

    imprimir(&v3[i3], &v3[f3], f3 - i3 + 1);

}