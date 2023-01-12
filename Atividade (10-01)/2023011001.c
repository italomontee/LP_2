#include <stdio.h>
int contador(int num, int d){
	int cont=0, a;
    while (num > 0){
        if ((num%10)==d)
            cont++;
			a = num=num/10;
			printf("\n%d", a);
        num=num/10;
    }
	printf("\n%d", cont);
    return cont;
}

int main(){
	int a, b;
	printf("\na: ");
	scanf("%d", &a);
	printf("\nb: ");
	scanf("%d", &b);
	contador(a, b);
	

}