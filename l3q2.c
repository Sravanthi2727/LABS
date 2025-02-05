#include<stdio.h>
int max = 5;
int stack[5];
int top = 5;
int isEmpty(){
    return top == max;
}

int isFull(){
    return top ==  0;
}

void push(int x){
	int i ;
    if(isFull()) printf("Stack Overflow\n");
    else {
        stack[--top] = x;
        printf("Pushed element is %d %d \n", x, top);
}
}

void pop(){
    if(isEmpty()) printf("Stack Underflow\n");
    else printf("Elememt popped is %d\n ", stack[top++]);
}

void peep(){
    if(isEmpty()) printf("Stack Underflow\n");
    else printf("The last element in the stack is %d %d \n", stack[top], top);
//    printf("%d", stack[1]);
}
int main()
{
	printf("Stack in Descending Order\n");
    push(2);push(23);push(65);push(78);push(90);push(142);pop();peep();isEmpty();isFull();
    return 0;
}
