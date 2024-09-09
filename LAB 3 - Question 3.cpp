#include <stdio.h>
int main (){
	int a ;
	float b;
	float c ;
	printf ("Please input your salary\t");
	scanf ("%d",&a);
	printf ("Please input the tax rate\t");
	scanf ("%f",&b);
	b=(b/100)*a ; 
	c=a-b ;
	printf ("Your tax payable=%f\n",b);
	printf ("Your remaining salary=%f\n",c);
return 0;}