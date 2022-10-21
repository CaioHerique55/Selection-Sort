#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int numeros [10] = { 10,4,14,20,12,6,22,18,16,2};
	int aux;
	bool troca;
	int menor;
	int posicao;
	
	for(int i=0; i<10; i++)
{
	printf(" | %.2i", numeros[i]);
}
	
	
	for(int i=0; i<10; i++)
	{
	  menor=numeros[i];
	  posicao=1;
	  troca=false;
	  
	 for(int j=i+1; j<10; j++)
	 {
	  if(numeros[j] < menor)
	   menor=numeros[j];
	   	posicao=j;
	   	troca=true;
	   }
    }
	
	
	if(troca == true)
	{
	for(int j=1; j<10; j++){
	
		aux=numeros[j];
		numeros[j] = menor;
		numeros[posicao]=aux;
	}
}
		
printf("\n\n");

for(int i=0; i<10; i++)
{
	printf(" | %.2i", numeros[i]);
}

return 0;

}

