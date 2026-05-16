#include <stdio.h>


void contarVogaisConsoantes(char *str, int *vogais, int *consoantes){
	
	while(*str != '\0'){
		
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')){
		
		
		    if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
                *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U'){
			(*vogais)++;
		    }   
		    else{
			(*consoantes)++;
		    }
		}	
   str++;
   
   }  
   	
}
	int main (){
		char A[]="ola mundo";
		int vogais=0, consoantes=0;
		
		contarVogaisConsoantes(A,&vogais,&consoantes);
		
		printf("quantia de vogais = %d\n",vogais);
		printf("quantia de consoantes = %d\n",consoantes);
	
	return 0;		
}