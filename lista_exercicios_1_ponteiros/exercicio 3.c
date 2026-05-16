#include <stdio.h>

int main(){
	
	int a;
	int *b;
	
	printf("digite um valor\n");
	scanf("%d",&a);
	b=&a;
	
	printf("valor da variavel =%d\n",a);
	printf("endereço da variavel =%p\n",&a);
	
	printf("valor do ponteiro= %d\n",*b);
	printf("endereço do ponteiro= %p\n",b);
	
	return 0;
}