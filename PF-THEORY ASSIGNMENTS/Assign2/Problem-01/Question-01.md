#include<stdio.h>
int second_smallest_number_finder(){
	int i,j,k,r,l,n ;
	printf ("\t\tTHIS PROGRAMS FINDS THE SECOND SMALLEST INTEGER IN AN ARRAY");
	printf ("\nKindly input how many numbers you want to enter : ");
	scanf ("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		printf ("Kindly input number %d : ",i+1);
		scanf ("%d",&arr[i]);
	}
	k=arr[i-1]; 
	for (i=0;i<n;i++){
		if (arr[i]<k){
			k=arr[i];
			j=i;
		}
		
	}
	r=arr[j+1];
	for (i=0;i<n;i++){
		if (arr[i]<r && arr[i]!=k){
			r=arr[i];
		}
		
	}
	return r;
}
int main (){
	int s ;
	s=second_smallest_number_finder();
	printf ("THE SECOND SMALLEST ELEMENT IN THE ARRAY YOU ENTERED IS => %d",s);
	
}
