#include <stdio.h>

int main(){
    int cont=0, nmaior, nmenor, nota, medias=0;

    printf("Digite uma nota: ");
    scanf("%d", &nota);
    medias += nota;

    while (nota >= 0) {
        cont += 1;

        if (cont == 1){
            nmaior = nmenor = nota;
        }
        else if (nota > nmaior){
            nmaior = nota;
            }
        else if (nota < nmenor) {
            nmenor = nota;
        }
        printf("Digite uma nota: ");
        scanf("%d", &nota);

        if (nota > 0){
            medias += nota;
        }



    }

    medias = medias/cont;
    printf("\nnumero maior: %d \nnummero menor: %d \nmedias: %d", nmaior, nmenor, medias);
    }



