#include<stdio.h>
int fibo(int n){
	if(n==1) return 1;
	else if(n==0) return 0;
	else return fibo(n-1)+fibo(n-2);
}
int main(){
	int i, n;
	printf("Enter no.of fibonacci numbers to  be printed :");
	scanf("%d", &n);
	printf("THe fibonacci Series :\n 0 ");
	for(i=1;i<n;i++){
		printf("%d ", fibo(i));
	}
	return 0;
}
