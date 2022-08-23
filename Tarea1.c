#include<stdio.h>

float prom(int *prom, int a)
	{
	float suma;
	float pr;
	int size=4;
	for(int i=0; i<=size-1;i++){
		suma=suma+prom[i];
	}
	pr=sum/size;
	return(pr);
}
int sizeChar(char *q){
	int a;
	while(*p!='\0'){
		a ++;
		q ++;
	}
	return(a);
}
int main(void){
	printf("\tAritmetica de apuntadores");
	char palabra1[]="\ntres tristes tigres";
	int promedionum[] = {1,1,2,3};
	char *q=palabra1;
	int a=0;                    
	int i=0;
	printf("Array en Mayusculas\n");
	while(*p!='\0'){
		a ++;
		q ++;
		printf("%c ",*q-32);
	}	
	
	printf("\n\nTamaño del Primer Array\n");
	printf("\nEl tamaño del primero es de: %0i",sizeChar(palabra1));
	
	printf("\n\nPromedio del Segundo Array\n");         
	printf("\nEl promedio del segundo es de: %0.2f",prom(promedionum,a));
	return 0;
}