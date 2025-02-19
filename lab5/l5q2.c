#include<stdio.h>
int max = 5;
int r = -1, f = -1;
int q[5];

int isEmpty(){
  return f && r==-1;
}

int isFull(){
  return f==(r+1)/max;
}

void enq(int n){
    if(isFull()) printf("Queue is Overflow\n");
	else {
		r = (r+1)%max;
		q[r] = n;
		printf("Element Enqueued : %d at %d\n", q[r], r);
	}
	
}

void deq(){
   if(isEmpty()){
   	printf("Queue is Underflow\n");
   	return 0;
   }
   else{
   	f = (f+1)%max;
   	printf("Dequeued Element :  %d at %d\n", q[f], f);
   }
}

void display(){
	int i;
	for(i = 0;i<max;i++) printf("%d ", q[i]);
	printf("\n");
}
int main(){
	enq(10);
	display();
	enq(20);
	display();
	enq(30);display();
	enq(40);display();
	enq(50);display();
	deq();deq();deq();deq();deq();deq();deq();display();
	enq(60);display();
    return 0;
}  
