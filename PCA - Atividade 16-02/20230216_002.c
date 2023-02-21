#include<stdio.h>
#include<string.h>

int verificar(int a, int b[100], int c){
    int i, contador=0;
    for (i = 0; i < c; i++)
    {
         if (a == b[i])
         {
           contador++;
         }    
    }  
    return contador;     
}

int intersecao(){
    int tamanho = 100;
    int conj_a[tamanho], conj_b[tamanho], conj_c[tamanho], i, j, count1=0, count2=0, count3=0 ;
    
    // Preenche o conjunto A
    for(i = 0; i<tamanho; i++)
    {
        printf("Elemento %d do conjunto A: ", i);
        scanf("%d", &conj_a[i]);

        char continuar[2];

        printf("Deseja continuar? (s/n): ");
        scanf("%s", continuar);

        if (strcmp(continuar, "n") == 0){
            break;
        }
        count1++;
    }   

    // Preenche o conjunto B
    for(i = 0; i<tamanho; i++)
    {
        printf("Elemento %d do conjunto B: ", i);
        scanf("%d", &conj_b[i]);

        char continuar[1];

        printf("Deseja continuar? (s/n): ");
        scanf("%s", continuar);

        if (strcmp(continuar, "n") == 0){
            break;
        }
        count2++;
    }   

    if (count1 > 0 && count2 > 0)
    {
        for(i =0; i<= count1; i++){
            for(j = 0; j<=count2; j++){
                if (conj_a[i]==conj_b[j])
                {               
                    if(verificar(conj_a[i], conj_c, count3) == 0)
                    {
                        conj_c[count3]=conj_a[i];
                        count3++;
                    }
                }    
            }
        }    
    }
    

    printf("\nConjunto c: ");
    for (i = 0; i < count3; i++)
    {
        printf("%d ", conj_c[i]);
    }

    return 0;
}

int main(){
    intersecao();
}