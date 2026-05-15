#include <stdio.h>

void troca (int *x,int *y){
	int a=*x;
	*x=*y;
	*y=a;
}


int main(){
	int A,B;
	
	printf("digite dois valores\n");
	scanf("%d",&A);
	printf("digite o proximo valor\n");
	getchar();
	scanf("%d",&B);
	
	printf("valores %d,%d\n",A,B);
	
	troca(&A,&B);
	
	printf("trocados %d, %d\n",A,B);
	
	return 0;
}
