#include <stdio.h>
int main (){
	int number ;
	int a ;
	int b ;
	printf ("Please input a number : ");
	scanf ("%d",&number);
	a=number%3;
	b=number%5;
	if (a==0 && b==0){
		printf ("%d is divisible by both 3 and 5 ",number );
	}
	else if (a==0){
	 printf ("%d is divisible by 3 but not by 5",number );
	}
	else if (b==0){
		printf ("%d is divisible by 5 but not by 3 ",number );
	}
}