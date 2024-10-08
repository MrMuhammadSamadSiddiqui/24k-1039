#include <stdio.h>
int main (){
	int age ;
	int b ;
	char option ;
	printf ("THIS PROGRAM WILL TELL YOU WHETHER OR NOT YOU ARE ELIGIBLE TO VOTE\nKindly input your age : ");
	scanf ("%d",&age);
	printf ("\nKindly input whether you have citizenship of the country where you want to vote\nyes:Y\tno:N\nYour option: ");
	scanf (" %c",&option);
	if (age>=18 && option=='Y'){
	  printf ("You are eligible to vote");
    }
    else if (age<18 && option=='Y'){
    	b=18-age ;
    	printf ("Sorry you are not elible to vote.You will be eligible to vote after %d years ",b);
	}
	else if (age>=18 && option=='N'){
		printf ("Sorry you are not eligible to vote . You will be eligible to vote if you get a citizenship ");
	}
	else {
			b=18-age ;
		printf ("Sorry you are not eligible to vote . You will be eligible to vote after %d year as well as after you get a citizenship ",b);
}
}