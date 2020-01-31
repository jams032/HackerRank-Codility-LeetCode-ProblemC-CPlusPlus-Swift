//
//  main.cpp
//  StackLinkedList
//
//  Created by Jamshed on 20/12/19.
//  Copyright © 2019 Jamshed. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int count=-1;
typedef struct node {
    int val;
    struct node * NEXT;
    struct node * PREV;
} node_t;

node_t * last;
void create() {
    last = (struct node*) malloc(sizeof(node_t));
    last = NULL;
    count = 0;
}
int isEmpty () {
    if (last == NULL) return 1;
    else return 0;
}

int size() {
    return count;
}
void push (int num) {
    node_t * temp;
    temp = (struct node*) malloc(sizeof(node_t));
    temp->val = num;
    temp->NEXT = NULL;
    temp->PREV = last;
    if (last != NULL) {
        last->NEXT = temp;
        last = temp;
    }
    else last = temp;
    count ++;
}
int pop () {
    int v;
    v = last->val;
    node_t * temp;
    temp = (struct node*) malloc(sizeof(node_t));
    temp = last;
    last = last->PREV;
    if(last!= NULL) last->NEXT = NULL;
    free(temp);
    count--;
    return v;
}
int top () {
    return last->val;
}

void display(node_t *temp) {
    if (temp->PREV!=NULL) display(temp->PREV);
    printf("%d ", temp->val);
}

void menu () {
    while (1) {
        printf("Press 1 to create a new Stack.\n");
        printf("Press 2 to push.\n");
        printf("Press 3 to check if the Stack is empty.\n");
        printf("Press 4 to pop.\n");
        printf("Press 5 to show the top element.\n");
        printf("Press 6 to view the size.\n");
        printf("Press 7 to display.\n");
        printf("Press 0 to Exit.\n");
        int n;
        scanf("%d", &n);
        if (n==0) break;
        else if (n==1) create();
        else if (n==2) {
            printf("Enter the number: ");
            int num;
            scanf("%d", &num);
            push(num);
        }
        else if (n==3) {
            if (isEmpty()) printf("The Stack is empty.\n");
            else printf("The Stack is not empty.\n");
        }
        else if (n==4) {
            if (!isEmpty()) printf("Popped value = %d\n", pop());
            else printf("The Stack is empty.\n");
        }
        else if (n==5) {
            if (!isEmpty()) printf("The top element = %d\n", top());
            else printf("The Stack is empty.\n");
        }
        else if (n==6) printf("Size of the Stack = %d\n", size());
        else if (n==7) {
            if (!isEmpty()) {
                display(last);
                printf("\n");
            }
            else printf("The Stack is empty.\n");
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }
}
int main () {
    menu();
    return 0;
}
