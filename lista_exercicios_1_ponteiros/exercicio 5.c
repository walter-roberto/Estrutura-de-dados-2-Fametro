#include <stdio.h>


void copiarString(char *origem,char *destino){
	
	while(*origem != '\0'){
		
		*destino=*origem;
		origem++;
		destino++;
   }	  
   
   destino= '\0';	
}
	int main (){
		char A[]="ola mundo";
		char B[20];
	
	copiarString(A,B);
	
	printf("string inicial= %s\n",A);
	printf("string final= %s\n",B);
	
	
	return 0;		
}

