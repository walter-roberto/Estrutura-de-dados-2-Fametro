#include <stdio.h>


void calcular(float X, float Y,float *soma, float *subtracao, float *multiplicacao, float *divisao){
	*soma=X+Y;
	*subtracao=X-Y;
	*multiplicacao=X*Y;
	*divisao=X/Y;
	
	printf("soma = %.2f\n",*soma);
	printf("subtracao = %.2f\n",*subtracao);
	printf("multiplicacao = %.2f\n",*multiplicacao);
	printf("divisao = %.2f\n",*divisao);
	
	
}


int main(){
	float A,B;
	float a,b,c,d;
	
	printf("digite um valor\n");
	scanf("%f",&A);
	printf("digite um segundo valor\n");
	scanf("%f",&B);
	
	calcular(A,B,&a,&b,&c,&d);
	
	return 0;
}