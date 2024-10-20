#include <stdio.h>
int main (){
	int a,i,sum=0 ,d ;
	i=0 ;
	printf ("\t\tTHIS PROGRAM WILL TELL YOU THE SUM OF INTEGER ELEMENTS YOU ENTER ");
	printf ("\nKindly input how many numbers you want to input  :  ");
	scanf ("%d",&a);
	int arr[a] ; 
	while (i<a){
		printf ("Kindly input number %d : " , i+1);
		scanf ("%d", &arr[i]);
		i=i+1 ;
	}
	for (i=0;i<a;i++){
		sum = arr[i]+sum ;
		
	}
	printf ("Sum of the %d numbers you entered is %d ",a,sum) ;
}