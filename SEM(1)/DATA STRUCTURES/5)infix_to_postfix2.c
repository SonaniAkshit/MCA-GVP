/*Write program to convert infix expression with parenthesis  to suffix expression using stack*/
#include<stdio.h>
#include<conio.h>

int operatorpriority(char operatorvalue){
	if(operatorvalue == '*'||operatorvalue == '/'){
		return 2;
	}
	else if (operatorvalue == '+' || operatorvalue == '-'){
		return 1;
	}
	return 0;
}
void push(char opeArray[],int *top,char operatorvalue){
	*top +=1;
	opeArray[*top]=operatorvalue;
}
char pop(char opeArray[],int *top){
	char value=opeArray[*top];
	*top -=1;
	return value;
}
void main() {
    char opeArray[50], ch[20], operatorpop;
    int i = 0, x = -1, *top = &x;

    printf("Enter the Infix Expression: ");
    scanf("%s", ch);

    while (ch[i] != '\0') {
        if (ch[i] == '+' || ch[i] == '-' || ch[i] == '*' || ch[i] == '/') {
            if (*top == -1) {
                push(opeArray, top, ch[i]);
            } 
			else {
                while (*top >= 0 && operatorpriority(opeArray[*top]) >= operatorpriority(ch[i])) {
                    operatorpop = pop(opeArray, top);
                    printf("%c", operatorpop);
                }
                push(opeArray, top, ch[i]);
            }
        } 
		else if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z')) {
            printf("%c", ch[i]);
        }
        i++;
    }
    while (*top != -1) {
        operatorpop = pop(opeArray, top);
        printf("%c", operatorpop);
    }
}
