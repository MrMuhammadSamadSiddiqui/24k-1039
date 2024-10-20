#include <stdio.h>
int main (){
	int a=0 ;
	int b=0 ;
	int i=0 ;
	int n ;
	printf ("\t\t THIS PROGRAM WILL TELL YOU THE MINIMUM AND MAXIMUM OF ALL THE VALUES YOU HAVE ENTERED\n\nKindly input how many values you have to enter : ");
	scanf ("%d",&n);
	int arr[n] ;
	for (i=0;i<n;i++){
		printf ("Number%d : ",i+1);
		scanf ("%d",&arr[i]);
	}
	i=i-1 ;
	a=arr[i];
	while (i>=0){
		if (arr[i]>b){
			b=arr[i] ;
		}
		else if (arr[i]<a){
			a=arr[i] ;
		}
		i=i-1 ;
	
	}
	printf ("Minimum value is : %d",a);
	printf ("\nMaximum value is : %d",b) ;
}