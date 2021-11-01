#include <stdio.h>
#include <stdlib.h>
struct note {
	int data;
	struct node *next;
};
void printlist(struct node *dugum){
	struct node *gecici =dugum;
	while(gecici!=NULL)
	{
		printf("%d\t",gecici->data);
		gecici=gecici->next;
	}
	int main()
	{
		struct node*dugum1*(struct node)melloc(sizeof(struct node));
		struct node *dugum2*(struct node*)melloc(sizeof(struct node));
		struct node *dugum3(struct node)melloc(sizeof(struct node));
		dugum1->next=dugum2;dugum2 -> next=dugum3;dugum3->next=NULL;
		}
		return 0;
	}
