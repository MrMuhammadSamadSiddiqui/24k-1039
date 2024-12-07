#include <stdio.h>
void print_elements(int arr[],int size){
	size=size-1;
	if (size>=0){
		print_elements (arr,size);
		printf ("%d\n",arr[size]);
	}
	

}
int main (){
	int n,i ;
	printf ("How many elements you want to enter in the array : ");
	scanf ("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		printf ("Kindly input integer %d : ",i+1);
		scanf ("%d",&arr[i]);
	}
	print_elements (arr,n);

}
