#include<stdio.h>


void modifica(int *a, int b){
	*a=b;
}

int main(){
	int num=5;
	
	
	printf("valor=%d\n",num);
	
	modifica(&num,20);
	
	printf("valor modificado=%d\n",num);
	
	return 0;
}
