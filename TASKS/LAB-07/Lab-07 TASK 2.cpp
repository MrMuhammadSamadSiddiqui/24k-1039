#include <stdio.h>
int main (){
	int i=0 ;
	int n ;
	printf ("How many numbers you want to enter : ") ;
	scanf ("%d",&n);
	int arr[n] ;
	for (i=0;i<n;i++){
		printf ("Kindly input number%d : ",i+1);
		scanf ("%d",&arr[i]);
	}
	printf ("{ ") ;
	i=i-1 ;
	while (i>=0){
	printf ("%d , ",arr[i]);
	i=i-1 ;
    }
    printf ("}");
	
}