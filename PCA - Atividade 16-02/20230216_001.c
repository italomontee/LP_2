#include<stdio.h>
#include<string.h>

int main(){
    char jogadores[23][20] =  {"hugo souza","matheus cunha","santos","rodrigo caio","leo pereira","david luiz","cleiton","fabricio bruno","pablo","matheuzinho","varela","filipe luis","ayrtin lucos","arturo vidal","thiago maia","everton ribeiro","de arrascaeta","victor hugo","pedro","everton","matheus franca","bruno henrique","gabi"};
    char posicao[23][10] = {"zaga","zaga","zaga","zaga","zaga","zaga","zaga","goleiro","goleiro","goleiro","meia","meia","meia","meia","meia","meia","meia","meia","ataque","ataque","ataque","ataque","ataque"};    
    int nota[23]={6,3,6,3,7,2,9,7,4,3,6,8,0,6,3,5,7,9,5,6,7,8};
    int formacao[4] = {7,3,8,5}, i, j, k, count, aux ;
    char auxs[1][20];
    int formacao_titular[4] = {4,1,4,2};

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < formacao[i]; j++)
        {
            for ( k = 0; k < formacao[i]; k++)
            {
                if(i == 0){
                    if (nota[k]< nota[j]){
                        aux = nota[k];
                        nota[k] = nota[j];
                        nota[j] = aux;

                        strcpy(auxs, jogadores[k]);
                        strcpy(jogadores[k], jogadores[j]);
                        strcpy(jogadores[j], auxs);

                        strcpy(auxs, posicao[k]);
                        strcpy(posicao[k], posicao[j]);
                        strcpy(posicao[j], auxs);
                    }
                }
                if(i == 1){
                    if (nota[k+7]< nota[j+7]){
                        aux = nota[k+7];
                        nota[k+7] = nota[j+7];
                        nota[j+7] = aux;

                        strcpy(auxs, jogadores[k+7]);
                        strcpy(jogadores[k+7], jogadores[j+7]);
                        strcpy(jogadores[j+7], auxs);

                        strcpy(auxs, posicao[k+7]);
                        strcpy(posicao[k+7], posicao[j+7]);
                        strcpy(posicao[j+7], auxs);
                    }
                }
                if(i == 2){
                    if (nota[k+10]< nota[j+10]){
                        aux = nota[k+10];
                        nota[k+10] = nota[j+10];
                        nota[j+10] = aux;

                        strcpy(auxs, jogadores[k+10]);
                        strcpy(jogadores[k+10], &jogadores[j+10]);
                        strcpy(jogadores[j+10], auxs);

                        strcpy(auxs, posicao[k+10]);
                        strcpy(posicao[k+10], posicao[j+10]);
                        strcpy(posicao[j+10], auxs);
                    }
                }    
                if(i == 3){
                    if (nota[k+18] < nota[j+18]){
                        aux = nota[k+18];
                        nota[k+18] = nota[j+18];
                        nota[j+18] = aux;

                        strcpy(auxs, jogadores[k+18]);
                        strcpy(jogadores[k+18], jogadores[j+18]);
                        strcpy(jogadores[j+18], auxs);

                        strcpy(auxs, posicao[k+18]);
                        strcpy(posicao[k+18], posicao[j+18]);
                        strcpy(posicao[j+18], auxs);
                    }
                }    
            }
            
        }
        
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < formacao_titular[i]; j++)
        {
            if (i==0)
            {
                printf("%d, %s, %s\n", nota[j], jogadores[j], posicao[j]);
            }
            if (i==1)
            {
                printf("%d, %s, %s\n", nota[j+7], jogadores[j+7], posicao[j+7]);
            }
            if (i==2)
            {
                printf("%d, %s, %s\n", nota[j+10], jogadores[j+10], posicao[j+10]);
            }
            if (i==3)
            {
                printf("%d, %s, %s\n", nota[j+18], jogadores[j+18], posicao[j+18]);
            }
        }
        }
    
     
    
}