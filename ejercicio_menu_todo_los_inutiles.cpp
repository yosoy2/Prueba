#include<stdio.h>
#include<conio.h>

//definimos un prototipo

void inicio();
void mostrarHola();
void mostrarNombre();



int main(){
	int opcion = 0;
	
	do{
	
	
	
	//menu
/*	printf(" 1. inicio \n ");
	printf("2. muestra hola \n ");
	printf("3. muestra mi nombre \n ");
	printf("4. adios \n "); */
	scanf("%d", &opcion);	
	
	switch (opcion){
		
		case 1 :
			inicio();
			break;
			case 2:
				mostrarHola();
				break;
				case 3:
					mostrarNombre();
					break;
		
	}
	
	
	}while(opcion < 4);
	
	printf("\n ojala te pudras"); 

	
	return 0;
}

void inicio(){
	printf("\n\t  elegiste la opcion de inicio ");
}

void mostrarHola() {
	printf("\n\t hola ");
}

void mostrarNombre(){
		printf("\n\t yo ");
}



