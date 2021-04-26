#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int SI = 1000, in, out;	
	char ac, re;
	
	printf("CAJERO VIRTUAL \n\n");
	printf("Su saldo actual es de: %i \n\n", SI);
	
	do{
		
		printf("Cual accion desea ejecutar: \n\n");
		
		printf(" Ingresar dinero: I \n Retirar dinero: O \n Acudir saldo: M \n Salir: L \n\n");
		scanf("%c", &ac);
		
		if (ac == 'I' || ac == 'i'){
			printf("Cuanto dinero desea ingresar: \n");
			scanf("%i", &in);
			
			SI = SI + in;
			
			printf("\nAccion exitosa. \n");
			printf("Desea hacer alguna otra accion? Si= s:  \n");
			scanf(" %c", &re);
//			fflush(stdin);

		}
		if (ac == 'O' || ac == 'o'){
			printf("Cuanto dinero deseas retirar? \n");
			scanf("%i", &out);
						
			if (out>SI){
				printf("\nSaldo no disponible. \n");
			}
			else if (out<SI){
				SI = SI - out;
				
				printf("\nAccion exitosa. \n");
			}
			printf("\nDesea hacer alguna otra accion? Si= s:  \n");
			scanf(" %c", &re);
//			fflush(stdin);
		}	
		if (ac == 'M' || ac == 'm'){
		
			printf("Tu saldo es de: %i\n",SI);
						
			printf("\nDesea hacer alguna otra accion? Si= s:  \n");
			scanf(" %c", &re);
//			fflush(stdin);
		}
		
		if (ac == 'L' || ac == 'l'){
			
			printf("Gracias por su visita. \n");
	
			break;
			
		}	
		else{
			printf("\nAccion incorrecta. \n");
			
			printf("\nDesea hacer alguna otra accion? Si= s:  \n");
			scanf(" %c", &re);
			
			fflush(stdin);
		
		}
		
		(system("cls"));
	}while(re == 'S' || re == 's');

}
