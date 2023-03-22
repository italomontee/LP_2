/* Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.*/

int main(){
    int a = 5;
    float b = 3.14;
    char c = 'o';

    int *ap = &a;
    float *bp = &b;
    char* *cp = &c;

    printf("inteiro %d, real %f, o char %c\n", *ap, *bp, *cp);

    *ap = 6;
    *bp = 5.7;
    *cp = 'k';
    
    printf("inteiro %d, real %f, o char %c\n", *ap, *bp, *cp);
}
