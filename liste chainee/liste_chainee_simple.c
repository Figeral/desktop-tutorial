#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 10
struct list{
int valeur;
struct list*next;
};
 struct list*creation (int val){
struct list*noeud;
noeud=(struct list*) malloc(sizeof( struct list));
noeud->valeur=val;
noeud->next=NULL;
return  noeud;
}
// creation d'une  fonction qui  remplit les element d'une liste
void remplisseur(struct list**head,struct list*suivant){
if(*head==NULL){
	*head=suivant;
	return;
	} else {
        struct list* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = suivant;
    }
}
void printList(struct list*head){
struct list*current=head;
while(current != NULL){
	printf("[%d",current->valeur);
	current=current->next;
}
}


int main(){
	int b;
	int tbl[max];
	struct list*head=NULL;  // declaring the variable head as pointer
	srand(time(NULL));
	for(int i=0;i<max;i++)
	{
		b=rand() %100;
		tbl[i]=b;
		printf("[%d] ",tbl[i]);

		// maintenant placons les valeur dans la list cree
		struct list*host;
		host=creation(b);
		remplisseur(&head,host);
		printList(&head);
	}

      return 0;
}
