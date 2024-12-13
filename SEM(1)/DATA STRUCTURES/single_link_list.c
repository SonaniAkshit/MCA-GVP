#include<stdio.h>
#include<conio.h>

struct node{
	int data;
	struct node *next;
};

void insert(struct node **);
void delete(struct node **);
void display(struct node *);
void modify(struct node **);

void main(){
	struct node *head = NULL;
	int ch;
	
	while(1){
		printf("\n****MENU****\n1)Insert\n2)Delete\n3)Display\n4)Modify\n5)Exit\n**************\n");
		printf("\nEnetr Any choice: ");
		scanf("%d",ch);
		switch(ch)
		{
			case 1:
				insert(&head);break;
			case 2:
				delete(&head);break;
			case 3:
				display(head);break;
			case 4:
				modify(&head);break;
			case 5:
				exit(0);
			default:
				printf("\nYou Enter Wrong Choice...");
		}
	}
}
void insert(struct node **head){
	int ele;
	struct node *new1;
	new1 = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter any value: ");
	scanf("%d",&ele);
	new1->data=ele;
	if(*head==NULL){
		new1->next=NULL;
		*head=new1;
	}
	else{
		new1->next=*head;
		*head=new1;
	}
}
void delete(struct node **head){
	printf("\ndelete\n");
}
void display(struct node *head){
	printf("\ndisplay\n");
}
void modify(struct node **head){
	printf("\nmodify\n");
}
