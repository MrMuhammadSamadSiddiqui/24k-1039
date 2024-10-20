#include <stdio.h>
int main (){
	int input;
	int a;
	printf  ("Kindly input a number: ");
	scanf  ("%d",&input);
	if (input ==0){
		printf ("Number is 0");
	}
	else if (input>0){
		a=input%2 ;
		if (a==0){
			printf ("The number is positive and an even number");
	} 
		else {
			printf ("The number is positive and an odd number");
		}
		
	}
	else if (input<0){
		printf ("The number is negative");
	}
}