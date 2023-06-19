#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	int n;
      char str[40];
	printf("entrer une chaine de charactere :");
	scanf("%s",&str);
	// la taille de la chaine de character
	int count=0;
	int upp=0;
	int low=0;
	for(int i=0;str[i] !='\0';i++)
	{
		count++;
		if (isupper(str[i])!=0){
			upp++;
		}
		if (islower(str[i])!=0){
			low++;
		}
	}
	printf("pour la chaine %s\n",str);
	printf("taille:  %d \n", count);
	printf("nombre de lettre  majiscule :%d\n",upp);
	printf("nombre de lettre  miniscule :%d\n",low);
	return 0;
}
