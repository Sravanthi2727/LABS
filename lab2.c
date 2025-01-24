#include<stdio.h>
int array(){
	int n;
	printf("Enter:\n 1 for choosing Sub Array 1\n 2 choosing for Sub Array 2\n 3 choosing for Main Array\n");
	scanf("%d", &n);
    return n;
}
int choose(){
	int n, i;
	printf("Enter:\n 1 for choosing to perform task at the beginning \n 2 for choosing to perform task at the ending \n 3 for choosing to perform task at the given position by you \n");
	scanf("%d", &n);
	printf("\n");
	return n;
}

void iu(signed int a[],int k){
	int i, n,p;
	k =k+1;
	
	printf("Enter the specified position:");
	scanf("%d", &p);
	
	printf("Enter the value to insert at specified position:");
	scanf("%d", &n);
	
	if(p<0 || p>k) {
	printf("Invalid position!\n");	}
	else {
	   for(i=k-1;i>=p;i--){
		   a[i+1] = a[i];
	    }
	    a[p]=n;	
   }
}

void ie(signed int a[],int k){
	int i, n;
	printf("Enter the value to insert at the end:");
	scanf("%d", &n);
	a[k]=n;
}

void ib(signed int a[],int k){
	int i, n;
	printf("Enter the value to insert at beginning:");
	scanf("%d", &n);
	for(i=k-1;i>=0;i--){
		a[i+1] = a[i];
	}
	a[0]=n;
}

void db(signed int a[], int k){
	int i;
	for(i=0;i<k;i++){
		a[i] = a[i+1];
	}
}

void de(signed int a[], int k){
	int i;
	for(i=0;i<k-1;i++){
		a[i] = a[i];
	}
}

void du(signed int a[],int k){
	int i,p;
	k =k-1;
	
	printf("Enter the specified position:");
	scanf("%d", &p);
	
	if(p<0 || p>=k) printf("Invalid position!\n");
	else {
	   for(i=p;i<k;i++){
		   a[i] = a[i+1];
	    }
   }
}
void print(signed int a[], int k){
	int i;
	for(i=0;i<k;i++){
		printf("%d ", a[i]); 
   }
}
void insert(signed int sA1[], int j){
	int k = choose();
     	if(k==1) ib(sA1, j);
		else if(k==2) ie(sA1, j);
		else if(k==3) iu(sA1, j);
		else printf("Invalid!");

		printf("The elements of your after Inserting Array:\n");
		print(sA1, j+1);
		printf("\n");
}
void modify(signed int a[], int j){
	int k = choose();
	int n, p;
	printf("Enter the value to modify Array:");
	scanf("%d", &n);
	if(k==1) a[0] = n;
	else if(k==2) a[j-1] = n;
	else if(k==3){
		printf("Enter the specified position to modify :");
		scanf("%d", &p);
		a[p]=n;
	}
	else printf("Invalid!");

	printf("The elements of your after Modifying Array:\n");
	print(a,j);
	printf("\n");
}

void delete(signed int a[], int j){
    int k = choose();
	int p;
	if(k==1) db(a, j);
	else if(k==2) de(a,j);
	else if(k==3) du(a,j);
	else printf("Invalid!");

    printf("The elements of your after Deleting Array:\n");
	print(a,j-1);
	printf("\n");
}
//main program starts
int main(){
    signed int sA1[10], sA2[10], mA[20];
	int i,j,k,l,m,n;
//Sub Array 1 creating
	for(i=0;i<10;i++){
		printf("Enter the number of your [%d] index value of signed Sub Array 1:", i);
		scanf("%d", &sA1[i]);
		printf("\n");
	}
	printf("The elements of your Sub Array 1:\n");
	for(i=0;i<10;i++){
		printf("%d  ", sA1[i]);
	}
	printf("\n");
// //Sub Array 2 creating
	for(i=0;i<10;i++){
		printf("Enter the number of your [%d] index value of signed Sub Array 2:", i);
		scanf("%d", &sA2[i]);
		printf("\n");
	}
	printf("The elements of your Sub Array 1:\n");
	print(sA2,10);
	printf("\n");
//Main Array creating
	for(i=0;i<20;i++){
		printf("Enter the number of your [%d] index value of signed Main Array:", i);
		scanf("%d", &mA[i]);
		printf("\n");
	}
	printf("The elements of your Sub Array 1:\n");
	print(mA,20);
	printf("\n");
//Inserting in an Array
   printf("Going to perform INSERTING TASK :\n");
   j = array();
   printf("You have choosen the array number : %d\n", j);
    if(j == 1){
   	insert(sA1, 10);
	}
	else if(j==2){
		insert(sA2, 10);
	}
	else if(j==3){
		insert(mA, 20);
	}
	
//Modify
    printf("Going to perform MODIFYING TASK :\n");
    j = array();
    printf("You have choosen the array number : %d\n", j);
    if(j == 1){
    	modify(sA1, 10);
	}
	else if(j==2){
		modify(sA2, 10);
	}
	else if(j==3){
		modify(mA, 20);
	}
//Delete
    printf("Going to perform DELETING TASK :\n");
    j = array();
    printf("You have choosen the array number : %d\n", j);
    if(j == 1){
    	delete(sA1, 10);
	}
	else if(j==2){
		delete(sA2, 10);
	}
	else if(j==3){
		delete(mA, 20);
return 0;
}
}