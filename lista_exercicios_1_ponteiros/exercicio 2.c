#include <stdio.h>

void maiorMenor(int *vetor,int tamanho,int *maior,int *menor){
	*maior=vetor[0];
	*menor=vetor[0];
	int i=1;
	for (i=1;i < tamanho;i++){
		
		if(vetor[i]>*maior){
			*maior=vetor[i];
		}
		
		if(vetor[i]<*menor){
			*menor=vetor[i];
		}
	}
}



int main(){
	int V[5]={4,8,9,12,1};
	int tamanho=5,resultMA,resultME;
	
	maiorMenor(V,tamanho,&resultMA,&resultME);
	printf("maior %d\n",resultMA);
	printf("menor %d\n",resultME);
	
	return 0;
}
