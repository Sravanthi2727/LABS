#include<stdio.h>
//function to choose array
int array(){
	int n;
	printf("Enter:\n 1 for choosing Sub Array 1\n 2 choosing for Sub Array 2\n 3 choosing for Main Array\n");
	scanf("%d", &n);
    return n;
}

//function to choose option
int choose(){
	int n, i;
	printf("Enter:\n 1 for choosing to perform task at the beginning \n 2 for choosing to perform task at the ending \n 3 for choosing to perform task at the given position by you \n");
	scanf("%d", &n);
	printf("\n");
	return n;
}

//function insert by user
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

//function insert at the end
void ie(signed int a[],int k){
	int i, n;
	printf("Enter the value to insert at the end:");
	scanf("%d", &n);
	a[k]=n;
}

//function insert at the begin
void ib(signed int a[],int k){
	int i, n;
	printf("Enter the value to insert at beginning:");
	scanf("%d", &n);
	for(i=k-1;i>=0;i--){
		a[i+1] = a[i];
	}
	a[0]=n;
}


//function delete at the begin
void db(signed int a[], int k){
	int i;
	for(i=0;i<k;i++){
		a[i] = a[i+1];
	}
}

//function delete at the end
void de(signed int a[], int k){
	int i;
	for(i=0;i<k-1;i++){
		a[i] = a[i];
	}
}

//function delete at the end
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

//function to print array
void print(signed int a[], int k){
	int i;
	for(i=0;i<k;i++){
		printf("%d ", a[i]); 
   }
}

//insert function
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

//modify function
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

//delete function
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

//reverse function
void reverse(signed int a[], int j){
	int t[j];
	int i;
	for(i=0;i<j;i++){
		t[j-i-1]=a[i];
	}
	for(i=0;i<j;i++){
		a[i]=t[i];
	}
	print(a,j);
}

//add function
int add(int signed a[], int k){
	int s = 0,i;
	for(i=0;i<k;i++){
		s += a[i];
	}
	return s;
}

//sum with recursion
int sum(int signed a[], int k){
    if(k==0) return 0;
	else return a[k-1]+sum(a,k-1);
}

//array search
int search(int signed a[], int k, int v){
	for(int i = 0; i<k; i++){
		if(a[i] == v) return i;
	}
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
	print(sA1,10);
	printf("\n");
// // //Sub Array 2 creating
// 	for(i=0;i<10;i++){
// 		printf("Enter the number of your [%d] index value of signed Sub Array 2:", i);
// 		scanf("%d", &sA2[i]);
// 		printf("\n");
// 	}
// 	printf("The elements of your Sub Array 1:\n");
// 	print(sA2,10);
// 	printf("\n");
// //Main Array creating
// 	for(i=0;i<20;i++){
// 		printf("Enter the number of your [%d] index value of signed Main Array:", i);
// 		scanf("%d", &mA[i]);
// 		printf("\n");
// 	}
// 	printf("The elements of your Sub Array 1:\n");
// 	print(mA,20);
// 	printf("\n");
// //Inserting in an Array
//    printf("Going to perform INSERTING TASK :\n");
//    j = array();
//    printf("You have choosen the array number : %d\n", j);
//     if(j == 1){
//    	insert(sA1, 10);
// 	}
// 	else if(j==2){
// 		insert(sA2, 10);
// 	}
// 	else if(j==3){
// 		insert(mA, 20);
// 	}
	
// //Modify
//     printf("Going to perform MODIFYING TASK :\n");
//     j = array();
//     printf("You have choosen the array number : %d\n", j);
//     if(j == 1){
//     	modify(sA1, 10);
// 	}
// 	else if(j==2){
// 		modify(sA2, 10);
// 	}
// 	else if(j==3){
// 		modify(mA, 20);
// 	}
// //Delete
//     printf("Going to perform DELETING TASK :\n");
//     j = array();
//     printf("You have choosen the array number : %d\n", j);
//     if(j == 1){
//     	delete(sA1, 10);
// 	}
// 	else if(j==2){
// 		delete(sA2, 10);
// 	}
// 	else if(j==3){
// 		delete(mA, 20);
//     }

// //reverse
//    printf("Going to perform Reversing task :\n");
//    j = array();
//    if(j == 1){
//     	reverse(sA1, 10);
// 	}
// 	else if(j==2){
// 		reverse(sA2, 10);
// 	}
// 	else if(j==3){
// 		reverse(mA, 20);
//     }

// //merge 2 arrays in descending order
//    printf("\nMerging 2 arrays in descending order & the arrays are :\n");
//    int a[6]={10,2,8,4,5,0}, b[6]={6,3,8,9,1,-1}, merge[12], h=0;
//    print(a,6);
//    printf("\n"); 
//    print(b,6);
//    printf("\n"); 
//    for(i=0;i<6;i++) merge[h++] = a[i];
//    for(i=0;i<6;i++) merge[h++] = b[i];
//    for(i=0;i<11;i++){
// 	   int k = i;
// 	   for(j=i+1;j<12;j++){
// 		  if(merge[k]<merge[j]) k = j;
// 	   }
// 	   int t = merge[i];
// 	   merge[i] = merge[k];
// 	   merge[k] = t;
//    }
//    print(merge,12);

// //sum of all elements
//    printf("\nWe going to perform Sum Of All Elements :\n");
//    j = array();
//    if(j == 1) printf("Sum of all elements : %d, %d", add(sA1, 10), sum(sA1, 10));
//    else if(j == 2) printf("Sum of all elements %d, %d:",add(sA2, 10), sum(sA2, 10));
//    else if(j==3) printf("Sum of all elements : %d, %d",add(mA, 20), sum(mA, 20));
//    printf("\n");
// //separating positive and negative elements from array from main array.
//    int s1[10], s2[10];
//    m = 0, n = 0;
//    for(i=0;i<20;i++){
// 	if(mA[i]<0) s1[m++] = mA[i];
// 	else s2[n++]=mA[i];
//    }
//    printf("The positive numbers from Main Array are :"); print(s2, n);
//    printf("\nThe negative numbers from Main Array are :"); print(s1, m);

// //copy sequence into main array.
//     printf("\nEnter\n1 - to copy from Sub  Array 1 and 2 - from Sub Array 2 :");
// 	scanf("%d", &l);
// 	if(l==1){
// 		for(i=0;i<10;i++) mA[i] = sA1[i];
// 	}
// 	else {
// 		for(i=0;i<10;i++) mA[i] = sA2[i];
// 	}
// 	print(mA,10);

//array searching
    int v;
    printf("\nNow we are going to find the index value for the given  value by you in array! :\n");
	printf("Enter the Value :");
	scanf("%d", &v);
	j = array();
    if(j==1) printf("You are element is at : %d", search(sA1, 10, v) );
	else if(j==2) printf("You are element is at : %d",  search(sA2, 10, v));
	else if(j==3) printf("You are element is at : %d",search(mA, 20, v) );
return 0;

}