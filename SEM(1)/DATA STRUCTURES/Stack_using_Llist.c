/*Write Menu driven program to implement operations of stack using linked-list 1) Push 2) pop 3) peep 4) modify  5) display*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void push(struct node** top);
void pop(struct node** top);
void peek(struct node* top);
void display(struct node* top);
void modify(struct node* top);

void main() {
    struct node *top = NULL;
    int ch;
    while (1) {
        printf("\n*****MENU*****\n1)Push\n2)Pop\n3)Peek\n4)Modify\n5)Display\n6)Exit\n**************\n");
        printf("\nEnter any Choice: ");
        scanf("%d", &ch);
        
        switch (ch) {
            case 1:
                push(&top);
                break;
            case 2:
                pop(&top);
                break;
            case 3:
                peek(top);
                break;
            case 4:
                modify(top);
                break;
            case 5:
                display(top);
                break;
            case 6:
                exit(0);
            default:
                printf("\nYou Entered Wrong Choice...\n");
        }
    }
}

void push(struct node** top) {
    int ele;
    struct node *new1 = (struct node*)malloc(sizeof(struct node));
    printf("Enter any value: ");
    scanf("%d", &ele);
    new1->data = ele;
    
    new1->next = *top;
    *top = new1;
    printf("\n%d Pushed Successfully!\n", ele);
}

void pop(struct node** top) {
    if (*top == NULL) {
        printf("\nStack Underflow!\n");
    } else {
        struct node *temp = *top;
        *top = (*top)->next;
        printf("\n%d is Popped\n", temp->data);
        free(temp);
    }
}

void peek(struct node* top) {
    if (top == NULL) {
        printf("\nStack Underflow!\n");
    } else {
        printf("\nTop Element: %d\n", top->data);
    }
}

void modify(struct node* top) {
    int oldele, newele, found = 0;
    if (top == NULL) {
        printf("\nStack Underflow!\n");
    } else {
        printf("Enter the old value you want to change: ");
        scanf("%d", &oldele);
        struct node *temp = top;
        while (temp != NULL) {
            if (temp->data == oldele) {
                found = 1;
                printf("\nEnter the new value you want to modify: ");
                scanf("%d", &newele);
                temp->data = newele;
                printf("\nValue %d at position of %d is modified to %d\n", oldele, temp->data, newele);
                break;
            }
            temp = temp->next;
        }
        if (!found) {
            printf("\nValue Not Found!\n");
        }
    }
}

void display(struct node* top) {
    if (top == NULL) {
        printf("\nStack Underflow!\n");
    } else {
        struct node *temp = top;
        printf("\n------STACK------\n");
        while (temp != NULL) {
            printf("[%d] ", temp->data);
            temp = temp->next;
        }
        printf("\n-----------------\n");
    }
}

