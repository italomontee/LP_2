#include <stdio.h>

void vetor(int vzs){

    int num, i, j, uml = 0, doisl = 0, tresl = 0, quatrol = 0, cincol = 0, seisl = 0;
    int V[vzs];

    for(i = 0; i < vzs; i+= 1){
            printf("qual o %d numero da sequencia? ", i+1);
            scanf("%d", &num);

    while(num<1||num>6){
        printf("numero invalido\napenas numeros entre 0 e 6\nqual o %d numero da sequencia? ", i+1);
        scanf("%d", &num);        
    }

    V[i] = num;
    if (V[i] == 1){
        uml += 1;
    }
    if (V[i] == 2){
        doisl += 1;
    }
    if (V[i] == 3){
        tresl += 1;
    }
    if (V[i] == 4){
        quatrol += 1;
    }
    if (V[i] == 5){
        cincol += 1;
    }
    if (V[i] == 6){
        seisl += 1;
    }            
    }

    printf("o numero 1 aparece %d vzs\n", uml);
    printf("o numero 2 aparece %d vzs\n", doisl);
    printf("o numero 3 aparece %d vzs\n", tresl);
    printf("o numero 4 aparece %d vzs\n", quatrol);
    printf("o numero 5 aparece %d vzs\n", cincol);
    printf("o numero 6 aparece %d vzs", seisl);
}
int main(){
    int vzs, num, i, j;
    printf("qual a quantidade de vezes que o dado girara?\n");
    scanf("%d", &vzs);
    while(vzs < 1){
        printf("numero invalido\nqual a quantidade dezes que o dado girara?\n");
        scanf("%d", &vzs);
    }
    vetor(vzs);
}
