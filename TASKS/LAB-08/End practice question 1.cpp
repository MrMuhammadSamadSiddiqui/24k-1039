#include <stdio.h>
int main (){
	int b=1 ;
	int c=1 ;
	int i=1 ;
	int a   ;
	printf ("This program will provide you the list of prime numbers till a number n\nInput a number n : ");
	scanf ("%d",&a);
	printf ("List of prime numbers till %d : ",a) ;
	while (b<a){
		b=b+1 ; 
		i=1   ;
		c=1   ;
		while (c!=0 && i<b/2){
			i=i+1 ; 
			c=b%i ;
		}
		if (c!=0){
		printf ("%d , " , b) ;
	}
    }
}