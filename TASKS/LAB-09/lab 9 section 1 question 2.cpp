#include <stdio.h>
int number_checker(int n){
	int c;
	if (n%2==0){
		c==0 ;
	}
	else if (n%2!=0){
		c==1 ;
	}
	return c ;
}
   int main (){
   	int d ;
   	int n ;
   	printf ("\t\t THIS PROGRAM CHECKS WHETHER A NUMBER IS EVEN OR ODD\n");
	printf ("Kindly input the number : ");
	scanf("%d",&n);
   	d=number_checker(n);
   	if (d==0){
   		printf ("%d is an even number ",n);
	   }
	else if (d==1){
		printf ("%d is an odd  number ",n);
	}
   }