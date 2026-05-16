#include <stdio.h>

void inverter(char *palavra ){
	
	if(palavra==NULL || palavra==0) return;
	
	char *inicio=palavra;
	char *fim=palavra;
	char aux;
	
	while (*fim!= '\0'){
		fim++;
	}
	fim--;
	
	while(inicio<fim){
		aux=*inicio;
		*inicio=*fim;
		*fim=aux;
		
		inicio++;
		fim--;
	}		
}

int main(){
	char A[]="paralelepipedo";
	
	printf("atual= %s\n",A);
	
	inverter(A);
	
	printf("invertido= %s\n",A);
	
	return 0;
}