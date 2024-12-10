#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5

void push(int[] , int*);
void pop(int[] , int*);
void peek(int[] , int*);
void display(int[] , int*);
void modify(int[] , int*);

void main()
{
	int x = -1;
	int s[SIZE],*top = &x;
	int ch;
	
	while(1)
	{
		printf("\n****MENU****\n1)Push\n2)Pop\n3)Peek\n4)Modify\n5)Display\n6)Exit\n************");
		printf("\n\nEnter any choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				push(s,top);
				break;
			case 2:
				pop(s,top);
				break;
			case 3:
				peek(s,top);
				break;
			case 4:
				modify(s,top);
				break;
			case 5:
				display(s,top);
				break;
			case 6:
				exit(0);
			default:
				printf("You Enter Wrong choice..");
		}	
	}
	getch();
}
void push(int s[],int *top)
{
	int ele;
	if(*top == SIZE-1)
		printf("\nStack Overflow!\n");
	else{
		printf("\nEnter Any Value: ");
		scanf("%d",&ele);
		*top +=1;
		s[*top]=ele;
	}	
}
void pop(int s[],int *top)
{
	if(*top == -1)
		printf("\nStack Underflow!\n");
	else{
		printf("\n%d is Popped..\n",s[*top]);
		*top-=1;
	}	
}
void peek(int s[],int *top)
{
	if(*top == -1)
		printf("\nStack Underflow!\n");
	else{
		printf("\nTop Element: %d\n",s[*top]);
	}	
}
void display(int s[],int *top)
{
	int i;
	if(*top == -1)	
		printf("\nStack Underflow!\n");
	else{
		printf("\n------STACK------\n");
		for(i=*top;i>=0;i--){
			printf("[%d]",s[i]);
		}
		printf("\n-----------------\n");
	}
}
void modify(int s[],int *top)
{
	int oldele,newele,i,found=0;
	if(*top == -1)
		printf("\nStack Underflow!\n");
	else{
		printf("Enter old Vlaue you want to change: ");
		scanf("%d",&oldele);
		for(i=0;i<=*top;i++)
		{
			if(s[i]==oldele)
			{
				found = 1;
				printf("\nEnter New Vlaue you wnat to modify: ");
				scanf("%d",&newele);
				s[i]=newele;
				printf("\nvalue %d at position of %d is modify by %d\n",oldele,i,newele);
				break;
			}
		}
		if(!found)
			printf("\nValue Not Found!\n");
	}
}
