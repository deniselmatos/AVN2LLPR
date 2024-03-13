#include <stdio.h>

int main(){
	
	int m[6][3];
	int prod = 1;
	
	for(int i=0; i<6; i++){
		for(int j=0; j<3; j++){
			scanf("%d",&m[i][j]);
		}
	}
	
	printf("\n");
	
	for(int i=0; i<6; i++){
			printf("\n");
		for(int j=0; j<3; j++){
			printf("%2d \t",m[i][j]);
		}
	}
	
	for(int j=0; j<3; j++){
		for(int i=0; i<6; i++){
			if(j==2){
				prod *= m[i][j];
			}
				
		}
	}
	
	printf("\n\n Produto dos elementos da terceira coluna: %d\n",prod); 
	
	return 0;
}
