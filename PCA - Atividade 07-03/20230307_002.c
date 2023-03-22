/* Escreva uma função que encontra um valor em um vetor de inteiros e retorna um ponteiro para o primeiro endereço onde este valor foi encontrado ou NULL caso o valor não esteja no vetor;
- A função recebe como parâmetro dois ponteiros para inteiros (os endereços inicial e final) e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada. Na função main deve ser declarado um vetor de tamanho 10, com três ocorrências do valor 2;
- A main() deve utilizar a função criada para encontrar  e imprimir os endereços de memória de todas as ocorrências do valor 2, em um laço, até que todo o vetor tenha sido pesquisado.
- Defina a constante NULL se necessário.
*/
#define NULL 0; 
void procurar(int *a, int *b, int valor){
    int i, count;
    
    for ( i = 0; i < b-a; i++)
    {
        if (*(a+i) == 2){
            printf("%d", (a+i));
            count++;
        }
    }
    if (count==0){
        printf("%d", NULL);
    }
    
}

int main(){
    int v1[10] = {2, 4, 6, 2, 7, 8, 0, 2, 4};

    procurar(&v1[0], &v1[10], 2);
}