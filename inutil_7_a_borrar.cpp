
#include<stdio.h>
#include<conio.h>

main(){
	int var=0;
	
	
	//va a evaluar una variable 
	switch(var){
			case 0:
				// ejecuta el codigo aqui 
				printf("la var tiene cero");
			break;
			case 1:
			printf("la var tiene uno");
			//si la variable tiene el el uno entoces juega aqui
			break;
			case 2:
			printf("la var tiene dos");
			break;
			default:
				printf("la variable tiene algo diferente");
				break;
		
	}
	
	
	return 0;
}
