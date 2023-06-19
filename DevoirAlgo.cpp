#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 20000;
int main(){
	long int mont,fact;
	srand(time(NULL));
	{
		fact=rand()% size;
		mont=rand()% size;
	}

	printf("votre facture est : %d fcfa",fact);
	printf("\nvotre paiment est de :%d fcfa", mont);

	// traitons le cas ou le montant est insuffisant
	while(mont < fact ){
		printf("\n**************votre solde est insuffisant******************* ");
		printf("\nveillez entrer un montant correct  ");
		exit(0);
	}
	int resultat= mont - fact;
	if ((resultat == 25 ) || (resultat <25)){
			//there is a bug here, the below statement occurs even when the condition are not righto
	printf("\n \n*nous prenons en charge votre facture ");
	}
	else
	{
		printf("\nvotre monnaie est de: %d fcfa",resultat);
		// counting the number of nodes  container will take the nodes and host will be the remaining value
		while(resultat){
			int container,host;
			container=resultat/5000;
			printf("\n nombre de billet de 5000 :%d",container);
	                host=resultat -container*(5000);
	                container=host/2000;
	                printf("\n nombre de billet de 2000 :%d",container);
	                 host=host -container*(2000);
	                container=host/1000;
	                printf("\n nombre de billet de 1000 :%d",container);
	                 host=host -container*(1000);
	                container=host/500;
	                printf("\n nombre de billet de 500 :%d",container);
	                host=host -container*(500);
	                container=host/100;
	                printf("\n nombre de piece de 100 :%d",container);
	                 host=host -container*(100);
	                container=host/50;
	                printf("\n nombre de piece de 50 :%d",container);


                        break;
	         }
		}
return 0;
}
