#include<stdio.h>
#include<string.h>

void adicionar_ponto(int notas[], char sexos[]) {
    int l;
    
    for(l = 0; l < 12; l++) {
        if(sexos[l] == 'f') {
            notas[l] = notas[l] + 1;
        }
    }
    
    for(l = 0; l < 12; l++) {
        printf("%d ", notas[l]);
    }
}

int main() {
    char equipe1[6][20] = {"julia", "rebeca", "marcos", "joao", "ana", "maria"};
    char equipe2[6][20] = {"mariana", "marta", "marcela", "camila", "jhony", "marcos"};
    int notas[12] = {10, 6, 3, 2, 8, 8, 9, 10, 8, 8, 10, 5};
    char sexos[12] = {'f','f', 'm', 'm', 'f', 'f', 'f', 'f', 'f', 'f', 'm', 'm'};
    char nome_projeto[10][20]; 
    
    int i, j = 0, contagem_mulheres_equipe1 = 0, contagem_mulheres_equipe2 = 0, k = 0;
    
    for(i = 0; i < 6; i++) {
        if(sexos[i] == 'f') {
            contagem_mulheres_equipe1++;
        }
    }
    
    for(i = 6; i < 12; i++) {
        if(sexos[i] == 'f') {
            contagem_mulheres_equipe2++;
        }
    }
    
    if(contagem_mulheres_equipe1 > contagem_mulheres_equipe2) {
        printf("A equipe 1 tem mais mulheres \n");
    } else if(contagem_mulheres_equipe2 > contagem_mulheres_equipe1) {
        printf("A equipe 2 tem mais mulheres \n");
    }
    
    for(i = 0; i < 6; i++) {
        if(notas[i] >= 8 && sexos[i] == 'f') {
            strcpy(nome_projeto[j], equipe1[i]);
            j++;
        }
    }
    
    for(i = 6; i < 12; i++) {
        if(notas[i] >= 8 && sexos[i] == 'f') {
            strcpy(nome_projeto[j], equipe2[k]);
            j++;
            k++; 
        }
    }
    
    for(i = 0; i < j; i++) {
        printf("%s \n", nome_projeto[i]);
    }
    
    adicionar_ponto(notas, sexos);
    
    return 0;
}
