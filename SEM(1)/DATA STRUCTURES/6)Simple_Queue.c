#include<stdio.h>
#include<conio.h>
#define SIZE 5

void insert(int [],int *,int *);
void delete(int [],int *,int *);
void modify(int [],int *,int *);
void display(int [],int *,int *);

void main(){
	int f=-1,r=-1,q[SIZE],ch;
	int *front=&f,*rear=&r;
	
	while(1){
		printf("\n****MENU****\n1)Insert\n2)Delete\n3)Modify\n4)Display\n5)Exit\n************\n");
		printf("\nEnter any choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				insert(q,front,rear);
				break;
			case 2:
				delete(q,front,rear);
				break;
			case 3:
				modify(q,front,rear);
				break;
			case 4:
				display(q,front,rear);
				break;
			case 5:
				exit(0);
			default:
				printf("You Enter Wrong Choice...");
				
		}
	}	
}
void insert(int q[],int *front,int *rear){
	int ele;
	if(*rear == SIZE-1)
		printf("\nQueue Overflow!!\n");
	else{
		if(*front == -1 && *rear == -1)
			*front = *rear = 0;
		else
			(*rear)++;
		printf("\nEnter Any Value: ");
		scanf("%d",&ele);
		q[*rear]=ele;
	}
}
void delete(int q[],int *front,int *rear){
	if(*front == -1)
		printf("\nQueue Underflow!!\n");
	else{
		printf("\n%d is Deleted..",q[*front]);
		(*front)++;
		if(*front>*rear)
			*front = *rear = -1;
	}
}
void modify(int q[],int *front,int *rear){
	int oldele,newele,found=0,i;
	if(*front == -1)
		printf("\nQueue Underflow!!\n");
	else{
		printf("\nEnter old value you want to modify: ");
		scanf("%d",&oldele);
		for(i=*front;i<=*rear;i++)
		{
			if(q[i]==oldele){
				found=1;
				printf("Enetr new value to modify: ");
				scanf("%d",&newele);
				q[i]=newele;
				printf("\n%d in modify at position %d by %d\n",oldele,i+1,newele);
				break;
			}
		}
		if(!found)
			printf("\nValue Can't Found!!'\n");
	}
}
void display(int q[],int *front,int *rear){
	int i;
	if(*front == -1)
		printf("\nQueue Underflow!!\n");
	else{
		for(i=*front;i<=*rear;i++)
		{
			printf("[%d]",q[i]);
		}
	}
}
