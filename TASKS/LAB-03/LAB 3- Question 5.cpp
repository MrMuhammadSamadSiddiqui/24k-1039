#include <stdio.h>
int main (){
	int p ;
	int t ;
	float r ;
	float a ;
	float b ;
	float c ;
	printf ("Please enter the principal ammount between Rs100 to Rs1000000 :\t") ;
	scanf ("%d",&p) ;
	printf ("Please enter the rate of interest between 5-10% : \t") ;
	scanf ("%f",&r) ;
	printf ("Please enter the time period between 1 to 10 years: \t") ;
	scanf ("%d",&t) ;
	a=p*r*t ;
	b=a/100 ;
	c=p+b ;
	printf ("Your simple interest=%f \n",b);
	printf ("Your total ammount=%f \n",c);
	
}