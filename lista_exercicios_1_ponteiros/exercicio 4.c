#include <stdio.h>


void dobrar(int *b){
*b=*b *2;
printf("dobro = %d\n",*b);	
}


int main(){
int a;

printf("digite um valor\n");
scanf("%d",&a);

dobrar(&a);	
	
	
	return 0;
}