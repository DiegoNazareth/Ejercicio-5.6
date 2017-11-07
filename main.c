/Realice un algoritmo que lea un vector de seis elementos e intercambie las
//posiciones de sus elementos, de tal forma que el primer elemento pase a
//ser el último y el último el primero, el segundo el penúltimo y así sucesivamente,
//e imprima ese vector. 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int vector[6],i,j, aux=0;
	for(i=0;i<6;i++){
		scanf("%d", &vector[i]);
	}
	j=0;
	for(i=0;i<3;i++){
		aux=vector[i];
		vector[i]=vector[6-j];
		vector[6-j]=aux;
		j=j+1;
	}
	for(i=1;i<7;i++){
		printf("%d ", vector[i]);
	}
	
	return(0);
}
