#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
};

struct node * top;
struct node * head;

void traverse(){
    if(isEmpty()) printf("\nYour stack is EMPTY");
    else{
        printf("\n");
        struct node * p = head;
        while(p!=NULL){
            printf("%d ", p->data);
            p = p->next;
        }
    }
    printf("\n");
}

int isEmpty(){
    if(top == NULL) return 1;
    return 0;
}

void push(int v){
    struct node * new = (struct node *)malloc(sizeof(struct node));
    new->data = v;
    new->next = NULL;
    if(isEmpty()){
        head = new;
        top = new;
    }
    else{
        top->next = new;
        top = new;
    }
}

int pop(){
    int v = top->data;
    if(isEmpty()){
        printf("\nStack is Underflow!");
        return 0;
    }
    else{
        struct node * t = top;
        struct node * p = head;
        while(p->next != top) p = p->next;
        p->next = NULL;
        top = p;
        free(t);
        printf("\nThe element %d is popped", v);
    }
}

void peek(){
    if(isEmpty()) printf("\nNothing in the Stack");
    else printf("\nThe element at TOP is : %d", top->data);
}