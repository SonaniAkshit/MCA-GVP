/*Write program to convert infix expression to postfix expression using stack*/
#include<stdio.h>
#include<conio.h>

int operatorPriority(char operatorValue) {
    int priority;
    if (operatorValue == '*' || operatorValue == '/') {
        priority = 2;
    } 
	else if (operatorValue == '+' || operatorValue == '-') {
        priority = 1;
    }
    return priority;
}

void push(char opeArray[], int *top, char operatorValue) {
    *top += 1;
    opeArray[*top] = operatorValue;
}

char pop(char opeArray[], int *top) {
    char value = opeArray[*top];
    *top -= 1;
    return value;
}

void main() {
    char opeArray[50], ch[20], operatorPop;
    int i = 0, x = -1, *top = &x;

    printf("Enter the Infix Expression: ");
    scanf("%s", ch);

    while (ch[i] != '\0') {
        if (ch[i] == '+' || ch[i] == '-' || ch[i] == '*' || ch[i] == '/') {
            if (*top == -1) {
                push(opeArray, top, ch[i]);
            } 
			else {
                while (*top >= 0 && operatorPriority(opeArray[*top]) >= operatorPriority(ch[i])) {
                    operatorPop = pop(opeArray, top);
                    printf("%c", operatorPop);
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
        operatorPop = pop(opeArray, top);
        printf("%c", operatorPop);
    }
}

