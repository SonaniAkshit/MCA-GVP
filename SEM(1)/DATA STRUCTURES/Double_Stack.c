#include<stdio.h>
#include<conio.h>
#define SIZE 5

void push1(int[],int*,int*);
void push2(int[],int*,int*);
void pop1(int[],int*);
void pop2(int[],int*);
void peek1(int[],int*);
void peek2(int[],int*);
void modify1(int[],int*);
void modify2(int[],int*);
void display(int[],int*,int*);
void main(){
	int top1= -1,top2 = SIZE;
	int s[SIZE];
	int *t1=&top1,*t2=&top2;
	int ch;
	
	while(1){
		printf("\n*****MENU*****");
		printf("\n1)Push to Stack1\n2)Push to Stack2\n3)Pop from Stack1\n4)Pop from Stack2");
		printf("\n5)Peek Stack1\n6)Peek Stack2\n7)Modify Stack1\n8)Modify Stack2");
		printf("\n9)Display Stack\n10)Exit\n**************\n");
		
		printf("\nEnter any choice: ");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:
				push1(s,t1,t2);
				break;
			case 2:
				push2(s,t2,t1);
				break;
			case 3:
				pop1(s,t1);
				break;
			case 4:
				pop2(s,t2);
				break;
			case 5:
				peek1(s,t1);
				break;
			case 6:
				peek2(s,t2);
				break;
			case 7:
				modify1(s,t1);
				break;
			case 8:
				modify2(s,t2);
				break;
			case 9:
				display(s,t1,t2);
				break;
			case 10:
				exit(0);
			default:
				printf("\nYou Enter Wrong Choice...\n");
		}
	}
}
void push1(int s[],int *top1,int *top2){
	int ele;
	if(*top1 + 1 == *top2)
		printf("\nStack Overflow!!\n");
	else{
		printf("\nEnter Value to Push on Stack1: ");
		scanf("%d",&ele);
		*top1 +=1;
		s[*top1]=ele;
	}
}
void push2(int s[],int *top2,int *top1){
	int ele;
	if(*top2-1 == *top1)
		printf("\nStack Overflow!!\n");
	else{
		printf("\nEnter value to push on Stack2: ");
		scanf("%d",&ele);
		*top2 -=1;
		s[*top2]=ele;
	}
}
void pop1(int s[],int *top1){
	if(*top1 == -1)
		printf("\nStack Underflow!!\n");
	else{
		printf("\n%d is Popped from Stack1\n",s[*top1]);
		*top1 -=1;
	}
}
void pop2(int s[],int *top2){
	if(*top2==SIZE)
		printf("\nStack Underflow!!\n");
	else{
		printf("\n%d is Popped from Stack2\n",s[*top2]);
		*top2 +=1;
	}
}
void peek1(int s[],int *top1){
	if(*top1 == -1)
		printf("\nStack Underflow!!\n");
	else{
		printf("\nTop Element : %d\n",s[*top1]);
	}
}
void peek2(int s[],int *top2){
	if(*top2==SIZE)
		printf("\nStack Underflow!!\n");
	else{
		printf("\nTop Element : %d\n",s[*top2]);
	}
}
void modify1(int s[],int *top1){
	int oldele,newele,i,found=0;
	if(*top1==-1)
		printf("\nStack Underflow!!\n");
	else{
		printf("\nEnter old value you want to modify: ");
		scanf("%d",&oldele);
		for(i=0;i<=*top1;i++){
			if(s[i]==oldele){
				found=1;
				printf("\nEnter new value you want to modify: ");
				scanf("%d",&newele);
				s[i]=newele;
				printf("\nvalue at %d at position %d in stack 1 modified to %d\n",oldele,i,newele);
				break;
			}
		}
		if(!found)
			printf("\nValue Can't Found!!\n");
	}
}
void modify2(int s[],int *top2){
	int oldele,newele,i,found=0;
	
	if(*top2 == SIZE)
		printf("\nStack Underflow!!\n");
	else{
		printf("\nEnter old value you want to modify: ");
		scanf("%d",&oldele);
		for(i=SIZE-1;i>=*top2;i--){
			if(s[i]==oldele){
				found=1;
				printf("\nEnter new value you want to modify: ");
				scanf("%d",&newele);
				s[i]=newele;
				printf("\nvalue at %d at position %d in stack 1 modified to %d\n",oldele,i,newele);
				break;
			}
		}
		if(!found)
			printf("\nValue Can't Found!!\n");
	}
}
void display(int s[],int *top1,int *top2){
	int i;
	
	if(*top1==-1)
		printf("\nStack Underflow!!\n");
	else{
		printf("\n----STACK1----\n");
		for(i=*top1;i>=0;i--){
			printf("[%d]",s[i]);
		}
		printf("\n--------------\n");
	}
	if(*top2==SIZE)
		printf("\nStack Underflow!!\n");
	else{
		printf("\n----STACK2---\n");
		for(i=SIZE-1;i>=*top2;i--){
			printf("[%d]",s[i]);
		}
		printf("\n--------------\n");
	}
}
