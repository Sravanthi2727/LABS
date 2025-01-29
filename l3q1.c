#include<stdio.h>
#define top 3

void push(int a[], int max, int value){
	if(top==max-1){
		printf("Stack Overflow/full");
	}
	else a[top++] = value;
}

void pop(int a[], int max){
	if(top==-1) printf("Stack Underflow/Empty");
	else top--;
}

void peep(int a[] , int max){
	printf("The last element of stack is %d", a[top]);
}

void isEmpty(int a[],int max){
	if(top==-1) printf("Stack is Empty");
}

void isFull(int a[], int max){
	if(top==max-1) printf("Stack is Full");
}

void print(int a[], int max){
	int i;
	for(i=0;i<max;i++) printf("%d ", a[i]);
}

int main(){
	int a[5]={1,2,3};
	push(a, 5, 25);print(a,5);pop(a, 5);print(a,5);peep(a,5);
	return 0;
}
