#include <stdio.h>

int main(){
	int vet[8];
	int vetposit[8] = {0};
	int vetneg[8] = {0};
	
	for(int i = 0; i<8; i++){
		scanf("%d",&vet[i]);
	}
	
	for(int i = 0; i<8; i++){
		if (vet[i]>0)
			vetposit[i] = vet[i];
		if (vet[i]<0)
				vetneg[i] = vet[i];
	}
	
	printf("Vetor com elementos positivos: \n"); 
	
	for(int i = 0; i<8; i++){
		printf(" Indice [%d]: %d\n",i, vetposit[i]);
	}
	
	printf("Vetor com elementos negativos: \n"); 
	
	for(int i = 0; i<8; i++){
		printf(" Indice [%d]: %d\n",i, vetneg[i]);
	}
	
	
	return 0;
}
