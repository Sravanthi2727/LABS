#include<stdio.h>
#include<head.h>
int fact(int n){
	if(n==0||n==1) return 1;
	else return n*fact(n-1); 
}
int main(){
	int i, n;
	multi(2,3);
	printf("Enter number to find factorial:");
	scanf("%d", &n);
	printf("THe factorial: %d ", fact(n));
	return 0;
}
