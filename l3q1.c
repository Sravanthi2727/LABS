#include<stdio.h>
#define max 5
int stack[max];
int top = -1;
int isEmpty(){
    return top == -1;
}

int isFull(){
    return top ==  max-1;
}

void push(int x){
    if(isFull()) printf("Stack Overflow\n");
    else {
        stack[++top]  = x;
        printf("Pushed element is %d %d \n", x, top);
}
}

void pop(){
    if(isEmpty()) printf("Stack Underflow\n");
    else printf("Elememt popped is %d\n ", stack[top--]);
}

void peep(){
    if(isEmpty()) printf("Stack Underflow\n");
    else printf("The last element in the stack is %d\n", stack[top]);
}
int main()
{
    push(2);push(23);push(65);push(78);push(90);push(142);pop();peep(),isEmpty();isFull();
    return 0;
}
