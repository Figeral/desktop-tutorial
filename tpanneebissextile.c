#include<stdio.h>
#include<stdlib.h>
int main (){
int annee,debut,fin;
printf("entrer l'annee de debut: ");
scanf("%d",&debut);
printf ("entrer l'annee de fin: ");
scanf("%d",&fin);

printf("\n le nombre d'annee bissextile entre %d et %d est :",debut, fin);
if (fin < debut || fin== debut  ){
	printf("\n acune annee bissextile ");
}
for (annee=debut;annee< fin; annee++){
	if ((annee%4==0 && annee % 100!=0 )|| (annee %400==0)){
		printf ("\n %d",annee);
	}
}
return 0;
}
