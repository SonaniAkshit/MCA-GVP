#include<stdio.h>
#include<conio.h>

int operatorpriority(char operatorvalue){
	if(operatorvalue == '*' || operatorvalue == '/')
		return 2;
	else if(opratorvalue == '+' || operatorvalue == '-')
		return 1;
	else
		return 0;
}
void push(char opearray[],int *top,char operatorvalue){
	*top +=1;
	opearray[*top]=operatorvalue;
}
char pop(char opearray[],int *top){
	char value=opearray[*top];
	*top -=1;
	return value;
}
