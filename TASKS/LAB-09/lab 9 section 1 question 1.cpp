#include <stdio.h>
    float product(){
	float a,b,result ;
	printf ("\t\tTHIS PROGRAMS TELLS YOU THE PRODUCT ");
	printf ("\nKindly input number 1 :");
	scanf ("%f",&a);
	printf ("\nKindly input number 2 : ");
	scanf ("%f",&b);
	result = a*b ;
	return result ;
	
}
   int main (){
   	float  result;
	result = product () ;
   	printf ("\tResult of multiplication : %.2f ",result );
   }