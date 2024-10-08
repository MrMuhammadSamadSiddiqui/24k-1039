#include <stdio.h>
int main (){
	int a;
	int b;
	int c ;
	int year ;
	printf ("Please input the year number: ");
    scanf ("%d",&year);
    a= year%400;
    b= year%4 ;
    c= year%100 ;
    if (a==0){
    	printf ("%d is a leap year", year);
	}
	else if (b==0 && c!=0){
		printf ("%d is a leap year", year);
	}
	else {
		printf ("%d is not a leap year ",year);
	}

}