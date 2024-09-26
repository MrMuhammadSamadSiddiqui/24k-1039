#include <stdio.h>
int main (){
	int n;
	printf ("Kindly input a number greater than 0 and less than or equal to 9 ");
	scanf (" %d",&n);
	if (n<=0){
		printf ("You did not follow restrictions");
	}
	else if (n==1){
		printf ("one");
	}
	else if (n==2){
		printf ("two");
	}
	else if (n==3){
		printf ("three");
    }
    else if (n==4){
		printf ("four");
	}
	else if (n==5){
		printf ("five");
	}
	else if (n==6){
		printf ("six");
    }
    else if (n==7){
		printf ("one");
    }
	else if (n==8){
		printf ("eight");
    }
    else if (n==9){
		printf ("nine");
    }
    else {
    	printf ("greater then nine");
    }
     
	}
     
