#include<stdio.h>
int main(){
	int i, j, num;
	
	for (i=1; i<=10; i++){
		printf("Tabla de multiplicar %d", i);
		
		for(j=1; j<=10; j++){
			printf("\n%d*%d=%d", i,j,i*j);
		}
	}
	return 0;
}
