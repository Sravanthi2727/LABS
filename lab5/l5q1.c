#include<stdio.h>
int max = 5;
int r = -1, f = -1;
int q[5];

int isEmpty(){
  return f && r==-1;
}

int isFull(){
  return r==max-1;
}

void enq(int n){
	if(isFull()){
		printf("Queue is Overflow\n");
		return 0;
	}
	else if(isEmpty()) {
		r++;
		f++;
		q[r] = n;
		printf("Element Enqueued : %d at %d\n", q[r], r);
	}
	else {
		q[++r] = n;
		printf("Element Enqueued : %d at %d\n", q[r], r);
	}
	
}

void deq(){
   if(isEmpty()){
   	printf("Queue is Underflow\n");
   	return 0;
   }
   else if(f==max) printf("Index Out of Bound.");
   else{
   	printf("Dequeued Element :  %d at %d\n", q[f++], f);
   }
}
int main(){
	enq(10);
	enq(20);
	enq(30);
	enq(40);
	enq(50);
	deq();deq();deq();deq();deq();deq();
    return 0;
}
