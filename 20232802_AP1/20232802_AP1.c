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

void adicionar_aluno(char equipe[][20], int notas_eqp[], char sexo_eqp[]) {
    int nota;
    char nome[20];
    char sexo;

    
    printf("\nnome: ");
    scanf("%s", nome);
    printf("sexo: ");
    scanf(" %c", &sexo);
    printf("nota: ");
    scanf("%d", &nota);

    
    strcpy(equipe[6], nome);
    sexo_eqp[6] = sexo;
    notas_eqp[12] = nota;
    
    
    
}

int main() {
    int tam = 100;
    char equipe1[100][20] = {"julia", "rebeca", "marcos", "joao", "ana", "maria"};
    char equipe2[100][20] = {"cuevas", "marta", "marcela", "camila", "jhony", "marcos"};
    int notas[100] = {10, 6, 3, 2, 8, 8, 9, 10, 8, 8, 10, 5};
    char sexos[100] = {'m','f', 'm', 'm', 'f', 'f', 'f', 'f', 'f', 'f', 'm', 'm'};
    char nome_projeto[10][20]; 
    
    int i, j = 0, contagem_mulheres_equipe1 = 0, contagem_mulheres_equipe2 = 0, k = 0, count1=0, count2=0;
    
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
        }

    if(contagem_mulheres_equipe2 > contagem_mulheres_equipe1) {
        printf("A equipe 2 tem mais mulheres \n");
    }

    else{
        printf("Quantidades iguais de mulheres \n");
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
    adicionar_aluno(equipe1, notas, sexos);
        
    printf("\n* Lista Atualizada *");


    for(i = 0; i < 13; i++) {
            printf("%s ", equipe1[i]);
        }
    printf("\n");
    for(i = 0; i < 13; i++) {
            printf("%d ", notas[i]);
        }
    printf("\n");
    for(i = 0; i < 13; i++) {
            printf("%c ", sexos[i]);
        }

    return 0;
}
