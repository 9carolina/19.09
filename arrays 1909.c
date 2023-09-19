/*Arrays
tipoDeElementosDelArray		nombre		[numeroElementos]; [¿cuantas posiciones quieres?]
ej1. int					vectorVez		[9];		
*/
#include<stdio.h>  
int main(){
	int x, tabla[100];
	
	for (x=0;x<100; x++){
		tabla[x]=x;
	}
	for (x=0;x<100;x+=2){
		printf("%d\n", tabla[100-x]);
	}
	
	return 0;
}
