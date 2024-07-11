#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	
};
struct node *head;
void beginsert();

void biginsert(){
	struct node *ptr;
	int item;
	ptr=(struct node* )malloc(sizeof(struct node*));
	if(ptr == NULL){
		printf("\n OVERFLOW");
		
		
	}
	else{
		printf("\n Enter value : ");
		scanf("%d",&item);
		ptr->data=item;
		ptr->next=head;
		head=ptr;
		printf("Item Inserted : ");
	}
}
