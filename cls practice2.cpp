#include<stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
void arayaEkle(struct node *head,int x,int y) {
	struct node *yeni = (struct node*)malloc (sizeof(struct node));
	yeni->data = x;
	struct node *gecici = head;
	while (gecici ->data != y);
	{
		gecici =gecici->next;
	}
	yeni->next = gecici->next;
	gecici = gecici->next;
}
int main ()
struct node *dugum1, *dugum2, *dugum3;
dugum1 = (struct node*)malloc(sizeof(struct node));
dugum2 = (struct node*)malloc(sizeof(struct node));
dugum3 = (struct node*)malloc (sizeof(struct node));
dugum1-> data = 1; dugum2-> data = 2; dugum3-> data = 3;
dugum1-> next = dugum2; dugum2->next = dugum3; dugum3->next = NULLL;
printList(dugum1);
printf("\n");
arayaEkle(dugum1, 7, 1);
printList(dugum1);
getch();

